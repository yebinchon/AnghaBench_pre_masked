
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int dev; int pdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct tg3*) ;
 scalar_t__ FUNC_4 (struct tg3*) ;
 scalar_t__ FUNC_5 (struct tg3*,int ) ;
 int FUNC_6 (struct tg3*,int ) ;
 int FUNC_7 (struct tg3*,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct tg3 *VAR_9)
{
 int VAR_10;
 u32 VAR_11;

 if (FUNC_5(VAR_9, VAR_6))
  return 0;

 if (FUNC_5(VAR_9, VAR_3)) {

  return 0;
 }

 if (FUNC_3(VAR_9) == VAR_0) {

  for (VAR_10 = 0; VAR_10 < 200; VAR_10++) {
   if (FUNC_8(VAR_7) & VAR_8)
    return 0;
   if (FUNC_2(VAR_9->pdev))
    return -VAR_2;

   FUNC_9(100);
  }
  return -VAR_2;
 }


 for (VAR_10 = 0; VAR_10 < 100000; VAR_10++) {
  FUNC_7(VAR_9, VAR_4, &VAR_11);
  if (VAR_11 == ~VAR_5)
   break;
  if (FUNC_2(VAR_9->pdev)) {
   if (!FUNC_5(VAR_9, VAR_6)) {
    FUNC_6(VAR_9, VAR_6);
    FUNC_1(VAR_9->dev, "No firmware running\n");
   }

   break;
  }

  FUNC_9(10);
 }






 if (VAR_10 >= 100000 && !FUNC_5(VAR_9, VAR_6)) {
  FUNC_6(VAR_9, VAR_6);

  FUNC_1(VAR_9->dev, "No firmware running\n");
 }

 if (FUNC_4(VAR_9) == VAR_1) {



  FUNC_0(10);
 }

 return 0;
}
