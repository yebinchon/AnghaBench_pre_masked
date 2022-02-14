
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_pf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int,char*,int,char*) ;
 int FUNC_1 (struct i40e_pf*,int,int) ;
 int FUNC_2 (struct i40e_pf*,int,int) ;

int FUNC_3(int VAR_0, struct i40e_pf *VAR_1, int VAR_2,
      bool VAR_3, bool VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_1, VAR_2, VAR_4);


 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_1->pdev->dev,
    "VSI seid %d %sTx ring %d %sable timeout\n",
    VAR_0, (VAR_3 ? "XDP " : ""), VAR_2,
    (VAR_4 ? "en" : "dis"));
 }

 return VAR_5;
}
