
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qla_hw_data {int vport_slock; int loop_id_map; } ;
struct TYPE_3__ {int vp_idx; struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,int ) ;

int
FUNC_4(scsi_qla_host_t *VAR_2)
{
 int VAR_3 = VAR_0;
 int VAR_4 = VAR_1 - VAR_2->vp_idx;
 unsigned long VAR_5;
 struct qla_hw_data *VAR_6 = VAR_2->hw;

 if (VAR_2->vp_idx == 0) {
  FUNC_0(VAR_1, VAR_6->loop_id_map);
  return VAR_1;
 }


 FUNC_1(&VAR_6->vport_slock, VAR_5);
 for (; VAR_4 > 0; VAR_4--) {
  if (!FUNC_3(VAR_4, VAR_2->hw->loop_id_map)) {
   FUNC_0(VAR_4, VAR_2->hw->loop_id_map);
   VAR_3 = VAR_4;
   break;
  }
 }
 FUNC_2(&VAR_6->vport_slock, VAR_5);

 return VAR_3;
}
