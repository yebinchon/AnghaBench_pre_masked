
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef enum nd_async_mode { ____Placeholder_nd_async_mode } nd_async_mode ;




 int FUNC_0 (int ,struct device*,int *) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 () ;

void FUNC_7(struct device *VAR_2, enum nd_async_mode VAR_3)
{
 bool VAR_4;

 switch (VAR_3) {
 case 129:






  if (!FUNC_3(VAR_2))
   return;

  FUNC_2(VAR_2);
  FUNC_0(VAR_0, VAR_2,
    &VAR_1);
  break;
 case 128:







  FUNC_4(VAR_2);
  VAR_4 = FUNC_3(VAR_2);
  FUNC_5(VAR_2);

  if (!VAR_4)
   return;

  FUNC_6();
  FUNC_1(VAR_2);
  break;
 }
}
