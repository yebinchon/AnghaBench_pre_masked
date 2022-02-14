
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct r8192_priv {scalar_t__ CustomerID; scalar_t__ CckPwEnl; scalar_t__ bDynamicTxLowPower; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,int ,int ,int) ;

void FUNC_2(struct net_device *VAR_3, u8 VAR_4)
{
 u32 VAR_5 = 0;
 struct r8192_priv *VAR_6 = FUNC_0(VAR_3);

 VAR_5 = VAR_4;

 if (VAR_6->bDynamicTxLowPower) {
  if (VAR_6->CustomerID == VAR_0)
   VAR_5 = 0x22;
  else
   VAR_5 += VAR_6->CckPwEnl;
 }

 if (VAR_5 > 0x24)
  VAR_5 = 0x24;
 FUNC_1(VAR_3, VAR_2, VAR_1, VAR_5);
}
