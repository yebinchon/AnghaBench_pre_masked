
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct hclge_get_fd_allocation_cmd {int stage2_counter_num; int stage1_counter_num; int stage2_entry_num; int stage1_entry_num; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_1,
       u32 *VAR_2,
       u32 *VAR_3,
       u16 *VAR_4,
       u16 *VAR_5)
{
 struct hclge_get_fd_allocation_cmd *VAR_6;
 struct hclge_desc VAR_7;
 int VAR_8;

 FUNC_2(&VAR_7, VAR_0, 1);

 VAR_6 = (struct hclge_get_fd_allocation_cmd *)VAR_7.data;

 VAR_8 = FUNC_1(&VAR_1->hw, &VAR_7, 1);
 if (VAR_8) {
  FUNC_0(&VAR_1->pdev->dev, "query fd allocation fail, ret=%d\n",
   VAR_8);
  return VAR_8;
 }

 *VAR_2 = FUNC_4(VAR_6->stage1_entry_num);
 *VAR_3 = FUNC_4(VAR_6->stage2_entry_num);
 *VAR_4 = FUNC_3(VAR_6->stage1_counter_num);
 *VAR_5 = FUNC_3(VAR_6->stage2_counter_num);

 return VAR_8;
}
