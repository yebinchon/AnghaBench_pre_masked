
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_ae_dev {int hw_err_reset_req; struct hclge_dev* priv; } ;
struct hclge_dev {TYPE_1__* pdev; int state; } ;
typedef enum hnae3_reset_type { ____Placeholder_hnae3_reset_type } hnae3_reset_type ;
struct TYPE_2__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hclge_dev*) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct hnae3_ae_dev *VAR_2)
{
 struct hclge_dev *VAR_3 = VAR_2->priv;
 enum hnae3_reset_type VAR_4;

 if (FUNC_2(VAR_0, &VAR_3->state) ||
     VAR_3->pdev->revision < 0x21)
  return;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 != VAR_1)
  FUNC_1(VAR_4, &VAR_2->hw_err_reset_req);
}
