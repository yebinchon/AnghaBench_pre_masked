
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct wil6210_priv {int dummy; } ;


 int FUNC_0 (struct wil6210_priv*,char*) ;
 struct wil6210_priv* FUNC_1 (struct wiphy*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_0)
{
 struct wil6210_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, "resuming\n");

 return 0;
}
