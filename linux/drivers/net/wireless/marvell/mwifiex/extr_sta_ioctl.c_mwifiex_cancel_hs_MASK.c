
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_private {int dummy; } ;
struct mwifiex_ds_hs_cfg {int is_invoke_hostcmd; int conditions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mwifiex_private*,int ,int,struct mwifiex_ds_hs_cfg*) ;

int FUNC_1(struct mwifiex_private *VAR_2, int VAR_3)
{
 struct mwifiex_ds_hs_cfg VAR_4;

 VAR_4.conditions = VAR_0;
 VAR_4.is_invoke_hostcmd = 1;

 return FUNC_0(VAR_2, VAR_1,
        VAR_3, &VAR_4);
}
