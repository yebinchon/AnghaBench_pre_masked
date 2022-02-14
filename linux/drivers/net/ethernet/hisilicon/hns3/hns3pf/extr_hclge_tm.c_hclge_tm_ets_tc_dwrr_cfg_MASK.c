
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hclge_pg_info {int * tc_dwrr; } ;
struct hclge_ets_tc_weight_cmd {int weight_offset; int * tc_weight; } ;
struct TYPE_4__ {TYPE_1__* tc_info; struct hclge_pg_info* pg_info; } ;
struct hclge_dev {int hw_tc_map; int hw; TYPE_2__ tm_info; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_3__ {size_t pgid; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_4)
{



 struct hclge_ets_tc_weight_cmd *VAR_5;
 struct hclge_desc VAR_6;
 unsigned int VAR_7;

 FUNC_2(&VAR_6, VAR_2, 0);
 VAR_5 = (struct hclge_ets_tc_weight_cmd *)VAR_6.data;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  struct hclge_pg_info *VAR_8;

  VAR_5->tc_weight[VAR_7] = 1;

  if (!(VAR_4->hw_tc_map & FUNC_0(VAR_7)))
   continue;

  VAR_8 =
   &VAR_4->tm_info.pg_info[VAR_4->tm_info.tc_info[VAR_7].pgid];
  VAR_5->tc_weight[VAR_7] = VAR_8->tc_dwrr[VAR_7];
 }

 VAR_5->weight_offset = 14;

 return FUNC_1(&VAR_4->hw, &VAR_6, 1);
}
