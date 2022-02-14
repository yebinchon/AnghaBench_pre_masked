
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {scalar_t__* offset; int num_tc; scalar_t__* count; } ;
struct tc_mqprio_qopt_offload {scalar_t__* max_rate; TYPE_1__ qopt; scalar_t__* min_rate; } ;
struct i40e_vsi {scalar_t__ num_queue_pairs; TYPE_3__* back; } ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct i40e_vsi*) ;

__attribute__((used)) static int FUNC_3(struct i40e_vsi *VAR_3,
         struct tc_mqprio_qopt_offload *VAR_4)
{
 u64 VAR_5 = 0;
 u64 VAR_6 = 0;
 int VAR_7;

 if (VAR_4->qopt.offset[0] != 0 ||
     VAR_4->qopt.num_tc < 1 ||
     VAR_4->qopt.num_tc > VAR_2)
  return -VAR_0;
 for (VAR_7 = 0; ; VAR_7++) {
  if (!VAR_4->qopt.count[VAR_7])
   return -VAR_0;
  if (VAR_4->min_rate[VAR_7]) {
   FUNC_0(&VAR_3->back->pdev->dev,
    "Invalid min tx rate (greater than 0) specified\n");
   return -VAR_0;
  }
  VAR_6 = VAR_4->max_rate[VAR_7];
  FUNC_1(VAR_6, VAR_1);
  VAR_5 += VAR_6;

  if (VAR_7 >= VAR_4->qopt.num_tc - 1)
   break;
  if (VAR_4->qopt.offset[VAR_7 + 1] !=
      (VAR_4->qopt.offset[VAR_7] + VAR_4->qopt.count[VAR_7]))
   return -VAR_0;
 }
 if (VAR_3->num_queue_pairs <
     (VAR_4->qopt.offset[VAR_7] + VAR_4->qopt.count[VAR_7])) {
  return -VAR_0;
 }
 if (VAR_5 > FUNC_2(VAR_3)) {
  FUNC_0(&VAR_3->back->pdev->dev,
   "Invalid max tx rate specified\n");
  return -VAR_0;
 }
 return 0;
}
