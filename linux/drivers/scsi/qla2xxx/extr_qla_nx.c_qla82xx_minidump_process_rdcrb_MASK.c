
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct qla_hw_data {int dummy; } ;
struct TYPE_4__ {scalar_t__ addr_stride; } ;
struct qla82xx_md_entry_crb {scalar_t__ addr; scalar_t__ op_count; TYPE_1__ crb_strd; } ;
struct TYPE_5__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
typedef int qla82xx_md_entry_hdr_t ;


 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*,scalar_t__,int ,int ) ;

__attribute__((used)) static void
FUNC_2(scsi_qla_host_t *VAR_0,
 qla82xx_md_entry_hdr_t *VAR_1, uint32_t **VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_0->hw;
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 struct qla82xx_md_entry_crb *VAR_9;
 uint32_t *VAR_10 = *VAR_2;

 VAR_9 = (struct qla82xx_md_entry_crb *)VAR_1;
 VAR_4 = VAR_9->addr;
 VAR_5 = VAR_9->crb_strd.addr_stride;
 VAR_6 = VAR_9->op_count;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_8 = FUNC_1(VAR_3, VAR_4, 0, 0);
  *VAR_10++ = FUNC_0(VAR_4);
  *VAR_10++ = FUNC_0(VAR_8);
  VAR_4 += VAR_5;
 }
 *VAR_2 = VAR_10;
}
