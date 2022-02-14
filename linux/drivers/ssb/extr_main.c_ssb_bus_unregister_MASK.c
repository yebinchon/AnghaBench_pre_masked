
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_bus {int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct ssb_bus*) ;
 int FUNC_5 (struct ssb_bus*) ;
 int FUNC_6 (struct ssb_bus*) ;
 int FUNC_7 (struct ssb_bus*) ;
 int FUNC_8 (struct ssb_bus*) ;

void FUNC_9(struct ssb_bus *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2 == -VAR_0)
  FUNC_1("Some GPIOs are still in use\n");
 else if (VAR_2)
  FUNC_1("Can not unregister GPIO driver: %i\n", VAR_2);

 FUNC_2();
 FUNC_4(VAR_1);
 FUNC_0(&VAR_1->list);
 FUNC_3();

 FUNC_8(VAR_1);
 FUNC_7(VAR_1);
 FUNC_6(VAR_1);
}
