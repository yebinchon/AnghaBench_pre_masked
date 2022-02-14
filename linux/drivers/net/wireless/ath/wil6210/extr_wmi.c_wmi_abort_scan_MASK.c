
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_vif {int mid; } ;
struct wil6210_priv {int dummy; } ;


 int VAR_0 ;
 struct wil6210_priv* FUNC_0 (struct wil6210_vif*) ;
 int FUNC_1 (struct wil6210_priv*,char*) ;
 int FUNC_2 (struct wil6210_priv*,char*,int) ;
 int FUNC_3 (struct wil6210_priv*,int ,int ,int *,int ) ;

int FUNC_4(struct wil6210_vif *VAR_1)
{
 struct wil6210_priv *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 FUNC_1(VAR_2, "sending WMI_ABORT_SCAN_CMDID\n");

 VAR_3 = FUNC_3(VAR_2, VAR_0, VAR_1->mid, ((void*)0), 0);
 if (VAR_3)
  FUNC_2(VAR_2, "Failed to abort scan (%d)\n", VAR_3);

 return VAR_3;
}
