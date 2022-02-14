
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct mvs_info*,int) ;
 int FUNC_2 (struct mvs_info*,int) ;
 int FUNC_3 (struct mvs_info*,int) ;
 int FUNC_4 (struct mvs_info*,int,int) ;
 int FUNC_5 (struct mvs_info*,int,int ) ;
 int FUNC_6 (struct mvs_info*,int,int) ;
 int FUNC_7 (struct mvs_info*,int,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct mvs_info *VAR_5, u32 VAR_6, int VAR_7)
{
 u32 VAR_8;
 u32 VAR_9 = 5000;
 if (VAR_7 == VAR_0) {
  FUNC_5(VAR_5, VAR_6, VAR_2);
  VAR_8 = FUNC_2(VAR_5, VAR_6);
  FUNC_6(VAR_5, VAR_6, VAR_8|0x20000000);
  FUNC_6(VAR_5, VAR_6, VAR_8|0x100000);
  return;
 }
 VAR_8 = FUNC_3(VAR_5, VAR_6);
 VAR_8 &= ~VAR_1;
 FUNC_7(VAR_5, VAR_6, VAR_8);
 if (VAR_7) {
  VAR_8 = FUNC_1(VAR_5, VAR_6);
  VAR_8 |= VAR_4;
  FUNC_4(VAR_5, VAR_6, VAR_8);
  do {
   VAR_8 = FUNC_1(VAR_5, VAR_6);
   FUNC_8(10);
   VAR_9--;
  } while ((VAR_8 & VAR_4) && VAR_9);
  if (!VAR_9)
   FUNC_0("phy hard reset failed.\n");
 } else {
  VAR_8 = FUNC_1(VAR_5, VAR_6);
  VAR_8 |= VAR_3;
  FUNC_4(VAR_5, VAR_6, VAR_8);
 }
}
