
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_qla_host {TYPE_1__* isp_ops; } ;
struct TYPE_2__ {int (* wr_reg_indirect ) (struct scsi_qla_host*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_qla_host*,int ,int ) ;
 int FUNC_1 (struct scsi_qla_host*,int ,int ) ;
 int FUNC_2 (struct scsi_qla_host*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct scsi_qla_host *VAR_1,
      uint32_t VAR_2, uint32_t VAR_3,
      uint32_t VAR_4, uint32_t VAR_5,
      uint32_t VAR_6)
{
 int VAR_7 = VAR_0;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_4);
 if (VAR_7)
  goto exit_ipmdio_wr_reg;

 VAR_1->isp_ops->wr_reg_indirect(VAR_1, VAR_3, VAR_6);
 VAR_1->isp_ops->wr_reg_indirect(VAR_1, VAR_2, VAR_5);

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_4);
 if (VAR_7)
  goto exit_ipmdio_wr_reg;

exit_ipmdio_wr_reg:
 return VAR_7;
}
