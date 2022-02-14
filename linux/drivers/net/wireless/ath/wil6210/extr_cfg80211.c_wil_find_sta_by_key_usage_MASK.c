
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wil_sta_info {int dummy; } ;
struct wil6210_priv {struct wil_sta_info* sta; } ;
typedef enum wmi_key_usage { ____Placeholder_wmi_key_usage } wmi_key_usage ;


 int VAR_0 ;
 struct wil_sta_info* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (struct wil6210_priv*,char*,int const*,int ) ;
 int FUNC_2 (struct wil6210_priv*,int ,int const*) ;
 int FUNC_3 (struct wil6210_priv*,int ,int ) ;

__attribute__((used)) static struct wil_sta_info *
FUNC_4(struct wil6210_priv *VAR_4, u8 VAR_5,
     enum wmi_key_usage VAR_6, const u8 *VAR_7)
{
 int VAR_8 = -VAR_0;

 if (VAR_6 == VAR_2)
  return ((void*)0);


 if (VAR_7)
  VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_7);
 else if (VAR_6 == VAR_1)
  VAR_8 = FUNC_3(VAR_4, VAR_5, 0);
 if (VAR_8 < 0) {
  FUNC_1(VAR_4, "No CID for %pM %s\n", VAR_7,
   VAR_3[VAR_6]);
  return FUNC_0(VAR_8);
 }

 return &VAR_4->sta[VAR_8];
}
