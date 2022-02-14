
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bnx2x*,int ) ;

int FUNC_2(struct bnx2x *VAR_6, int VAR_7, u8 VAR_8)
{

 int VAR_9 = (FUNC_1(VAR_6, VAR_4) &&
    FUNC_1(VAR_6, VAR_5)) ^ VAR_8;
 int VAR_10 = VAR_7 +
   (VAR_9 ? VAR_2 : 0);
 u32 VAR_11 = (1 << VAR_10);
 u32 VAR_12;
 int VAR_13;

 if (VAR_7 > VAR_1) {
  FUNC_0("Invalid GPIO %d\n", VAR_7);
  return -VAR_0;
 }


 VAR_12 = FUNC_1(VAR_6, VAR_3);


 if ((VAR_12 & VAR_11) == VAR_11)
  VAR_13 = 1;
 else
  VAR_13 = 0;

 return VAR_13;
}
