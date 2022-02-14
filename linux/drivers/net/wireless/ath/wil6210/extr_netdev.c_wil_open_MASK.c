
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int fw_capabilities; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct wil6210_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct wil6210_priv*,char*) ;
 int FUNC_3 (struct wil6210_priv*,char*) ;
 int FUNC_4 (struct wil6210_priv*,struct net_device*,int,int) ;
 int FUNC_5 (struct wil6210_priv*) ;
 int FUNC_6 (struct wil6210_priv*) ;
 int FUNC_7 (struct wil6210_priv*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3)
{
 struct wil6210_priv *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = 0;

 FUNC_2(VAR_4, "open\n");

 if (VAR_2 ||
     FUNC_1(VAR_1, VAR_4->fw_capabilities)) {
  FUNC_3(VAR_4, "while in debug_fw or wmi_only mode\n");
  return -VAR_0;
 }

 if (!FUNC_4(VAR_4, VAR_3, 1, 0)) {
  FUNC_2(VAR_4, "open, first iface\n");
  VAR_5 = FUNC_5(VAR_4);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_5 = FUNC_7(VAR_4);
  if (VAR_5)
   FUNC_6(VAR_4);
 }

 return VAR_5;
}
