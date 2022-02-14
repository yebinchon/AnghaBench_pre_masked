
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {TYPE_1__* pdev; int hw; } ;
struct hclge_desc {int flag; } ;
typedef enum hclge_opcode_type { ____Placeholder_hclge_opcode_type } hclge_opcode_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int,int) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_1,
      struct hclge_desc *VAR_2, int VAR_3,
      enum hclge_opcode_type VAR_4)
{
 struct hclge_desc *VAR_5 = VAR_2;
 int VAR_6, VAR_7;

 FUNC_3(VAR_5, VAR_4, 1);
 for (VAR_6 = 0; VAR_6 < VAR_3 - 1; VAR_6++) {
  VAR_5->flag |= FUNC_0(VAR_0);
  VAR_5++;
  FUNC_3(VAR_5, VAR_4, 1);
 }

 VAR_5 = VAR_2;
 VAR_7 = FUNC_2(&VAR_1->hw, VAR_5, VAR_3);
 if (VAR_7)
  FUNC_1(&VAR_1->pdev->dev,
   "Query dfx reg cmd(0x%x) send fail, status is %d.\n",
   VAR_4, VAR_7);

 return VAR_7;
}
