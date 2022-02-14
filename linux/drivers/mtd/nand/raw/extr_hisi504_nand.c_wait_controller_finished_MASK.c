
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinfc_host {scalar_t__ command; int dev; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hinfc_host*,int ) ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct hinfc_host *VAR_5)
{
 unsigned long VAR_6 = VAR_4 + VAR_0;
 int VAR_7;

 while (FUNC_2(VAR_4, VAR_6)) {
  VAR_7 = FUNC_1(VAR_5, VAR_2);
  if (VAR_5->command == VAR_3) {

   while (!(VAR_7 & VAR_1)) {
    FUNC_3(500, 1000);
    VAR_7 = FUNC_1(VAR_5, VAR_2);
   }
   return;
  }

  if (VAR_7 & VAR_1)
   return;
 }


 FUNC_0(VAR_5->dev, "Wait NAND controller exec cmd timeout.\n");
}
