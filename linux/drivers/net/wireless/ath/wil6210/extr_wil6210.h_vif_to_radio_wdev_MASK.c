
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct wil6210_vif {scalar_t__ mid; } ;
struct wil6210_priv {struct wireless_dev* radio_wdev; } ;


 struct wireless_dev* FUNC_0 (struct wil6210_vif*) ;

__attribute__((used)) static inline struct wireless_dev *
FUNC_1(struct wil6210_priv *VAR_0, struct wil6210_vif *VAR_1)
{

 if (VAR_1->mid)
  return FUNC_0(VAR_1);
 else
  return VAR_0->radio_wdev;
}
