
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct wil6210_priv {int dummy; } ;
struct net_device {int dummy; } ;
typedef enum wmi_ps_profile_type { ____Placeholder_wmi_ps_profile_type } wmi_ps_profile_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wil6210_priv*,char*,int,int) ;
 int FUNC_1 (struct wil6210_priv*,int) ;
 struct wil6210_priv* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_2,
           struct net_device *VAR_3,
           bool VAR_4, int VAR_5)
{
 struct wil6210_priv *VAR_6 = FUNC_2(VAR_2);
 enum wmi_ps_profile_type VAR_7;

 FUNC_0(VAR_6, "enabled=%d, timeout=%d\n",
       VAR_4, VAR_5);

 if (VAR_4)
  VAR_7 = VAR_0;
 else
  VAR_7 = VAR_1;

 return FUNC_1(VAR_6, VAR_7);
}
