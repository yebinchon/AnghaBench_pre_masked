
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int wiphy; } ;
struct wil6210_priv {int napi_rx; int napi_tx; struct net_device* main_ndev; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct wil6210_priv*,char*) ;
 int FUNC_4 (struct wil6210_priv*,int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct wil6210_priv *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->main_ndev;
 struct wireless_dev *VAR_2 = VAR_1->ieee80211_ptr;

 FUNC_3(VAR_0, "if_remove\n");

 FUNC_1();
 FUNC_4(VAR_0, 0);
 FUNC_2();

 FUNC_0(&VAR_0->napi_tx);
 FUNC_0(&VAR_0->napi_rx);

 FUNC_5(VAR_2->wiphy);
}
