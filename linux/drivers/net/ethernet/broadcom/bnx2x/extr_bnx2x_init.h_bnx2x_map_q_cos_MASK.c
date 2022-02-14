
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct bnx2x*,int) ;
 int FUNC_7 (struct bnx2x*,int,int) ;

__attribute__((used)) static inline void FUNC_8(struct bnx2x *VAR_6, u32 VAR_7, u32 VAR_8)
{

 u32 VAR_9 = FUNC_6(VAR_6, VAR_5 + VAR_7 * 4);


 if (VAR_9 != VAR_8) {
  u32 VAR_10 = VAR_1;
  u32 VAR_11, VAR_12, VAR_13;


  if (FUNC_5(VAR_6) & VAR_4) {
   VAR_10 = VAR_2;
   if (FUNC_4(VAR_6)) {
    VAR_9 += VAR_0;
    VAR_8 += VAR_0;
   }
  }


  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
   u32 VAR_14 =
    FUNC_0(VAR_7, FUNC_4(VAR_6), VAR_13);
   u32 VAR_15 = 1 << (VAR_14 & 0x1f);


   FUNC_7(VAR_6, FUNC_2(VAR_14), VAR_8);


   VAR_11 = FUNC_3(VAR_9, VAR_14);
   VAR_12 = FUNC_6(VAR_6, VAR_11);
   FUNC_7(VAR_6, VAR_11, VAR_12 & (~VAR_15));


   VAR_11 = FUNC_3(VAR_8, VAR_14);
   VAR_12 = FUNC_6(VAR_6, VAR_11);
   FUNC_7(VAR_6, VAR_11, VAR_12 | VAR_15);




   if (!(FUNC_5(VAR_6) & VAR_3)) {
    VAR_11 = FUNC_1(VAR_14);
    VAR_12 = FUNC_6(VAR_6, VAR_11);
    VAR_15 = 1 << (2 * (VAR_14 & 0xf));
    VAR_12 = VAR_8 ?
           (VAR_12 | VAR_15) :
           (VAR_12 & (~VAR_15));
    FUNC_7(VAR_6, VAR_11, VAR_12);
   }
  }
 }
}
