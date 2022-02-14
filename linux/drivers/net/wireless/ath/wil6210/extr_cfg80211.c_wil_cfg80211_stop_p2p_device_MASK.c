
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct wil6210_priv {int mutex; int vif_mutex; scalar_t__ p2p_dev_started; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wil6210_priv*,char*) ;
 int FUNC_3 (struct wil6210_priv*) ;
 struct wil6210_priv* FUNC_4 (struct wiphy*) ;

__attribute__((used)) static void FUNC_5(struct wiphy *VAR_0,
      struct wireless_dev *VAR_1)
{
 struct wil6210_priv *VAR_2 = FUNC_4(VAR_0);

 if (!VAR_2->p2p_dev_started)
  return;

 FUNC_2(VAR_2, "stop_p2p_device: entered\n");
 FUNC_0(&VAR_2->mutex);
 FUNC_0(&VAR_2->vif_mutex);
 FUNC_3(VAR_2);
 VAR_2->p2p_dev_started = 0;
 FUNC_1(&VAR_2->vif_mutex);
 FUNC_1(&VAR_2->mutex);
}
