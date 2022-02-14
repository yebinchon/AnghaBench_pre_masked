
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct qed_wfq_data {int min_speed; scalar_t__ configured; } ;
struct qed_vf_info {size_t vport_id; } ;
struct TYPE_2__ {struct qed_wfq_data* wfq_data; } ;
struct qed_hwfn {TYPE_1__ qm_info; } ;


 struct qed_vf_info* FUNC_0 (struct qed_hwfn*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct qed_hwfn *VAR_0, int VAR_1)
{
 struct qed_wfq_data *VAR_2;
 struct qed_vf_info *VAR_3;

 VAR_3 = FUNC_0(VAR_0, (u16) VAR_1, 1);
 if (!VAR_3)
  return 0;

 VAR_2 = &VAR_0->qm_info.wfq_data[VAR_3->vport_id];

 if (VAR_2->configured)
  return VAR_2->min_speed;
 else
  return 0;
}
