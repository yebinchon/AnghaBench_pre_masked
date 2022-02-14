
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 short VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (short,unsigned int) ;
 int FUNC_1 (short,unsigned int) ;
 short FUNC_2 (unsigned int,int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_8, int VAR_9, short VAR_10)
{
 int VAR_11;
 unsigned int VAR_12 = VAR_8 + VAR_0;
 short VAR_13;
 int VAR_14 = VAR_9 | (VAR_7 << 8);

 VAR_10 |= FUNC_2(VAR_8, VAR_9);

 FUNC_0(0, VAR_12);
 FUNC_0(VAR_2|VAR_4|VAR_5, VAR_12);

 VAR_14 = VAR_14 >> 1;


 for (VAR_11 = 9; VAR_11 >= 0; VAR_11--) {
  VAR_13 = (VAR_14 & (1 << VAR_11)) ? VAR_6 : 0;
  FUNC_1(VAR_2|VAR_4|VAR_5|VAR_13, VAR_12);
  FUNC_1(VAR_2|VAR_4|VAR_5|VAR_13|VAR_3, VAR_12);
  FUNC_1(VAR_2|VAR_4|VAR_5|VAR_13, VAR_12);
 }

 FUNC_0(VAR_2|VAR_4, VAR_12);
 FUNC_0(VAR_2|VAR_4|VAR_3, VAR_12);
 FUNC_0(VAR_2|VAR_4, VAR_12);

 for (VAR_11 = 15; VAR_11 >= 0; VAR_11--) {
  VAR_13 = (VAR_10 & (1 << VAR_11)) ? VAR_1 : 0;
  FUNC_1(VAR_2|VAR_4|VAR_13, VAR_12);
  FUNC_1(VAR_2|VAR_4|VAR_13|VAR_3, VAR_12);
  FUNC_1(VAR_2|VAR_4|VAR_13, VAR_12);
 }


 FUNC_0(VAR_2|VAR_5, VAR_12);
 FUNC_0(VAR_2|VAR_5| VAR_3, VAR_12);
 FUNC_0(VAR_2|VAR_5, VAR_12);

 FUNC_0(0, VAR_12);
}
