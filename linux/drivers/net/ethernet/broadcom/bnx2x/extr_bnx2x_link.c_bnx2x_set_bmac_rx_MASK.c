
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bnx2x*,scalar_t__) ;
 int FUNC_2 (struct bnx2x*,int,int*,int) ;
 int FUNC_3 (struct bnx2x*,int,int*,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_8, u32 VAR_9, u8 VAR_10, u8 VAR_11)
{
 u32 VAR_12 = VAR_10 ? VAR_7 :
   VAR_6;
 u32 VAR_13[2];
 u32 VAR_14 = FUNC_1(VAR_8, VAR_5 + VAR_10*4);

 if (FUNC_0(VAR_8))
  VAR_12 += VAR_0;
 else
  VAR_12 += VAR_1;

 if (FUNC_1(VAR_8, VAR_4) &
   (VAR_3 << VAR_10) &&
     VAR_14) {

  FUNC_2(VAR_8, VAR_12, VAR_13, 2);
  if (VAR_11)
   VAR_13[0] |= VAR_2;
  else
   VAR_13[0] &= ~VAR_2;
  FUNC_3(VAR_8, VAR_12, VAR_13, 2);
  FUNC_4(1000, 2000);
 }
}
