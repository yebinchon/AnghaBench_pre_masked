
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 () ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_9, int VAR_10)
{
 unsigned int VAR_11 = VAR_1 | VAR_5;
 unsigned int VAR_12;
 unsigned long VAR_13;


 VAR_13 = VAR_8 + FUNC_0(20);
 while (FUNC_4(VAR_8, VAR_13)) {
  VAR_12 = FUNC_2(VAR_3);
  if (VAR_12 & VAR_11)
   break;
 }

 VAR_12 = FUNC_2(VAR_3);
 FUNC_3(VAR_12, VAR_2);

 if (VAR_12 & VAR_4) {
  FUNC_1();
  return VAR_6;
 }

 if (VAR_12 & VAR_5) {
  int VAR_14 = FUNC_2(VAR_0);
  if (VAR_14 & VAR_7) {
   FUNC_1();
   return VAR_6;
  }
 }

 return 0;
}
