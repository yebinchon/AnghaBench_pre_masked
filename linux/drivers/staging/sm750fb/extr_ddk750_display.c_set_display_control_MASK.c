
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(int VAR_6, int VAR_7)
{

 unsigned long VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0;

 if (!VAR_6) {
  VAR_8 = VAR_4;
  VAR_10 = VAR_5;
 } else {
  VAR_8 = VAR_0;
  VAR_10 = VAR_1;
 }

 VAR_9 = FUNC_0(VAR_8);
 if (VAR_7) {






  VAR_9 |= VAR_3;
  FUNC_1(VAR_8, VAR_9);

  VAR_9 |= VAR_2;






  do {
   VAR_11++;
   FUNC_1(VAR_8, VAR_9);
  } while ((FUNC_0(VAR_8) & ~VAR_10) != (VAR_9 & ~VAR_10));
  FUNC_2("Set Plane enbit:after tried %d times\n", VAR_11);
 } else {
  VAR_9 &= ~VAR_2;
  FUNC_1(VAR_8, VAR_9);

  VAR_9 &= ~VAR_3;
  FUNC_1(VAR_8, VAR_9);
 }
}
