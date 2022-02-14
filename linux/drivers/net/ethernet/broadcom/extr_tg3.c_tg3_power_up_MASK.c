
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int dev; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct tg3*) ;
 int FUNC_3 (struct tg3*) ;

__attribute__((used)) static int FUNC_4(struct tg3 *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1);

 VAR_2 = FUNC_1(VAR_1->pdev, VAR_0);
 if (!VAR_2) {

  FUNC_3(VAR_1);
 } else {
  FUNC_0(VAR_1->dev, "Transition to D0 failed\n");
 }

 return VAR_2;
}
