
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nozomi {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct nozomi *VAR_2)
{
 if (FUNC_1(&VAR_2->pdev->dev, &VAR_0))
  FUNC_0(&VAR_2->pdev->dev,
   "Could not create sysfs file for card_type\n");
 if (FUNC_1(&VAR_2->pdev->dev, &VAR_1))
  FUNC_0(&VAR_2->pdev->dev,
   "Could not create sysfs file for open_ttys\n");
}
