
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_vif {int dummy; } ;
struct wil6210_priv {int dummy; } ;


 int VAR_0 ;
 struct wil6210_priv* FUNC_0 (struct wil6210_vif*) ;
 int FUNC_1 (struct wil6210_priv*,char*) ;

__attribute__((used)) static int FUNC_2(struct wil6210_vif *VAR_1, int VAR_2,
       int VAR_3, int VAR_4)
{
 struct wil6210_priv *VAR_5 = FUNC_0(VAR_1);

 FUNC_1(VAR_5, "ring modify is not supported for EDMA\n");

 return -VAR_0;
}
