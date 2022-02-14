
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wilc_vif {int ndev; } ;
struct wilc_drv_handler {int mode; int handler; } ;
struct wid {int size; int* val; int type; int id; } ;
typedef int drv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wilc_vif*,int ,struct wid*,int) ;

int FUNC_3(struct wilc_vif *VAR_3, int VAR_4, u8 VAR_5,
       u8 VAR_6)
{
 struct wid VAR_7;
 int VAR_8;
 struct wilc_drv_handler VAR_9;

 VAR_7.id = VAR_0;
 VAR_7.type = VAR_1;
 VAR_7.size = sizeof(VAR_9);
 VAR_7.val = (u8 *)&VAR_9;

 VAR_9.handler = FUNC_0(VAR_4);
 VAR_9.mode = (VAR_6 | (VAR_5 << 1));

 VAR_8 = FUNC_2(VAR_3, VAR_2, &VAR_7, 1);
 if (VAR_8)
  FUNC_1(VAR_3->ndev, "Failed to set driver handler\n");

 return VAR_8;
}
