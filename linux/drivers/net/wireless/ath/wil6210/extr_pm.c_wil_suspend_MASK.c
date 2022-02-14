
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int status; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct wil6210_priv*,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (struct wil6210_priv*) ;
 int FUNC_3 (struct wil6210_priv*) ;

int FUNC_4(struct wil6210_priv *VAR_1, bool VAR_2, bool VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(VAR_1, "suspend: %s\n", VAR_2 ? "runtime" : "system");

 if (FUNC_0(VAR_0, VAR_1->status)) {
  FUNC_1(VAR_1, "trying to suspend while suspended\n");
  return 0;
 }

 if (!VAR_3)
  VAR_4 = FUNC_3(VAR_1);
 else
  VAR_4 = FUNC_2(VAR_1);

 FUNC_1(VAR_1, "suspend: %s => %d\n",
     VAR_2 ? "runtime" : "system", VAR_4);

 return VAR_4;
}
