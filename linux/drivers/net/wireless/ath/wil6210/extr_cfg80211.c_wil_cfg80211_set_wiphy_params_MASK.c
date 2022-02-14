
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int retry_short; } ;
struct wil6210_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wil6210_priv* FUNC_0 (struct wiphy*) ;
 int FUNC_1 (struct wil6210_priv*,int ) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_5, u32 VAR_6)
{
 struct wil6210_priv *VAR_7 = FUNC_0(VAR_5);
 int VAR_8;


 if (VAR_6 & (VAR_2 |
         VAR_1 |
         VAR_4))
  return -VAR_0;

 if (VAR_6 & VAR_3) {
  VAR_8 = FUNC_1(VAR_7, VAR_5->retry_short);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
