
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int netdev; } ;
struct wiphy {int dummy; } ;
struct ath6kl_vif {int list; } ;
struct ath6kl {int flag; int list_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath6kl_vif*) ;
 int FUNC_1 (struct ath6kl_vif*,int ) ;
 int FUNC_2 (int *) ;
 struct ath6kl_vif* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 struct ath6kl* FUNC_9 (struct wiphy*) ;

__attribute__((used)) static int FUNC_10(struct wiphy *VAR_1,
         struct wireless_dev *VAR_2)
{
 struct ath6kl *VAR_3 = FUNC_9(VAR_1);
 struct ath6kl_vif *VAR_4 = FUNC_3(VAR_2->netdev);

 FUNC_6(&VAR_3->list_lock);
 FUNC_2(&VAR_4->list);
 FUNC_7(&VAR_3->list_lock);

 FUNC_1(VAR_4, FUNC_8(VAR_0, &VAR_3->flag));

 FUNC_4();
 FUNC_0(VAR_4);
 FUNC_5();

 return 0;
}
