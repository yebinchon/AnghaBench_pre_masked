
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cosa_data {int num; } ;


 int VAR_0 ;
 int FUNC_0 (struct cosa_data*) ;
 int FUNC_1 (struct cosa_data*,int) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct cosa_data *VAR_1, int VAR_2)
{
 int VAR_3 = 1000;
 while (--VAR_3) {

  if (FUNC_0(VAR_1) & VAR_0) {
   FUNC_1(VAR_1, VAR_2);



   return 0;
  }




 }
 FUNC_2("cosa%d: timeout in put_wait_data (status 0x%x)\n",
  VAR_1->num, FUNC_0(VAR_1));
 return -1;
}
