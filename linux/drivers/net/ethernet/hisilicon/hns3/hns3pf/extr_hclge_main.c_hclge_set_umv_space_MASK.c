
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hclge_umv_spc_alc_cmd {int space_size; int allocate; } ;
struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {int * data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,char*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct hclge_dev *VAR_2, u16 VAR_3,
          u16 *VAR_4, bool VAR_5)
{
 struct hclge_umv_spc_alc_cmd *VAR_6;
 struct hclge_desc VAR_7;
 int VAR_8;

 VAR_6 = (struct hclge_umv_spc_alc_cmd *)VAR_7.data;
 FUNC_3(&VAR_7, VAR_0, 0);
 if (!VAR_5)
  FUNC_4(VAR_6->allocate, VAR_1, 1);

 VAR_6->space_size = FUNC_0(VAR_3);

 VAR_8 = FUNC_2(&VAR_2->hw, &VAR_7, 1);
 if (VAR_8) {
  FUNC_1(&VAR_2->pdev->dev,
   "%s umv space failed for cmd_send, ret =%d\n",
   VAR_5 ? "allocate" : "free", VAR_8);
  return VAR_8;
 }

 if (VAR_5 && VAR_4)
  *VAR_4 = FUNC_5(VAR_7.data[1]);

 return 0;
}
