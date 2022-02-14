
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int num_tc; int* offset; scalar_t__* count; } ;
struct tc_mqprio_qopt_offload {TYPE_2__ qopt; int * max_rate; scalar_t__* min_rate; } ;
struct iavf_adapter {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iavf_adapter*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct iavf_adapter *VAR_4,
       struct tc_mqprio_qopt_offload *VAR_5)
{
 u64 VAR_6 = 0;
 int VAR_7, VAR_8 = 0;
 u64 VAR_9 = 0;
 int VAR_10 = 0;

 if (VAR_5->qopt.num_tc > VAR_2 ||
     VAR_5->qopt.num_tc < 1)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 <= VAR_5->qopt.num_tc - 1; VAR_7++) {
  if (!VAR_5->qopt.count[VAR_7] ||
      VAR_5->qopt.offset[VAR_7] != VAR_8)
   return -VAR_0;
  if (VAR_5->min_rate[VAR_7]) {
   FUNC_0(&VAR_4->pdev->dev,
    "Invalid min tx rate (greater than 0) specified\n");
   return -VAR_0;
  }

  VAR_9 = FUNC_1(VAR_5->max_rate[VAR_7],
      VAR_3);
  VAR_6 += VAR_9;
  VAR_8 += VAR_5->qopt.count[VAR_7];
 }
 if (VAR_8 > VAR_1)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_4, VAR_6);
 return VAR_10;
}
