
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_6, struct bnx2x_phy *VAR_7)
{
 u16 VAR_8, VAR_9, VAR_10 ;

 FUNC_1(VAR_6, VAR_7,
   VAR_1,
   VAR_2, &VAR_8);

 if (VAR_8 > 0) {

  return 0;
 }






 for (VAR_9 = 0; VAR_9 < 1000; VAR_9++) {
  FUNC_1(VAR_6, VAR_7,
    VAR_1,
    VAR_3,
    &VAR_8);




  if (!(VAR_8 & (1<<14)) || !(VAR_8 & (1<<13))) {
   FUNC_0(VAR_5, "XAUI work-around not required\n");
   return 0;
  } else if (!(VAR_8 & (1<<15))) {
   FUNC_0(VAR_5, "bit 15 went off\n");





   for (VAR_10 = 0; VAR_10 < 1000; VAR_10++) {
    FUNC_1(VAR_6, VAR_7,
     VAR_1,
     VAR_4, &VAR_8);
    if (VAR_8 & (1<<15)) {
     FUNC_0(VAR_5,
       "XAUI workaround has completed\n");
     return 0;
    }
    FUNC_2(3000, 6000);
   }
   break;
  }
  FUNC_2(3000, 6000);
 }
 FUNC_0(VAR_5, "Warning: XAUI work-around timeout !!!\n");
 return -VAR_0;
}
