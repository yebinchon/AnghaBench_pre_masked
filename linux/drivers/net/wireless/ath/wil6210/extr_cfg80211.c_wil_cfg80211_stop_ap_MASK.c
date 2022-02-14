
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct wil6210_vif {scalar_t__ gtk_len; int gtk; int assocresp_ies_len; int assocresp_ies; int proberesp_ies_len; int proberesp_ies; int proberesp_len; int proberesp; scalar_t__ ssid_len; int status; int mid; } ;
struct wil6210_priv {int mutex; int status; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wil6210_priv*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct wil6210_vif* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct wil6210_priv*,int ) ;
 int FUNC_9 (struct wil6210_vif*) ;
 int FUNC_10 (struct wil6210_priv*,char*,int ) ;
 int FUNC_11 (struct wil6210_priv*,struct net_device*,int,int) ;
 int FUNC_12 (int *,int *,int *,int ) ;
 int FUNC_13 (struct wil6210_priv*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct wil6210_priv* FUNC_14 (struct wiphy*) ;
 int FUNC_15 (struct wil6210_vif*) ;

__attribute__((used)) static int FUNC_16(struct wiphy *VAR_5,
    struct net_device *VAR_6)
{
 struct wil6210_priv *VAR_7 = FUNC_14(VAR_5);
 struct wil6210_vif *VAR_8 = FUNC_5(VAR_6);
 bool VAR_9;

 FUNC_10(VAR_7, "stop_ap, mid=%d\n", VAR_8->mid);

 FUNC_6(VAR_6);
 VAR_9 = !FUNC_11(VAR_7, VAR_6, 0, 1);
 if (VAR_9) {
  FUNC_8(VAR_7, VAR_0);
  FUNC_13(VAR_7, VAR_2);
  FUNC_7(VAR_3, VAR_7->status);
 }

 FUNC_3(&VAR_7->mutex);

 FUNC_15(VAR_8);
 FUNC_1(VAR_4, VAR_8->status);
 VAR_8->ssid_len = 0;
 FUNC_12(&VAR_8->proberesp, &VAR_8->proberesp_len, ((void*)0), 0);
 FUNC_12(&VAR_8->proberesp_ies, &VAR_8->proberesp_ies_len, ((void*)0), 0);
 FUNC_12(&VAR_8->assocresp_ies, &VAR_8->assocresp_ies_len, ((void*)0), 0);
 FUNC_2(VAR_8->gtk, 0, VAR_1);
 VAR_8->gtk_len = 0;

 if (VAR_9)
  FUNC_0(VAR_7);
 else
  FUNC_9(VAR_8);

 FUNC_4(&VAR_7->mutex);

 return 0;
}
