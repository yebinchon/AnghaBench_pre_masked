
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cosa_data {int dummy; } ;


 int VAR_0 ;
 short FUNC_0 (struct cosa_data*) ;
 int FUNC_1 (struct cosa_data*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct cosa_data *VAR_1)
{
 int VAR_2 = 1000;

 while (--VAR_2) {

  if (FUNC_1(VAR_1) & VAR_0) {
   short VAR_3;
   VAR_3 = FUNC_0(VAR_1);




   return VAR_3;
  }

  FUNC_3(1);
 }
 FUNC_2("timeout in get_wait_data (status 0x%x)\n",
  FUNC_1(VAR_1));
 return -1;
}
