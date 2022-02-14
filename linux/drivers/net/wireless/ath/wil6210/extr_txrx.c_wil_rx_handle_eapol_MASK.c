
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {scalar_t__ iftype; } ;
struct wil6210_vif {scalar_t__ ptk_rekey_state; } ;
struct wil6210_priv {int fw_capabilities; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 struct wireless_dev* FUNC_1 (struct wil6210_vif*) ;
 struct wil6210_priv* FUNC_2 (struct wil6210_vif*) ;
 int FUNC_3 (struct wil6210_priv*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct wil6210_vif *VAR_4, struct sk_buff *VAR_5)
{
 struct wil6210_priv *VAR_6 = FUNC_2(VAR_4);
 struct wireless_dev *VAR_7 = FUNC_1(VAR_4);

 if (VAR_7->iftype != VAR_0 ||
     !FUNC_0(VAR_3, VAR_6->fw_capabilities))
  return;


 if (!FUNC_3(VAR_6, VAR_5))
  return;

 if (VAR_4->ptk_rekey_state == VAR_1)
  VAR_4->ptk_rekey_state = VAR_2;
}
