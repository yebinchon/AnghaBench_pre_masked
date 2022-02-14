
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_wdt {int unregister; int response; } ;
struct mei_cl_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mei_wdt*) ;
 int FUNC_4 (struct mei_wdt*) ;
 int FUNC_5 (struct mei_cl_device*) ;
 struct mei_wdt* FUNC_6 (struct mei_cl_device*) ;
 int FUNC_7 (struct mei_wdt*) ;

__attribute__((used)) static int FUNC_8(struct mei_cl_device *VAR_0)
{
 struct mei_wdt *VAR_1 = FUNC_6(VAR_0);


 if (!FUNC_2(&VAR_1->response))
  FUNC_1(&VAR_1->response);

 FUNC_0(&VAR_1->unregister);

 FUNC_7(VAR_1);

 FUNC_5(VAR_0);

 FUNC_3(VAR_1);

 FUNC_4(VAR_1);

 return 0;
}
