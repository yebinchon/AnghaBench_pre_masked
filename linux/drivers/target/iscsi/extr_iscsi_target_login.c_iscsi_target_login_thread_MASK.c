
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_np {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_np*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

int FUNC_4(void *VAR_1)
{
 struct iscsi_np *VAR_2 = VAR_1;
 int VAR_3;

 FUNC_1(VAR_0);

 while (1) {
  VAR_3 = FUNC_0(VAR_2);




  if (VAR_3 != 1)
   break;
 }

 while (!FUNC_2()) {
  FUNC_3(100);
 }

 return 0;
}
