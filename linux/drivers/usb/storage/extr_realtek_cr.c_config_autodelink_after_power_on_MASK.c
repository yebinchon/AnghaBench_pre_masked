
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct us_data {scalar_t__ extra; } ;
struct rts51x_chip {int dummy; } ;


 scalar_t__ FUNC_0 (struct rts51x_chip*,int,int) ;
 int FUNC_1 (struct rts51x_chip*) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct us_data*,int*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (struct us_data*,int,int ) ;
 int FUNC_6 (struct us_data*) ;
 int FUNC_7 (struct us_data*,int,int*,int) ;
 int FUNC_8 (struct us_data*,int,int*,int) ;

__attribute__((used)) static int FUNC_9(struct us_data *VAR_2)
{
 struct rts51x_chip *VAR_3 = (struct rts51x_chip *)(VAR_2->extra);
 int VAR_4;
 u8 VAR_5;

 if (!FUNC_1(VAR_3))
  return 0;

 VAR_4 = FUNC_7(VAR_2, 0xFE47, &VAR_5, 1);
 if (VAR_4 < 0)
  return -VAR_0;

 if (VAR_1) {
  FUNC_2(VAR_5, 0);
  FUNC_2(VAR_5, 1);
  FUNC_3(VAR_5, 2);

  if (FUNC_0(VAR_3, 0x0138, 0x3882))
   FUNC_2(VAR_5, 2);

  FUNC_3(VAR_5, 7);


  VAR_4 = FUNC_4(VAR_2, &VAR_5, 1);
  if (VAR_4 < 0)
   return -VAR_0;

  VAR_4 = FUNC_6(VAR_2);
  if (VAR_4 == 0)
   (void)FUNC_5(VAR_2, 1, 0);
 } else {


  FUNC_3(VAR_5, 2);

  if (FUNC_0(VAR_3, 0x0138, 0x3882))
   FUNC_2(VAR_5, 2);

  if (FUNC_0(VAR_3, 0x0159, 0x5889) ||
      FUNC_0(VAR_3, 0x0138, 0x3880)) {
   FUNC_2(VAR_5, 0);
   FUNC_2(VAR_5, 7);
  }


  VAR_4 = FUNC_4(VAR_2, &VAR_5, 1);
  if (VAR_4 < 0)
   return -VAR_0;

  if (FUNC_0(VAR_3, 0x0159, 0x5888)) {
   VAR_5 = 0xFF;
   VAR_4 = FUNC_8(VAR_2, 0xFE79, &VAR_5, 1);
   if (VAR_4 < 0)
    return -VAR_0;

   VAR_5 = 0x01;
   VAR_4 = FUNC_8(VAR_2, 0x48, &VAR_5, 1);
   if (VAR_4 < 0)
    return -VAR_0;
  }
 }

 return 0;
}
