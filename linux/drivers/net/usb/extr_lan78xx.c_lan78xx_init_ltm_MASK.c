
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct lan78xx_net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct lan78xx_net*,int,int,int*) ;
 scalar_t__ FUNC_1 (struct lan78xx_net*,int,int,int*) ;
 int FUNC_2 (struct lan78xx_net*,int,int,int*) ;
 int FUNC_3 (struct lan78xx_net*,int,int,int*) ;
 int FUNC_4 (struct lan78xx_net*,int ,int*) ;
 int FUNC_5 (struct lan78xx_net*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct lan78xx_net *VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11[6] = { 0 };

 VAR_9 = FUNC_4(VAR_8, VAR_6, &VAR_10);
 if (VAR_10 & VAR_7) {
  u8 VAR_12[2];

  if (FUNC_0(VAR_8, 0x3F, 2, VAR_12) == 0) {
   if (VAR_12[0] == 24) {
    VAR_9 = FUNC_2(VAR_8,
             VAR_12[1] * 2,
             24,
             (u8 *)VAR_11);
    if (VAR_9 < 0)
     return;
   }
  } else if (FUNC_1(VAR_8, 0x3F, 2, VAR_12) == 0) {
   if (VAR_12[0] == 24) {
    VAR_9 = FUNC_3(VAR_8,
          VAR_12[1] * 2,
          24,
          (u8 *)VAR_11);
    if (VAR_9 < 0)
     return;
   }
  }
 }

 FUNC_5(VAR_8, VAR_2, VAR_11[0]);
 FUNC_5(VAR_8, VAR_3, VAR_11[1]);
 FUNC_5(VAR_8, VAR_0, VAR_11[2]);
 FUNC_5(VAR_8, VAR_1, VAR_11[3]);
 FUNC_5(VAR_8, VAR_4, VAR_11[4]);
 FUNC_5(VAR_8, VAR_5, VAR_11[5]);
}
