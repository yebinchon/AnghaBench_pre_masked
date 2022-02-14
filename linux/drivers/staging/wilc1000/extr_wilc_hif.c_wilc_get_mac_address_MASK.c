
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wilc_vif {int ndev; } ;
struct wid {int * val; int size; int type; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wilc_vif*,int ,struct wid*,int) ;

int FUNC_2(struct wilc_vif *VAR_4, u8 *VAR_5)
{
 int VAR_6;
 struct wid VAR_7;

 VAR_7.id = VAR_1;
 VAR_7.type = VAR_2;
 VAR_7.size = VAR_0;
 VAR_7.val = VAR_5;

 VAR_6 = FUNC_1(VAR_4, VAR_3, &VAR_7, 1);
 if (VAR_6)
  FUNC_0(VAR_4->ndev, "Failed to get mac address\n");

 return VAR_6;
}
