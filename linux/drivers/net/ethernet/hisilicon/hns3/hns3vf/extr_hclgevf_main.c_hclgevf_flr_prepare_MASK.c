
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_ae_dev {struct hclgevf_dev* priv; } ;
struct hclgevf_dev {TYPE_1__* pdev; int flr_state; int default_reset_request; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct hnae3_ae_dev *VAR_5)
{


 struct hclgevf_dev *VAR_6 = VAR_5->priv;
 int VAR_7 = 0;

 FUNC_0(VAR_3, &VAR_6->flr_state);
 FUNC_0(VAR_2, &VAR_6->flr_state);
 FUNC_4(VAR_4, &VAR_6->default_reset_request);
 FUNC_2(VAR_6->pdev, ((void*)0));

 while (!FUNC_5(VAR_3, &VAR_6->flr_state) &&
        VAR_7++ < 50)
  FUNC_3(100);

 if (!FUNC_5(VAR_3, &VAR_6->flr_state))
  FUNC_1(&VAR_6->pdev->dev,
   "flr wait down timeout: %d\n", VAR_7);
}
