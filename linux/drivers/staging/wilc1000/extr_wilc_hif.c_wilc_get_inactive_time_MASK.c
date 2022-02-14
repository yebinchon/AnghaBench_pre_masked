
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wilc_vif {int ndev; } ;
struct wid {int size; int * val; int type; int id; } ;
typedef int s8 ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (struct wilc_vif*,int ,struct wid*,int) ;

s32 FUNC_5(struct wilc_vif *VAR_9, const u8 *VAR_10, u32 *VAR_11)
{
 struct wid VAR_12;
 s32 VAR_13;

 VAR_12.id = VAR_5;
 VAR_12.type = VAR_6;
 VAR_12.size = VAR_1;
 VAR_12.val = FUNC_2(VAR_12.size, VAR_2);
 if (!VAR_12.val)
  return -VAR_0;

 FUNC_0(VAR_12.val, VAR_10);
 VAR_13 = FUNC_4(VAR_9, VAR_8, &VAR_12, 1);
 FUNC_1(VAR_12.val);
 if (VAR_13) {
  FUNC_3(VAR_9->ndev, "Failed to set inactive mac\n");
  return VAR_13;
 }

 VAR_12.id = VAR_3;
 VAR_12.type = VAR_4;
 VAR_12.val = (s8 *)VAR_11;
 VAR_12.size = sizeof(u32);
 VAR_13 = FUNC_4(VAR_9, VAR_7, &VAR_12, 1);
 if (VAR_13)
  FUNC_3(VAR_9->ndev, "Failed to get inactive time\n");

 return VAR_13;
}
