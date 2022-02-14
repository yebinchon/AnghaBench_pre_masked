
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qla_hw_data {int md_dump_size; int * md_dump; scalar_t__ md_tmplt_hdr; } ;
struct qla82xx_md_template_hdr {int capture_debug_level; scalar_t__* capture_size_array; } ;
struct TYPE_4__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int) ;

int
FUNC_2(scsi_qla_host_t *VAR_4)
{
 struct qla_hw_data *VAR_5 = VAR_4->hw;
 int VAR_6, VAR_7;
 struct qla82xx_md_template_hdr *VAR_8;

 VAR_8 = (struct qla82xx_md_template_hdr *)VAR_5->md_tmplt_hdr;

 if (VAR_1 < 0x3 || VAR_1 > 0x7F) {
  VAR_1 = VAR_8->capture_debug_level & 0xFF;
  FUNC_0(VAR_2, VAR_4, 0xb045,
      "Forcing driver capture mask to firmware default capture mask: 0x%x.\n",
      VAR_1);
 }

 for (VAR_6 = 0x2, VAR_7 = 1; (VAR_6 & VAR_0); VAR_6 <<= 1, VAR_7++) {
  if (VAR_6 & VAR_1)
   VAR_5->md_dump_size += VAR_8->capture_size_array[VAR_7];
 }

 if (VAR_5->md_dump) {
  FUNC_0(VAR_3, VAR_4, 0xb046,
      "Firmware dump previously allocated.\n");
  return 1;
 }

 VAR_5->md_dump = FUNC_1(VAR_5->md_dump_size);
 if (VAR_5->md_dump == ((void*)0)) {
  FUNC_0(VAR_3, VAR_4, 0xb047,
      "Unable to allocate memory for Minidump size "
      "(0x%x).\n", VAR_5->md_dump_size);
  return 1;
 }
 return 0;
}
