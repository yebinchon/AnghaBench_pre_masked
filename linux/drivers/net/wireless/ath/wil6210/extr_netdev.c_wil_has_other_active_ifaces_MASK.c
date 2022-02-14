
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_vif {int dummy; } ;
struct wil6210_priv {struct wil6210_vif** vifs; } ;
struct net_device {int flags; } ;


 int FUNC_0 (struct wil6210_priv*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct wil6210_vif*) ;

bool FUNC_3(struct wil6210_priv *VAR_1,
     struct net_device *VAR_2, bool VAR_3, bool VAR_4)
{
 int VAR_5;
 struct wil6210_vif *VAR_6;
 struct net_device *VAR_7;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  VAR_6 = VAR_1->vifs[VAR_5];
  if (VAR_6) {
   VAR_7 = FUNC_2(VAR_6);
   if (VAR_7 != VAR_2)
    if ((VAR_3 && (VAR_7->flags & VAR_0)) ||
        (VAR_4 && FUNC_1(VAR_7)))
     return 1;
  }
 }

 return 0;
}
