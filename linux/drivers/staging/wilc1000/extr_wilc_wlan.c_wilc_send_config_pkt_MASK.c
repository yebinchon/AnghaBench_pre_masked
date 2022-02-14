
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct wilc_vif {int wilc; } ;
struct wid {int size; int val; int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct wilc_vif*) ;
 int FUNC_1 (struct wilc_vif*,int,int ,int,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct wilc_vif*,int,int ,int ,int ,int,int) ;

int FUNC_4(struct wilc_vif *VAR_3, u8 VAR_4, struct wid *VAR_5,
    u32 VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;
 u32 VAR_9 = FUNC_0(VAR_3);

 if (VAR_4 == VAR_1) {
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   if (!FUNC_1(VAR_3, !VAR_7,
            VAR_5[VAR_7].id,
            (VAR_7 == VAR_6 - 1),
            VAR_9)) {
    VAR_8 = -VAR_0;
    break;
   }
  }
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   VAR_5[VAR_7].size = FUNC_2(VAR_3->wilc,
            VAR_5[VAR_7].id,
            VAR_5[VAR_7].val,
            VAR_5[VAR_7].size);
  }
 } else if (VAR_4 == VAR_2) {
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   if (!FUNC_3(VAR_3, !VAR_7,
            VAR_5[VAR_7].id,
            VAR_5[VAR_7].val,
            VAR_5[VAR_7].size,
            (VAR_7 == VAR_6 - 1),
            VAR_9)) {
    VAR_8 = -VAR_0;
    break;
   }
  }
 }

 return VAR_8;
}
