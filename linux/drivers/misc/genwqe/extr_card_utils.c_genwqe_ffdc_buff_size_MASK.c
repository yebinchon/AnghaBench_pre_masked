
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct genwqe_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct genwqe_dev*,int) ;

int FUNC_3(struct genwqe_dev *VAR_1, int VAR_2)
{
 int VAR_3 = 0, VAR_4, VAR_5, VAR_6, VAR_7;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 u64 VAR_12, VAR_13, VAR_14;

 VAR_8 = FUNC_0(VAR_2) | VAR_0;
 VAR_12 = FUNC_2(VAR_1, VAR_8);

 if ((VAR_12 != 0x0) && (VAR_12 != -1ull)) {
  VAR_9 = FUNC_0(VAR_2) | VAR_12;

  while (1) {
   VAR_13 = FUNC_2(VAR_1, VAR_9);

   if ((VAR_13 == 0x0) || (VAR_13 == -1ull))
    break;


   VAR_10 = (VAR_13 & 0x0000007fff000000ull) >> 24;


   VAR_11 = (VAR_13 & 0x0000008000000000ull) >> 36;

   if (VAR_11) {
    VAR_3 += VAR_10;
   } else {
    VAR_3 += VAR_10 >> 3;
   }

   VAR_9 += 8;
  }
 }

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  VAR_14 = FUNC_0(VAR_2) | FUNC_1(VAR_4);
  VAR_13 = FUNC_2(VAR_1, VAR_14);

  if ((VAR_13 == 0x0ull) || (VAR_13 == -1ull))
   continue;

  VAR_5 = (VAR_13 >> 24) & 0xff;
  VAR_6 = (VAR_13 >> 16) & 0xff;
  VAR_7 = VAR_13 & 0xffff;

  VAR_3 += VAR_5 + (VAR_6 * VAR_7);
 }
 return VAR_3;
}
