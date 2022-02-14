
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_ds_wakeup_reason {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_ds_wakeup_reason*,int) ;

int FUNC_1(struct mwifiex_private *VAR_3, u16 VAR_4,
         int VAR_5,
         struct mwifiex_ds_wakeup_reason *VAR_6)
{
 int VAR_7 = 0;

 VAR_7 = FUNC_0(VAR_3, VAR_1,
      VAR_0, 0, VAR_6,
      VAR_5 == VAR_2);

 return VAR_7;
}
