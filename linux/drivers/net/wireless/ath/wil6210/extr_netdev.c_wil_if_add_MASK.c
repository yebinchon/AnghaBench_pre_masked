
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int fw_version; } ;
struct wil6210_vif {int dummy; } ;
struct wil6210_priv {int napi_tx; int napi_ndev; int napi_rx; scalar_t__ use_enhanced_dma_hw; int fw_version; struct net_device* main_ndev; struct wiphy* wiphy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct wil6210_vif* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct wil6210_priv*,char*) ;
 int FUNC_8 (struct wil6210_priv*,char*,int) ;
 int FUNC_9 (struct wil6210_priv*,struct wil6210_vif*,int *,int) ;
 int FUNC_10 (struct wil6210_priv*,struct wil6210_vif*) ;
 int FUNC_11 (struct wiphy*) ;
 int FUNC_12 (struct wiphy*) ;

int FUNC_13(struct wil6210_priv *VAR_5)
{
 struct wiphy *VAR_6 = VAR_5->wiphy;
 struct net_device *VAR_7 = VAR_5->main_ndev;
 struct wil6210_vif *VAR_8 = FUNC_1(VAR_7);
 int VAR_9;

 FUNC_7(VAR_5, "entered");

 FUNC_6(VAR_6->fw_version, VAR_5->fw_version, sizeof(VAR_6->fw_version));

 VAR_9 = FUNC_11(VAR_6);
 if (VAR_9 < 0) {
  FUNC_8(VAR_5, "failed to register wiphy, err %d\n", VAR_9);
  return VAR_9;
 }

 FUNC_0(&VAR_5->napi_ndev);
 if (VAR_5->use_enhanced_dma_hw) {
  FUNC_2(&VAR_5->napi_ndev, &VAR_5->napi_rx,
          VAR_2,
          VAR_0);
  FUNC_3(&VAR_5->napi_ndev,
      &VAR_5->napi_tx, VAR_4,
      VAR_0);
 } else {
  FUNC_2(&VAR_5->napi_ndev, &VAR_5->napi_rx,
          VAR_1,
          VAR_0);
  FUNC_3(&VAR_5->napi_ndev,
      &VAR_5->napi_tx, VAR_3,
      VAR_0);
 }

 FUNC_9(VAR_5, VAR_8, ((void*)0), 1);

 FUNC_4();
 VAR_9 = FUNC_10(VAR_5, VAR_8);
 FUNC_5();
 if (VAR_9 < 0)
  goto out_wiphy;

 return 0;

out_wiphy:
 FUNC_12(VAR_6);
 return VAR_9;
}
