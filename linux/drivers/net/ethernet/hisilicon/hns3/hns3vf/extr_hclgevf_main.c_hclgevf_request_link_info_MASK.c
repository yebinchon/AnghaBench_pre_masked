
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hclgevf_dev {TYPE_1__* pdev; } ;
typedef int resp_msg ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hclgevf_dev*,int ,int ,int *,int ,int,int *,int) ;

__attribute__((used)) static void FUNC_2(struct hclgevf_dev *VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 VAR_2 = FUNC_1(VAR_1, VAR_0, 0, ((void*)0),
          0, 0, &VAR_3, sizeof(VAR_3));
 if (VAR_2)
  FUNC_0(&VAR_1->pdev->dev,
   "VF failed to fetch link status(%d) from PF", VAR_2);
}
