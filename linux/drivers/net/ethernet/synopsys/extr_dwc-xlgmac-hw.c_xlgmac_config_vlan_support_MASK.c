
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xlgmac_pdata {TYPE_1__* netdev; scalar_t__ mac_regs; } ;
struct TYPE_2__ {int features; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct xlgmac_pdata*) ;
 int FUNC_4 (struct xlgmac_pdata*) ;
 int FUNC_5 (struct xlgmac_pdata*) ;
 int FUNC_6 (struct xlgmac_pdata*) ;
 int FUNC_7 (struct xlgmac_pdata*) ;

__attribute__((used)) static void FUNC_8(struct xlgmac_pdata *VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_7->mac_regs + VAR_0);

 VAR_8 = FUNC_0(VAR_8, VAR_2,
         VAR_1, 0);
 VAR_8 = FUNC_0(VAR_8, VAR_4,
         VAR_3, 1);
 FUNC_2(VAR_8, VAR_7->mac_regs + VAR_0);


 FUNC_7(VAR_7);

 if (VAR_7->netdev->features & VAR_5)
  FUNC_5(VAR_7);
 else
  FUNC_3(VAR_7);

 if (VAR_7->netdev->features & VAR_6)
  FUNC_6(VAR_7);
 else
  FUNC_4(VAR_7);
}
