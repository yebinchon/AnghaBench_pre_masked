
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int) ;
 int VAR_10 ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_11, void *VAR_12)
{




 unsigned char VAR_13;

 FUNC_3(&VAR_10);

 VAR_13 = FUNC_1(VAR_7);
 FUNC_5(8);

 FUNC_2("status %d\n", VAR_13);

 if (VAR_9 == 501) {
  if (!(VAR_13 & VAR_4)) {
   FUNC_2("Overheat alarm (%d)\n", FUNC_1(VAR_6));
   FUNC_5(8);
  }
  if (!(VAR_13 & VAR_2))
   FUNC_2("PSU over voltage\n");
  if (!(VAR_13 & VAR_3))
   FUNC_2("PSU under voltage\n");
  if (VAR_8) {
   if (!(VAR_13 & VAR_1))
    FUNC_2("Possible fan fault\n");
  }
 }
 if (!(VAR_13 & VAR_5)) {
  FUNC_2("Reset in 5ms\n");

 }
 FUNC_4(&VAR_10);
 return VAR_0;
}
