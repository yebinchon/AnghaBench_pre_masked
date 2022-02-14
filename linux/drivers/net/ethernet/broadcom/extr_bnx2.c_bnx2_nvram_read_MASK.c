
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2*) ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (struct bnx2*) ;
 int FUNC_3 (struct bnx2*,int,int *,int) ;
 int FUNC_4 (struct bnx2*) ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_6(struct bnx2 *VAR_2, u32 VAR_3, u8 *VAR_4,
  int VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;

 if (VAR_5 == 0)
  return 0;


 if ((VAR_6 = FUNC_0(VAR_2)) != 0)
  return VAR_6;


 FUNC_2(VAR_2);

 VAR_9 = VAR_5;
 VAR_8 = VAR_3;
 VAR_10 = 0;

 VAR_7 = 0;

 if (VAR_8 & 3) {
  u8 VAR_11[4];
  u32 VAR_12;

  VAR_8 &= ~3;
  VAR_12 = 4 - (VAR_3 & 3);

  if (VAR_12 >= VAR_9) {
   VAR_12 = VAR_9;
   VAR_7 = VAR_0 |
        VAR_1;
  }
  else {
   VAR_7 = VAR_0;
  }

  VAR_6 = FUNC_3(VAR_2, VAR_8, VAR_11, VAR_7);

  if (VAR_6)
   return VAR_6;

  FUNC_5(VAR_4, VAR_11 + (VAR_3 & 3), VAR_12);

  VAR_8 += 4;
  VAR_4 += VAR_12;
  VAR_9 -= VAR_12;
 }
 if (VAR_9 & 3) {
  VAR_10 = 4 - (VAR_9 & 3);
  VAR_9 = (VAR_9 + 4) & ~3;
 }

 if (VAR_9 == 4) {
  u8 VAR_13[4];

  if (VAR_7)
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_0 |
        VAR_1;

  VAR_6 = FUNC_3(VAR_2, VAR_8, VAR_13, VAR_7);

  FUNC_5(VAR_4, VAR_13, 4 - VAR_10);
 }
 else if (VAR_9 > 0) {
  u8 VAR_14[4];


  if (VAR_7)
   VAR_7 = 0;
  else
   VAR_7 = VAR_0;

  VAR_6 = FUNC_3(VAR_2, VAR_8, VAR_4, VAR_7);


  VAR_8 += 4;
  VAR_4 += 4;
  VAR_9 -= 4;

  while (VAR_9 > 4 && VAR_6 == 0) {
   VAR_6 = FUNC_3(VAR_2, VAR_8, VAR_4, 0);


   VAR_8 += 4;
   VAR_4 += 4;
   VAR_9 -= 4;
  }

  if (VAR_6)
   return VAR_6;

  VAR_7 = VAR_1;
  VAR_6 = FUNC_3(VAR_2, VAR_8, VAR_14, VAR_7);

  FUNC_5(VAR_4, VAR_14, 4 - VAR_10);
 }


 FUNC_1(VAR_2);

 FUNC_4(VAR_2);

 return VAR_6;
}
