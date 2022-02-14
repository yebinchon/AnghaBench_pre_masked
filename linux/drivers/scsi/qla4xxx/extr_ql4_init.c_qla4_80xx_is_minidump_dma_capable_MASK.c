
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {int dummy; } ;
struct qla4_8xxx_minidump_template_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scsi_qla_host*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct scsi_qla_host *VAR_4,
  struct qla4_8xxx_minidump_template_hdr *VAR_5)
{
 int VAR_6 = (FUNC_0(VAR_4)) ? VAR_2 :
     VAR_3;
 int VAR_7 = 1;
 uint32_t *VAR_8;

 VAR_8 = (uint32_t *)((char *)VAR_5 + VAR_6);

 if (!(FUNC_1(*VAR_8) & VAR_0)) {
  FUNC_2(VAR_1, VAR_4, "PEX DMA Not supported %d\n",
      *VAR_8);
  VAR_7 = 0;
 }

 return VAR_7;
}
