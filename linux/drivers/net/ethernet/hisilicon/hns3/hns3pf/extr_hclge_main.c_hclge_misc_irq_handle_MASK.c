
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hclge_dev {int misc_vector; TYPE_1__* pdev; int reset_request; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hclge_dev*,int*) ;
 int FUNC_2 (struct hclge_dev*,int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct hclge_dev*) ;
 int FUNC_5 (struct hclge_dev*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 struct hclge_dev *VAR_4 = VAR_3;
 u32 VAR_5 = 0;
 u32 VAR_6;

 FUNC_3(&VAR_4->misc_vector, 0);
 VAR_6 = FUNC_1(VAR_4, &VAR_5);


 switch (VAR_6) {
 case 130:
  FUNC_6(VAR_0, &VAR_4->reset_request);

 case 128:
  FUNC_5(VAR_4);
  break;
 case 129:
  FUNC_4(VAR_4);
  break;
 default:
  FUNC_0(&VAR_4->pdev->dev,
    "received unknown or unhandled event of vector0\n");
  break;
 }

 FUNC_2(VAR_4, VAR_6, VAR_5);






 if (!VAR_5 ||
     VAR_6 == 129) {
  FUNC_3(&VAR_4->misc_vector, 1);
 }

 return VAR_1;
}
