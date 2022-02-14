
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
 int VAR_9 ;
 int FUNC_0 (struct tg3*) ;
 int FUNC_1 (struct tg3*) ;
 int FUNC_2 (struct tg3*,int ) ;
 int FUNC_3 (struct tg3*,int) ;
 int FUNC_4 (struct tg3*) ;
 int FUNC_5 (struct tg3*,int ) ;
 int FUNC_6 (struct tg3*,int ,int *) ;
 int FUNC_7 (struct tg3*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct tg3 *VAR_10, u32 VAR_11, u32 *VAR_12)
{
 int VAR_13;

 if (!FUNC_2(VAR_10, VAR_1))
  return FUNC_6(VAR_10, VAR_11, VAR_12);

 VAR_11 = FUNC_5(VAR_10, VAR_11);

 if (VAR_11 > VAR_3)
  return -VAR_0;

 VAR_13 = FUNC_4(VAR_10);
 if (VAR_13)
  return VAR_13;

 FUNC_1(VAR_10);

 FUNC_9(VAR_2, VAR_11);
 VAR_13 = FUNC_3(VAR_10, VAR_8 | VAR_6 |
  VAR_5 | VAR_7 | VAR_4);

 if (VAR_13 == 0)
  *VAR_12 = FUNC_8(VAR_9);

 FUNC_0(VAR_10);

 FUNC_7(VAR_10);

 return VAR_13;
}
