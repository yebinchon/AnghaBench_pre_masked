
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct tg3*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct tg3 *VAR_5)
{
 const int VAR_6 = 1000;
 int VAR_7;
 u32 VAR_8;




 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (FUNC_3(VAR_2) == VAR_4)
   break;

  FUNC_4(10);
 }

 if (VAR_7 == VAR_6) {
  FUNC_0(VAR_5->dev, "Boot code not ready for service patches\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_2(VAR_5, VAR_3);
 if (VAR_8 & 0xff) {
  FUNC_1(VAR_5->dev,
       "Other patches exist. Not downloading EEE patch\n");
  return -VAR_1;
 }

 return 0;
}
