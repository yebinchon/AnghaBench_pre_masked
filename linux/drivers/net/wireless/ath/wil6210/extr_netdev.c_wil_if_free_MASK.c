
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {struct net_device* main_ndev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct wil6210_priv*) ;
 int FUNC_2 (struct wil6210_priv*,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct wil6210_priv*) ;

void FUNC_5(struct wil6210_priv *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->main_ndev;

 FUNC_2(VAR_0, "if_free\n");

 if (!VAR_1)
  return;

 FUNC_4(VAR_0);

 VAR_0->main_ndev = ((void*)0);
 FUNC_3(VAR_1);
 FUNC_0(VAR_1);

 FUNC_1(VAR_0);
}
