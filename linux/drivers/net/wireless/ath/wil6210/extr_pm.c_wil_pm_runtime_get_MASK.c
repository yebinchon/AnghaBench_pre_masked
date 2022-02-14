
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct wil6210_priv*,char*,int) ;
 struct device* FUNC_3 (struct wil6210_priv*) ;

int FUNC_4(struct wil6210_priv *VAR_0)
{
 int VAR_1;
 struct device *VAR_2 = FUNC_3(VAR_0);

 VAR_1 = FUNC_0(VAR_2);
 if (VAR_1 < 0) {
  FUNC_2(VAR_0, "pm_runtime_get_sync() failed, rc = %d\n", VAR_1);
  FUNC_1(VAR_2);
  return VAR_1;
 }

 return 0;
}
