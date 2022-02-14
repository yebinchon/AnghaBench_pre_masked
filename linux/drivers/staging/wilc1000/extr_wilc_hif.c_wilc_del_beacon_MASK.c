
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wilc_vif {int ndev; } ;
struct wid {int size; int * val; int type; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wilc_vif*,int ,struct wid*,int) ;

int FUNC_2(struct wilc_vif *VAR_3)
{
 int VAR_4;
 struct wid VAR_5;
 u8 VAR_6 = 0;

 VAR_5.id = VAR_1;
 VAR_5.type = VAR_0;
 VAR_5.size = sizeof(char);
 VAR_5.val = &VAR_6;

 VAR_4 = FUNC_1(VAR_3, VAR_2, &VAR_5, 1);
 if (VAR_4)
  FUNC_0(VAR_3->ndev, "Failed to send delete beacon\n");

 return VAR_4;
}
