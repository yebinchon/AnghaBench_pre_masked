
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wilc_vif {int ndev; } ;
struct wid {int size; int * val; int id; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wilc_vif*,int ,struct wid*,int) ;

int FUNC_2(struct wilc_vif *VAR_4, bool VAR_5, u32 VAR_6)
{
 struct wid VAR_7;
 int VAR_8;
 s8 VAR_9;

 if (VAR_5)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_2;

 VAR_7.id = VAR_0;
 VAR_7.val = &VAR_9;
 VAR_7.size = sizeof(char);
 VAR_8 = FUNC_1(VAR_4, VAR_3, &VAR_7, 1);
 if (VAR_8)
  FUNC_0(VAR_4->ndev, "Failed to send power management\n");

 return VAR_8;
}
