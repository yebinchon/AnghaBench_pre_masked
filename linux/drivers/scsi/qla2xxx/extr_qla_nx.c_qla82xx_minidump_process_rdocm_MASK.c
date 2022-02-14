
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct qla_hw_data {scalar_t__ nx_pcibase; } ;
struct qla82xx_md_entry_rdocm {scalar_t__ read_addr; scalar_t__ read_addr_stride; scalar_t__ op_count; } ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;
typedef int qla82xx_md_entry_hdr_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(scsi_qla_host_t *VAR_0,
 qla82xx_md_entry_hdr_t *VAR_1, uint32_t **VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_0->hw;
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 struct qla82xx_md_entry_rdocm *VAR_9;
 uint32_t *VAR_10 = *VAR_2;

 VAR_9 = (struct qla82xx_md_entry_rdocm *)VAR_1;
 VAR_4 = VAR_9->read_addr;
 VAR_5 = VAR_9->read_addr_stride;
 VAR_6 = VAR_9->op_count;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_8 = FUNC_0(VAR_4 + VAR_3->nx_pcibase);
  *VAR_10++ = FUNC_1(VAR_8);
  VAR_4 += VAR_5;
 }
 *VAR_2 = VAR_10;
}
