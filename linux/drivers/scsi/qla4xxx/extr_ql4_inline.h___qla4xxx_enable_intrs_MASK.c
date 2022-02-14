
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_qla_host {int flags; TYPE_3__* reg; } ;
struct TYPE_5__ {int intr_mask; } ;
struct TYPE_4__ {TYPE_2__ isp4022; } ;
struct TYPE_6__ {int ctrl_status; TYPE_1__ u1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_qla_host*) ;
 int FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static inline void
FUNC_6(struct scsi_qla_host *VAR_3)
{
 if (FUNC_0(VAR_3) | FUNC_1(VAR_3)) {
  FUNC_5(FUNC_4(VAR_2),
         &VAR_3->reg->u1.isp4022.intr_mask);
  FUNC_2(&VAR_3->reg->u1.isp4022.intr_mask);
 } else {
  FUNC_5(FUNC_4(VAR_1), &VAR_3->reg->ctrl_status);
  FUNC_2(&VAR_3->reg->ctrl_status);
 }
 FUNC_3(VAR_0, &VAR_3->flags);
}
