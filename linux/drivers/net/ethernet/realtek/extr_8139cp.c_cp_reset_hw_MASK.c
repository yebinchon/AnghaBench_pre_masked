
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cp_private {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4 (struct cp_private *VAR_2)
{
 unsigned VAR_3 = 1000;

 FUNC_1(VAR_0, VAR_1);

 while (VAR_3--) {
  if (!(FUNC_0(VAR_0) & VAR_1))
   return;

  FUNC_3(10);
 }

 FUNC_2(VAR_2->dev, "hardware reset timeout\n");
}
