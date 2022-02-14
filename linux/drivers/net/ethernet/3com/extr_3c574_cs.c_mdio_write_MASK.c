
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (unsigned int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10 = 0x50020000 | (VAR_7 << 23) | (VAR_8 << 18) | VAR_9;
 unsigned int VAR_11 = VAR_6 + VAR_4;
 int VAR_12;

 if (VAR_5)
  FUNC_0(VAR_6, 32);


 for (VAR_12 = 31; VAR_12 >= 0; VAR_12--) {
  int VAR_13 = (VAR_10&(1<<VAR_12)) ? VAR_1 : VAR_0;
  FUNC_1(VAR_13, VAR_11);
  FUNC_1(VAR_13 | VAR_3, VAR_11);
 }

 for (VAR_12 = 1; VAR_12 >= 0; VAR_12--) {
  FUNC_1(VAR_2, VAR_11);
  FUNC_1(VAR_2 | VAR_3, VAR_11);
 }
}
