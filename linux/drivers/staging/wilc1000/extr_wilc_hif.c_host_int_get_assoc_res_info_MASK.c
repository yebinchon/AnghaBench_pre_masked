
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wilc_vif {int ndev; } ;
struct wid {int size; int * val; int type; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wilc_vif*,int ,struct wid*,int) ;

__attribute__((used)) static void FUNC_2(struct wilc_vif *VAR_3,
     u8 *VAR_4,
     u32 VAR_5,
     u32 *VAR_6)
{
 int VAR_7;
 struct wid VAR_8;

 VAR_8.id = VAR_0;
 VAR_8.type = VAR_1;
 VAR_8.val = VAR_4;
 VAR_8.size = VAR_5;

 VAR_7 = FUNC_1(VAR_3, VAR_2, &VAR_8, 1);
 if (VAR_7) {
  *VAR_6 = 0;
  FUNC_0(VAR_3->ndev, "Failed to send association response\n");
  return;
 }

 *VAR_6 = VAR_8.size;
}
