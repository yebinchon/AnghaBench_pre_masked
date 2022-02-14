
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct scsi_qla_host {int * reg_tbl; TYPE_1__* isp_ops; } ;
struct TYPE_2__ {int (* wr_reg_direct ) (struct scsi_qla_host*,int ,size_t const) ;} ;


 int FUNC_0 (struct scsi_qla_host*,int ,size_t const) ;

__attribute__((used)) static inline void FUNC_1(struct scsi_qla_host *VAR_0,
           const uint32_t VAR_1,
           const uint32_t VAR_2)
{
 VAR_0->isp_ops->wr_reg_direct(VAR_0, VAR_0->reg_tbl[VAR_1], VAR_2);
}
