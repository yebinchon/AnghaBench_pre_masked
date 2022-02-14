
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (unsigned char) ;
 int VAR_6 ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{




 unsigned char VAR_9;

 FUNC_3(&VAR_6);
 VAR_9 = FUNC_1(VAR_3);

 FUNC_2("WDT status %d\n", VAR_9);

 if (VAR_5 == 501) {
  FUNC_5(VAR_9);
  if (VAR_4) {
   if (!(VAR_9 & VAR_1))
    FUNC_2("Possible fan fault\n");
  }
 }
 if (!(VAR_9 & VAR_2)) {
  FUNC_2("Reset in 5ms\n");

 }
 FUNC_4(&VAR_6);
 return VAR_0;
}
