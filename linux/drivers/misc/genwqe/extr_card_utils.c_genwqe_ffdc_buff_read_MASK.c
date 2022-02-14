
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct genwqe_reg {int dummy; } ;
struct genwqe_dev {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct genwqe_dev*,int) ;
 int FUNC_4 (struct genwqe_dev*,int,int) ;
 int FUNC_5 (struct genwqe_dev*,struct genwqe_reg*,unsigned int*,unsigned int,int,int,int) ;

int FUNC_6(struct genwqe_dev *VAR_3, int VAR_4,
     struct genwqe_reg *VAR_5, unsigned int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14 = 0;
 u32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u64 VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_15 = FUNC_1(VAR_4) | VAR_2;
 VAR_20 = FUNC_3(VAR_3, VAR_15);

 if ((VAR_20 != 0x0) && (VAR_20 != 0xffffffffffffffffull)) {
  VAR_16 = FUNC_1(VAR_4) | VAR_20;
  while (1) {
   VAR_21 = FUNC_3(VAR_3, VAR_16);
   if ((VAR_21 == 0x0) || (VAR_21 == 0xffffffffffffffffull))
    break;

   VAR_17 = (VAR_21 & 0x0000000000ffffffull);
   VAR_18 = (VAR_21 & 0x0000007fff000000ull) >> 24;
   VAR_19 = (VAR_21 & 0x0000008000000000ull) >> 36;
   VAR_17 |= FUNC_1(VAR_4);

   if (VAR_19) {
    for (VAR_7 = 0; VAR_7 < (int)VAR_18; VAR_7++) {
     VAR_22 = FUNC_3(VAR_3, VAR_17);
     FUNC_5(VAR_3, VAR_5, &VAR_14, VAR_6,
          VAR_17, VAR_7, VAR_22);
    }
   } else {
    VAR_18 >>= 3;
    for (VAR_7 = 0; VAR_7 < (int)VAR_18; VAR_7++, VAR_17 += 8) {
     VAR_22 = FUNC_3(VAR_3, VAR_17);
     FUNC_5(VAR_3, VAR_5, &VAR_14, VAR_6,
          VAR_17, 0, VAR_22);
    }
   }
   VAR_16 += 8;
  }
 }





 for (VAR_13 = 0; VAR_13 < 8; VAR_13++) {

  VAR_23 = FUNC_1(VAR_4) | FUNC_2(VAR_13);
  VAR_22 = FUNC_3(VAR_3, VAR_23);

  if ((VAR_22 == 0x0ull) || (VAR_22 == -1ull))
   continue;

  VAR_8 = (VAR_22 >> 24) & 0xff;
  VAR_9 = (VAR_22 >> 16) & 0xff;
  VAR_11 = VAR_22 & 0xffff;




  for (VAR_10 = 0; VAR_10 <= VAR_9; VAR_10++) {
   u32 VAR_24 =
    FUNC_0(VAR_13, VAR_10);

   VAR_23 = (FUNC_1(VAR_4) |
    VAR_1);
   FUNC_4(VAR_3, VAR_23, VAR_24);

   for (VAR_12 = 0;
        VAR_12 < (VAR_10 ? VAR_11 : VAR_8);
        VAR_12++) {
    VAR_23 = (FUNC_1(VAR_4) |
     VAR_0);
    VAR_22 = FUNC_3(VAR_3, VAR_23);
    FUNC_5(VAR_3, VAR_5, &VAR_14, VAR_6, VAR_23,
         (VAR_24<<16) | VAR_12, VAR_22);
   }
  }
 }
 return 0;
}
