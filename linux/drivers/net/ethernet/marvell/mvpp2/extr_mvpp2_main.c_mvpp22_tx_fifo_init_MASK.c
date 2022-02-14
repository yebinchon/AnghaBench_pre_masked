
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct mvpp2*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct mvpp2 *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_6 == 0) {
   VAR_7 = VAR_0;
   VAR_8 = VAR_3;
  } else {
   VAR_7 = VAR_1;
   VAR_8 = VAR_4;
  }
  FUNC_2(VAR_5, FUNC_0(VAR_6), VAR_7);
  FUNC_2(VAR_5, FUNC_1(VAR_6), VAR_8);
 }
}
