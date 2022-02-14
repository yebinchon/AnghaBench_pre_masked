
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wilc_vif {int ndev; } ;
struct wilc_del_all_sta {int assoc_sta; int * mac; } ;
struct wid {int size; int* val; int type; int id; } ;
typedef int del_sta ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct wilc_del_all_sta*,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wilc_vif*,int ,struct wid*,int) ;

int FUNC_5(struct wilc_vif *VAR_5, u8 VAR_6[][VAR_0])
{
 struct wid VAR_7;
 int VAR_8;
 int VAR_9;
 u8 VAR_10 = 0;
 struct wilc_del_all_sta VAR_11;

 FUNC_2(&VAR_11, 0x0, sizeof(VAR_11));
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  if (!FUNC_1(VAR_6[VAR_9])) {
   VAR_10++;
   FUNC_0(VAR_11.mac[VAR_9], VAR_6[VAR_9]);
  }
 }

 if (!VAR_10)
  return 0;

 VAR_11.assoc_sta = VAR_10;

 VAR_7.id = VAR_1;
 VAR_7.type = VAR_2;
 VAR_7.size = (VAR_10 * VAR_0) + 1;
 VAR_7.val = (u8 *)&VAR_11;

 VAR_8 = FUNC_4(VAR_5, VAR_4, &VAR_7, 1);
 if (VAR_8)
  FUNC_3(VAR_5->ndev, "Failed to send delete all station\n");

 return VAR_8;
}
