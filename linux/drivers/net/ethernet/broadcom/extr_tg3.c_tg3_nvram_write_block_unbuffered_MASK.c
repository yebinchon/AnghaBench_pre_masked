
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tg3 {int nvram_pagesize; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct tg3*) ;
 int FUNC_5 (struct tg3*,int) ;
 int FUNC_6 (struct tg3*,int,int *) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct tg3 *VAR_12, u32 VAR_13, u32 VAR_14,
  u8 *VAR_15)
{
 int VAR_16 = 0;
 u32 VAR_17 = VAR_12->nvram_pagesize;
 u32 VAR_18 = VAR_17 - 1;
 u32 VAR_19;
 u8 *VAR_20;

 VAR_20 = FUNC_2(VAR_17, VAR_1);
 if (VAR_20 == ((void*)0))
  return -VAR_0;

 while (VAR_14) {
  int VAR_21;
  u32 VAR_22, VAR_23, VAR_24;

  VAR_22 = VAR_13 & ~VAR_18;

  for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21 += 4) {
   VAR_16 = FUNC_6(VAR_12, VAR_22 + VAR_21,
        (__be32 *) (VAR_20 + VAR_21));
   if (VAR_16)
    break;
  }
  if (VAR_16)
   break;

  VAR_23 = VAR_13 & VAR_18;
  VAR_24 = VAR_17;
  if (VAR_14 < VAR_24)
   VAR_24 = VAR_14;

  VAR_14 -= VAR_24;

  FUNC_3(VAR_20 + VAR_23, VAR_15, VAR_24);

  VAR_13 = VAR_13 + (VAR_17 - VAR_23);

  FUNC_4(VAR_12);





  VAR_19 = VAR_10 | VAR_6 | VAR_3;

  if (FUNC_5(VAR_12, VAR_19))
   break;


  FUNC_7(VAR_2, VAR_22);

  VAR_19 = VAR_6 | VAR_3 | VAR_8 |
   VAR_5 | VAR_7 | VAR_4;

  if (FUNC_5(VAR_12, VAR_19))
   break;


  VAR_19 = VAR_10 | VAR_6 | VAR_3;

  if (FUNC_5(VAR_12, VAR_19))
   break;

  for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21 += 4) {
   __be32 VAR_25;

   VAR_25 = *((__be32 *) (VAR_20 + VAR_21));

   FUNC_7(VAR_11, FUNC_0(VAR_25));

   FUNC_7(VAR_2, VAR_22 + VAR_21);

   VAR_19 = VAR_6 | VAR_3 |
    VAR_8;

   if (VAR_21 == 0)
    VAR_19 |= VAR_5;
   else if (VAR_21 == (VAR_17 - 4))
    VAR_19 |= VAR_7;

   VAR_16 = FUNC_5(VAR_12, VAR_19);
   if (VAR_16)
    break;
  }
  if (VAR_16)
   break;
 }

 VAR_19 = VAR_9 | VAR_6 | VAR_3;
 FUNC_5(VAR_12, VAR_19);

 FUNC_1(VAR_20);

 return VAR_16;
}
