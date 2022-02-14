
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_switch {int authorized; scalar_t__ boot; } ;
struct device {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int) ;
 int FUNC_1 (struct device*,int *,int (*) (struct device*,void*)) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (struct device*) ;
 struct tb_switch* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, void *VAR_2)
{
 if (FUNC_3(VAR_1)) {
  struct tb_switch *VAR_3 = FUNC_4(VAR_1);






  if (VAR_3->boot)
   VAR_3->authorized = 1;

  FUNC_0(VAR_1, 0);
  FUNC_2(&VAR_1->kobj, VAR_0);
  FUNC_1(VAR_1, ((void*)0), FUNC_5);
 }

 return 0;
}
