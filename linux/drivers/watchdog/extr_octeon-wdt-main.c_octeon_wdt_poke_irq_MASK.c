
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_6 () ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 int VAR_6 = FUNC_6();
 unsigned int VAR_7 = FUNC_1(VAR_6);
 int VAR_8 = FUNC_2(VAR_6);

 if (VAR_1) {
  if (VAR_3[VAR_6] > 0) {

   FUNC_4(VAR_8, FUNC_0(VAR_7), 1);
   VAR_3[VAR_6]--;
  } else {

   FUNC_5(VAR_4);
   FUNC_3(VAR_6, &VAR_2);
  }
 } else {

  FUNC_4(VAR_8, FUNC_0(VAR_7), 1);
 }
 return VAR_0;
}
