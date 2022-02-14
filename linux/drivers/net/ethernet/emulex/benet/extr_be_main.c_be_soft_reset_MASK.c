
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct be_adapter {scalar_t__ pcicfg; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct be_adapter *VAR_2)
{
 u32 VAR_3;

 FUNC_0(&VAR_2->pdev->dev, "Initiating chip soft reset\n");
 VAR_3 = FUNC_1(VAR_2->pcicfg + VAR_0);
 VAR_3 |= VAR_1;
 FUNC_2(VAR_3, VAR_2->pcicfg + VAR_0);
}
