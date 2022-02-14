
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scsi_qla_host {TYPE_2__* reg; TYPE_1__* qla4_82xx_reg; } ;
struct TYPE_4__ {int ctrl_status; } ;
struct TYPE_3__ {int host_status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_2 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_3 (struct scsi_qla_host*,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct scsi_qla_host *VAR_4)
{
 u32 VAR_5 = 0;
 int VAR_6 = VAR_3;

 if (FUNC_0(VAR_4))
  VAR_5 = FUNC_4(&VAR_4->qla4_82xx_reg->host_status);
 else if (FUNC_1(VAR_4) || FUNC_2(VAR_4))
  VAR_5 = FUNC_3(VAR_4, VAR_1);
 else
  VAR_5 = FUNC_5(&VAR_4->reg->ctrl_status);

 if (VAR_5 == VAR_0)
  VAR_6 = VAR_2;

 return VAR_6;
}
