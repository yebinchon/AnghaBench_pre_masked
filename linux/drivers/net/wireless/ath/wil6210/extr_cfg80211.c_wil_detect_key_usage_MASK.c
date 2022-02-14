
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int iftype; } ;
struct wil6210_priv {int dummy; } ;
typedef enum wmi_key_usage { ____Placeholder_wmi_key_usage } wmi_key_usage ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 struct wil6210_priv* FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (struct wil6210_priv*,char*,int ) ;
 int FUNC_2 (struct wil6210_priv*,char*) ;

__attribute__((used)) static enum wmi_key_usage FUNC_3(struct wireless_dev *VAR_4,
            bool VAR_5)
{
 struct wil6210_priv *VAR_6 = FUNC_0(VAR_4);
 enum wmi_key_usage VAR_7;

 if (VAR_5) {
  VAR_7 = VAR_0;
 } else {
  switch (VAR_4->iftype) {
  case 128:
  case 130:
   VAR_7 = VAR_1;
   break;
  case 131:
  case 129:
   VAR_7 = VAR_2;
   break;
  default:

   FUNC_2(VAR_6, "Can't determine GTK type\n");
   VAR_7 = VAR_1;
   break;
  }
 }
 FUNC_1(VAR_6, "detect_key_usage: -> %s\n", VAR_3[VAR_7]);

 return VAR_7;
}
