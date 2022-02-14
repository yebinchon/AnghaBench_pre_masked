
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int dummy; } ;
struct net_device {int dummy; } ;


 struct wil6210_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct wil6210_priv*,char*) ;
 int FUNC_2 (struct wil6210_priv*) ;
 int FUNC_3 (struct wil6210_priv*,struct net_device*,int,int) ;
 int FUNC_4 (struct wil6210_priv*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 struct wil6210_priv *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = 0;

 FUNC_1(VAR_1, "stop\n");

 if (!FUNC_3(VAR_1, VAR_0, 1, 0)) {
  FUNC_1(VAR_1, "stop, last iface\n");
  VAR_2 = FUNC_2(VAR_1);
  if (!VAR_2)
   FUNC_4(VAR_1);
 }

 return VAR_2;
}
