
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_vif {int mid; } ;
struct wil6210_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wil6210_priv* FUNC_0 (struct wil6210_vif*) ;
 int FUNC_1 (struct wil6210_priv*,char*) ;
 int FUNC_2 (struct wil6210_priv*,char*) ;
 int FUNC_3 (struct wil6210_priv*,int ,int ,int *,int ,int ,int *,int ,int ) ;

int FUNC_4(struct wil6210_vif *VAR_3)
{
 struct wil6210_priv *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 FUNC_1(VAR_4, "sending WMI_DISCOVERY_STOP_CMDID\n");

 VAR_5 = FUNC_3(VAR_4, VAR_2, VAR_3->mid, ((void*)0), 0,
        VAR_1, ((void*)0), 0,
        VAR_0);

 if (VAR_5)
  FUNC_2(VAR_4, "Failed to stop discovery\n");

 return VAR_5;
}
