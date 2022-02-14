
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ vp_idx; int dpc_flags; int hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_11__ {int state; TYPE_1__* vha; } ;
typedef TYPE_3__ fc_port_t ;
struct TYPE_9__ {scalar_t__ vp_idx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(scsi_qla_host_t *VAR_4, fc_port_t *VAR_5,
    int VAR_6, int VAR_7)
{
 if (FUNC_0(VAR_4->hw)) {
  FUNC_3(VAR_5, VAR_1);
  FUNC_2(VAR_4, VAR_5, VAR_7);
  return;
 }

 if (FUNC_1(&VAR_5->state) == VAR_2 &&
     VAR_4->vp_idx == VAR_5->vha->vp_idx) {
  FUNC_3(VAR_5, VAR_1);
  FUNC_2(VAR_4, VAR_5, VAR_7);
 }




 if (FUNC_1(&VAR_5->state) != VAR_0)
  FUNC_3(VAR_5, VAR_1);

 if (!VAR_6)
  return;

 FUNC_4(VAR_3, &VAR_4->dpc_flags);
}
