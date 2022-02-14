
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mcs_op { ____Placeholder_mcs_op } mcs_op ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 unsigned long FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int,unsigned long) ;

__attribute__((used)) static int FUNC_5(void *VAR_4, enum mcs_op VAR_5)
{
 int VAR_6;
 unsigned long VAR_7 = FUNC_2();

 while (1) {
  FUNC_1();
  VAR_6 = FUNC_0(VAR_4);
  if (VAR_6 != VAR_0)
   break;
  if (VAR_1 < (FUNC_2() - VAR_7)) {
   FUNC_3(VAR_4);
   VAR_7 = FUNC_2();
  }
 }
 if (VAR_3 & VAR_2)
  FUNC_4(VAR_5, FUNC_2() - VAR_7);
 return VAR_6;
}
