
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlme_priv {int dummy; } ;
struct adapter {int hw_init_completed; int pmondev; struct mlme_priv mlmepriv; struct net_device* pnetdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*,int ,int) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static void FUNC_10(struct adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->pnetdev;
 struct mlme_priv *VAR_3 = &VAR_1->mlmepriv;

 if (FUNC_0(VAR_3, VAR_0))
  FUNC_6(VAR_1, 0, 0);





 if (VAR_2)
  FUNC_9(VAR_2);

 FUNC_3(VAR_1->pmondev);
 FUNC_4(VAR_1);

 FUNC_5(VAR_1);
 FUNC_2("+r871xu_dev_remove, hw_init_completed=%d\n",
  VAR_1->hw_init_completed);
 FUNC_7(VAR_1);
 FUNC_8(VAR_2);
}
