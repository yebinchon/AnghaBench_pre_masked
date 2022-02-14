
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int chip_reset_done; } ;
struct qla_hw_data {int base_qpair; TYPE_3__ flags; TYPE_2__* isp_ops; } ;
struct TYPE_12__ {scalar_t__ online; } ;
struct TYPE_15__ {int device_flags; int dpc_flags; TYPE_1__ flags; struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_13__ {int (* chip_diag ) (TYPE_4__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static int
FUNC_9(scsi_qla_host_t *VAR_4)
{
 int VAR_5 = 0;
 struct qla_hw_data *VAR_6 = VAR_4->hw;


 if (FUNC_4(VAR_4)) {
  VAR_4->flags.online = 0;
  VAR_5 = VAR_6->isp_ops->chip_diag(VAR_4);
  if (!VAR_5)
   VAR_5 = FUNC_6(VAR_4);
 }

 if (!VAR_5 && !(VAR_5 = FUNC_3(VAR_4))) {
  FUNC_0(VAR_3, &VAR_4->dpc_flags);
  VAR_6->flags.chip_reset_done = 1;


  FUNC_1(VAR_6);

  VAR_5 = FUNC_2(VAR_4);
  if (!VAR_5) {

   FUNC_5(VAR_4, VAR_6->base_qpair, 0, 0, VAR_2);
   FUNC_7(VAR_1, &VAR_4->dpc_flags);
  }


  if ((VAR_4->device_flags & VAR_0))
   VAR_5 = 0;
 }
 return (VAR_5);
}
