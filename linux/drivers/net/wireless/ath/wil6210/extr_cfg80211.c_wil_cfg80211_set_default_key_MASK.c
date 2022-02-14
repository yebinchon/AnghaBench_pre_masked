
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct wil6210_priv {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct wil6210_priv*,char*) ;
 struct wil6210_priv* FUNC_1 (struct wiphy*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_0,
     struct net_device *VAR_1,
     u8 VAR_2, bool VAR_3,
     bool VAR_4)
{
 struct wil6210_priv *VAR_5 = FUNC_1(VAR_0);

 FUNC_0(VAR_5, "set_default_key: entered\n");
 return 0;
}
