
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
 int FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (struct tg3*,int ,int) ;
 int FUNC_2 (struct tg3*) ;
 int FUNC_3 (struct tg3*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct tg3 *VAR_10, u32 VAR_11, u32 *VAR_12)
{
 int VAR_13, VAR_14;
 u32 VAR_15, VAR_16 = VAR_11 * 8;

 VAR_14 = FUNC_2(VAR_10);
 if (VAR_14)
  return VAR_14;

 FUNC_1(VAR_10, VAR_6, VAR_16 | VAR_0);
 FUNC_1(VAR_10, VAR_7, VAR_2 |
   VAR_1 | VAR_3);
 FUNC_0(VAR_10, VAR_7);
 FUNC_4(10);

 for (VAR_13 = 0; VAR_13 < 100; VAR_13++) {
  VAR_15 = FUNC_0(VAR_10, VAR_9);
  if (VAR_15 & VAR_4) {
   *VAR_12 = FUNC_0(VAR_10, VAR_8);
   break;
  }
  FUNC_4(10);
 }

 FUNC_1(VAR_10, VAR_7, 0);

 FUNC_3(VAR_10);
 if (VAR_15 & VAR_4)
  return 0;

 return -VAR_5;
}
