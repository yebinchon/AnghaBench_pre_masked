
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct rtl8169_private {TYPE_1__ wk; int napi; int phydev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 struct rtl8169_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rtl8169_private*) ;
 int FUNC_7 (struct rtl8169_private*) ;
 int FUNC_8 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_1)
{
 struct rtl8169_private *VAR_2 = FUNC_2(VAR_1);

 if (!FUNC_4(VAR_1))
  return;

 FUNC_5(VAR_2->phydev);
 FUNC_3(VAR_1);

 FUNC_6(VAR_2);
 FUNC_1(&VAR_2->napi);

 FUNC_0(VAR_2->wk.flags, VAR_0);

 FUNC_8(VAR_2);

 FUNC_7(VAR_2);
}
