
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int iftype; } ;
struct wil6210_vif {int status; } ;
struct wil6210_priv {int dummy; } ;





 int FUNC_0 (int ,int ) ;
 struct wireless_dev* FUNC_1 (struct wil6210_vif*) ;
 int FUNC_2 (struct wil6210_priv*,char*) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_3(struct wil6210_priv *VAR_1, struct wil6210_vif *VAR_2,
      bool VAR_3)
{
 struct wireless_dev *VAR_4 = FUNC_1(VAR_2);

 switch (VAR_4->iftype) {
 case 130:
  FUNC_2(VAR_1, "Sniffer\n");
  return 0;


 case 128:
 case 129:
  if (FUNC_0(VAR_0, VAR_2->status)) {
   FUNC_2(VAR_1, "Delay suspend when connecting\n");
   return 0;
  }
  if (VAR_3) {
   FUNC_2(VAR_1, "STA-like interface\n");
   return 0;
  }
  break;

 default:
  FUNC_2(VAR_1, "AP-like interface\n");
  return 0;
 }

 return 1;
}
