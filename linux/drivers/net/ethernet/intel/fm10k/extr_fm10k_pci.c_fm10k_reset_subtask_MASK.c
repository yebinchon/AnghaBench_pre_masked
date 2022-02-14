
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fm10k_intfc {TYPE_1__* pdev; int netdev; int flags; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct fm10k_intfc*) ;
 int FUNC_2 (struct fm10k_intfc*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct fm10k_intfc *VAR_1)
{
 int VAR_2;

 if (!FUNC_4(VAR_0,
    VAR_1->flags))
  return;
 if (!FUNC_2(VAR_1))
  return;

 FUNC_3(VAR_1->netdev, "Reset interface\n");

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  FUNC_0(&VAR_1->pdev->dev,
   "fm10k_handle_reset failed: %d\n", VAR_2);
}
