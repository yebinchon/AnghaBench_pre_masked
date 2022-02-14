
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
 scalar_t__ FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (struct tg3*,int ) ;
 int FUNC_2 (struct tg3*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct tg3 *VAR_4, u32 VAR_5)
{
 u32 VAR_6;

 while (VAR_5) {
  if (FUNC_0(VAR_4, VAR_3))
   return -VAR_1;

  VAR_6 = FUNC_1(VAR_4, VAR_2);
  if (!(VAR_6 & VAR_0))
   break;

  FUNC_2(VAR_4, VAR_3);

  FUNC_3(10);
  VAR_5 -= (VAR_5 > 10) ? 10 : VAR_5;
 }

 return VAR_5 ? 0 : -VAR_1;
}
