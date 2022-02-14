
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
 scalar_t__ FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (struct tg3*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct tg3 *VAR_5)
{
 u32 VAR_6 = FUNC_2(VAR_2);
 int VAR_7;


 if (FUNC_0(VAR_5, VAR_1) &&
     !(VAR_6 & VAR_3))
  return;


 FUNC_1(VAR_5, 0x16, 0x8007);


 FUNC_1(VAR_5, VAR_4, VAR_0);



 for (VAR_7 = 0; VAR_7 < 500; VAR_7++)
  FUNC_3(10);


 FUNC_1(VAR_5, 0x10, 0x8411);


 FUNC_1(VAR_5, 0x11, 0x0a10);

 FUNC_1(VAR_5, 0x18, 0x00a0);
 FUNC_1(VAR_5, 0x16, 0x41ff);


 FUNC_1(VAR_5, 0x13, 0x0400);
 FUNC_3(40);
 FUNC_1(VAR_5, 0x13, 0x0000);

 FUNC_1(VAR_5, 0x11, 0x0a50);
 FUNC_3(40);
 FUNC_1(VAR_5, 0x11, 0x0a10);



 for (VAR_7 = 0; VAR_7 < 15000; VAR_7++)
  FUNC_3(10);




 FUNC_1(VAR_5, 0x10, 0x8011);
}
