
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {TYPE_1__* pdev; } ;
struct hclge_dbg_reg_type_info {char* reg_type; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct hclge_dbg_reg_type_info*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct hclge_dev*,char const*) ;
 int FUNC_3 (struct hclge_dev*,struct hclge_dbg_reg_type_info*,char const*) ;
 struct hclge_dbg_reg_type_info* VAR_0 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_6(struct hclge_dev *VAR_1, const char *VAR_2)
{
 struct hclge_dbg_reg_type_info *VAR_3;
 bool VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  VAR_3 = &VAR_0[VAR_5];
  if (!FUNC_5(VAR_2, VAR_3->reg_type,
        FUNC_4(VAR_3->reg_type))) {
   FUNC_3(VAR_1, VAR_3, VAR_2);
   VAR_4 = 1;
  }
 }

 if (FUNC_5(VAR_2, "dcb", 3) == 0) {
  FUNC_2(VAR_1, &VAR_2[sizeof("dcb")]);
  VAR_4 = 1;
 }

 if (!VAR_4) {
  FUNC_1(&VAR_1->pdev->dev, "unknown command\n");
  return;
 }
}
