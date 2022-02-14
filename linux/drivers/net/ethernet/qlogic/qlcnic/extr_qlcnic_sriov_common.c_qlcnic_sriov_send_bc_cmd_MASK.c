
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_vf_info {int send_cmd_lock; struct qlcnic_bc_trans* send_cmd; int state; } ;
struct qlcnic_bc_trans {int func_id; scalar_t__ cmd_id; struct qlcnic_vf_info* vf; } ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {TYPE_1__* sriov; } ;
struct TYPE_3__ {struct qlcnic_vf_info* vf_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qlcnic_bc_trans*,struct qlcnic_vf_info*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qlcnic_vf_info*,struct qlcnic_bc_trans*,int ) ;
 int FUNC_4 (struct qlcnic_adapter*,int) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct qlcnic_adapter *VAR_4,
        struct qlcnic_bc_trans *VAR_5, int VAR_6)
{
 struct qlcnic_vf_info *VAR_7;
 int VAR_8, VAR_9 = FUNC_4(VAR_4, VAR_6);

 if (VAR_9 < 0)
  return -VAR_0;

 VAR_7 = &VAR_4->ahw->sriov->vf_info[VAR_9];
 VAR_5->vf = VAR_7;
 VAR_5->func_id = VAR_6;

 if (!FUNC_7(VAR_3, &VAR_7->state)) {
  if (FUNC_5(VAR_4))
   return -VAR_0;
  if (FUNC_6(VAR_4) &&
      VAR_5->cmd_id != VAR_1)
   return -VAR_0;
 }

 FUNC_1(&VAR_7->send_cmd_lock);
 VAR_7->send_cmd = VAR_5;
 VAR_8 = FUNC_0(VAR_5, VAR_7, VAR_2);
 FUNC_3(VAR_7, VAR_5, VAR_2);
 FUNC_2(&VAR_7->send_cmd_lock);
 return VAR_8;
}
