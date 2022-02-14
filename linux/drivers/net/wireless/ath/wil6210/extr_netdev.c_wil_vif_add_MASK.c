
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int iftype; } ;
struct wil6210_vif {size_t mid; } ;
struct wil6210_priv {struct wil6210_vif** vifs; } ;
struct net_device {int dev; int dev_addr; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct wil6210_vif*) ;
 struct wireless_dev* FUNC_4 (struct wil6210_vif*) ;
 int FUNC_5 (struct wil6210_priv*,int,int) ;
 int FUNC_6 (struct wil6210_priv*,scalar_t__,int ,int ) ;
 int FUNC_7 (struct wil6210_priv*,scalar_t__) ;

int FUNC_8(struct wil6210_priv *VAR_1, struct wil6210_vif *VAR_2)
{
 struct net_device *VAR_3 = FUNC_3(VAR_2);
 struct wireless_dev *VAR_4 = FUNC_4(VAR_2);
 bool VAR_5 = FUNC_5(VAR_1, 1, 0);
 int VAR_6;

 FUNC_0();

 if (VAR_1->vifs[VAR_2->mid]) {
  FUNC_1(&VAR_3->dev, "VIF with mid %d already in use\n",
   VAR_2->mid);
  return -VAR_0;
 }
 if (VAR_5 && VAR_2->mid != 0) {
  VAR_6 = FUNC_6(VAR_1, VAR_2->mid, VAR_3->dev_addr,
           VAR_4->iftype);
  if (VAR_6)
   return VAR_6;
 }
 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_3->dev, "Failed to register netdev: %d\n", VAR_6);
  if (VAR_5 && VAR_2->mid != 0)
   FUNC_7(VAR_1, VAR_2->mid);
  return VAR_6;
 }

 VAR_1->vifs[VAR_2->mid] = VAR_2;
 return 0;
}
