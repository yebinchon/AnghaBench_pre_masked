
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 long FUNC_4 (unsigned char,unsigned char) ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_5 () ;

long FUNC_6(unsigned char VAR_12, unsigned char VAR_13)
{
 int VAR_14;





 if ((VAR_12 > 31) || (VAR_13 > 31))
  return -1;

 if (FUNC_3() == VAR_3)
  return FUNC_4(VAR_12, VAR_13);


 VAR_7 = VAR_2;
 VAR_6 = VAR_0;
 VAR_5 = VAR_1;


 VAR_4 = VAR_12;


 VAR_11 = VAR_2;
 VAR_10 = VAR_0;
 VAR_9 = VAR_1;


 VAR_8 = VAR_13;


 FUNC_1(VAR_7,
        FUNC_0(VAR_7) & ~(1 << VAR_4));
 FUNC_1(VAR_11,
        FUNC_0(VAR_11) & ~(1 << VAR_8));


 FUNC_2(1);


 for (VAR_14 = 0; VAR_14 < 9; VAR_14++)
  FUNC_5();

 return 0;
}
