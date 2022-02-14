
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct tg3*) ;
 int FUNC_1 (struct tg3*) ;
 int FUNC_2 (struct tg3*,int) ;
 int FUNC_3 (struct tg3*,int*) ;
 int FUNC_4 (struct tg3*,int,int) ;
 int FUNC_5 (struct tg3*,int ,int*) ;
 int FUNC_6 (struct tg3*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct tg3 *VAR_9)
{
 u32 VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_12 = 10;
 VAR_13 = 1;
 do {
  if (VAR_13) {
   VAR_14 = FUNC_0(VAR_9);
   if (VAR_14)
    return VAR_14;
   VAR_13 = 0;
  }


  if (FUNC_5(VAR_9, VAR_8, &VAR_10))
   continue;

  VAR_10 |= 0x3000;
  FUNC_6(VAR_9, VAR_8, VAR_10);


  FUNC_6(VAR_9, VAR_4,
        VAR_0 | VAR_1);


  if (FUNC_5(VAR_9, VAR_5, &VAR_11))
   continue;

  FUNC_6(VAR_9, VAR_5,
        VAR_2 | VAR_3);

  VAR_14 = FUNC_2(VAR_9, 1);
  if (VAR_14)
   return VAR_14;


  FUNC_4(VAR_9, 0x8005, 0x0800);

  VAR_14 = FUNC_3(VAR_9, &VAR_13);
  if (!VAR_14)
   break;
 } while (--VAR_12);

 VAR_14 = FUNC_1(VAR_9);
 if (VAR_14)
  return VAR_14;

 FUNC_4(VAR_9, 0x8005, 0x0000);

 FUNC_6(VAR_9, VAR_6, 0x8200);
 FUNC_6(VAR_9, VAR_7, 0x0000);

 FUNC_2(VAR_9, 0);

 FUNC_6(VAR_9, VAR_5, VAR_11);

 VAR_14 = FUNC_5(VAR_9, VAR_8, &VAR_10);
 if (VAR_14)
  return VAR_14;

 VAR_10 &= ~0x3000;
 FUNC_6(VAR_9, VAR_8, VAR_10);

 return 0;
}
