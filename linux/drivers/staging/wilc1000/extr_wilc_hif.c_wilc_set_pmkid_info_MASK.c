
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wilc_vif {int dummy; } ;
struct wilc_pmkid_attr {int numpmkid; } ;
struct wilc_pmkid {int dummy; } ;
struct wid {int size; int * val; int type; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wilc_vif*,int ,struct wid*,int) ;

int FUNC_1(struct wilc_vif *VAR_3, struct wilc_pmkid_attr *VAR_4)
{
 struct wid VAR_5;

 VAR_5.id = VAR_0;
 VAR_5.type = VAR_1;
 VAR_5.size = (VAR_4->numpmkid * sizeof(struct wilc_pmkid)) + 1;
 VAR_5.val = (u8 *)VAR_4;

 return FUNC_0(VAR_3, VAR_2, &VAR_5, 1);
}
