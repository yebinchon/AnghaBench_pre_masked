
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int dummy; } ;
struct firmware {int dummy; } ;


 int FUNC_0 (struct firmware const*) ;
 int FUNC_1 (struct firmware const**,char const*,int ) ;
 int FUNC_2 (struct wil6210_priv*,char*,char const*,int) ;
 int FUNC_3 (struct wil6210_priv*) ;

bool FUNC_4(struct wil6210_priv *VAR_0, const char *VAR_1)
{
 const struct firmware *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2, VAR_1, FUNC_3(VAR_0));
 if (!VAR_3)
  FUNC_0(VAR_2);
 else
  FUNC_2(VAR_0, "<%s> not available: %d\n", VAR_1, VAR_3);
 return !VAR_3;
}
