
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct us_data*) ;
 scalar_t__ FUNC_1 (struct us_data*) ;
 int FUNC_2 (struct us_data*,char*) ;

__attribute__((used)) static int FUNC_3(struct us_data *VAR_2)
{
 FUNC_2(VAR_2, "ISD200 Initialization...\n");



 if (FUNC_1(VAR_2) == VAR_0) {
  FUNC_2(VAR_2, "ERROR Initializing ISD200 Info struct\n");
 } else {


  if (FUNC_0(VAR_2) != VAR_1)
   FUNC_2(VAR_2, "ISD200 Initialization Failure\n");
  else
   FUNC_2(VAR_2, "ISD200 Initialization complete\n");
 }

 return 0;
}
