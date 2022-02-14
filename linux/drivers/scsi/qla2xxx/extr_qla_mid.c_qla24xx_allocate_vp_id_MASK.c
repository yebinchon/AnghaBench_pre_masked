
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct qla_hw_data {scalar_t__ max_npiv_vports; int vport_lock; int hardware_lock; int vport_slock; int vp_list; int num_vhosts; int vp_idx_map; } ;
struct TYPE_5__ {int list; scalar_t__ vp_idx; struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_1__*,int,char*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static uint32_t
FUNC_9(scsi_qla_host_t *VAR_2)
{
 uint32_t VAR_3;
 struct qla_hw_data *VAR_4 = VAR_2->hw;
 unsigned long VAR_5;


 FUNC_2(&VAR_4->vport_lock);
 VAR_3 = FUNC_0(VAR_4->vp_idx_map, VAR_4->max_npiv_vports + 1);
 if (VAR_3 > VAR_4->max_npiv_vports) {
  FUNC_4(VAR_1, VAR_2, 0xa000,
      "vp_id %d is bigger than max-supported %d.\n",
      VAR_3, VAR_4->max_npiv_vports);
  FUNC_3(&VAR_4->vport_lock);
  return VAR_3;
 }

 FUNC_6(VAR_3, VAR_4->vp_idx_map);
 VAR_4->num_vhosts++;
 VAR_2->vp_idx = VAR_3;

 FUNC_7(&VAR_4->vport_slock, VAR_5);
 FUNC_1(&VAR_2->list, &VAR_4->vp_list);
 FUNC_8(&VAR_4->vport_slock, VAR_5);

 FUNC_7(&VAR_4->hardware_lock, VAR_5);
 FUNC_5(VAR_2, VAR_0);
 FUNC_8(&VAR_4->hardware_lock, VAR_5);

 FUNC_3(&VAR_4->vport_lock);
 return VAR_3;
}
