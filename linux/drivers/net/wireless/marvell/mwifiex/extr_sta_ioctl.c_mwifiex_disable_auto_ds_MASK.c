
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_private {int dummy; } ;
struct mwifiex_ds_auto_ds {int auto_ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_ds_auto_ds*,int) ;

int FUNC_1(struct mwifiex_private *VAR_4)
{
 struct mwifiex_ds_auto_ds VAR_5 = {
  .auto_ds = VAR_1,
 };

 return FUNC_0(VAR_4, VAR_3,
    VAR_2, VAR_0, &VAR_5, 1);
}
