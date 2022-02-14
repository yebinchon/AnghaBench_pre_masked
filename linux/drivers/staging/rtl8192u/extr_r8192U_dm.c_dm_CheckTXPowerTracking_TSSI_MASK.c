
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8192_priv {int txpower_tracking_wq; int priv_wq; int btxpower_tracking; } ;
struct net_device {int dummy; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct r8192_priv *VAR_1 = FUNC_0(VAR_0);
 static u32 VAR_2;

 if (!VAR_1->btxpower_tracking)
  return;
 if ((VAR_2 % 30 == 0) && (VAR_2 != 0))
  FUNC_1(VAR_1->priv_wq, &VAR_1->txpower_tracking_wq, 0);
 VAR_2++;
}
