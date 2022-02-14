
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct wmi {struct ath6kl* parent_dev; } ;
struct ath6kl {int fw_capabilities; } ;
typedef int s8 ;
typedef int s32 ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int ** VAR_4 ;
 int ** VAR_5 ;

s32 FUNC_3(struct wmi *VAR_6, s8 VAR_7)
{
 struct ath6kl *VAR_8 = VAR_6->parent_dev;
 u8 VAR_9 = 0;
 s32 VAR_10;

 if (VAR_7 == VAR_1)
  return 0;


 if (VAR_7 & VAR_2) {
  VAR_7 &= VAR_3;
  VAR_9 = 1;
 }

 if (FUNC_2(VAR_0,
       VAR_8->fw_capabilities)) {
  if (FUNC_1(VAR_7 >= FUNC_0(VAR_5)))
   return 0;

  VAR_10 = VAR_5[(u32) VAR_7][VAR_9];
 } else {
  if (FUNC_1(VAR_7 >= FUNC_0(VAR_4)))
   return 0;

  VAR_10 = VAR_4[(u32) VAR_7][VAR_9];
 }

 return VAR_10;
}
