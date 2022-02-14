
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xlgmac_pdata {TYPE_1__* netdev; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int FUNC_0 (struct xlgmac_pdata*) ;
 int FUNC_1 (struct xlgmac_pdata*) ;

__attribute__((used)) static void FUNC_2(struct xlgmac_pdata *VAR_1)
{
 if (VAR_1->netdev->features & VAR_0)
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_1);
}
