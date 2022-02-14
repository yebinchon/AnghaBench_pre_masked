
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expander_device {int num_phys; } ;
struct domain_device {struct expander_device ex_dev; } ;


 int FUNC_0 (struct domain_device*,struct domain_device**) ;
 int FUNC_1 (struct domain_device*,int*,int,int) ;
 int FUNC_2 (struct domain_device*,int) ;

int FUNC_3(struct domain_device *VAR_0)
{
 int VAR_1;
 struct domain_device *VAR_2 = ((void*)0);

 VAR_1 = FUNC_0(VAR_0, &VAR_2);
 if (VAR_1 == 0 && VAR_2) {
  struct expander_device *VAR_3 = &VAR_2->ex_dev;
  int VAR_4 = 0, VAR_5;

  do {
   VAR_5 = -1;
   VAR_1 = FUNC_1(VAR_2, &VAR_5, VAR_4, 1);
   if (VAR_5 == -1)
    break;
   VAR_1 = FUNC_2(VAR_2, VAR_5);
   VAR_4 = VAR_5 + 1;
  } while (VAR_4 < VAR_3->num_phys);
 }
 return VAR_1;
}
