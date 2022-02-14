
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct wil6210_priv {int p2p_dev_started; } ;


 int FUNC_0 (struct wil6210_priv*,char*) ;
 struct wil6210_priv* FUNC_1 (struct wiphy*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_0,
      struct wireless_dev *VAR_1)
{
 struct wil6210_priv *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, "start_p2p_device: entered\n");
 VAR_2->p2p_dev_started = 1;
 return 0;
}
