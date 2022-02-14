
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct expander_device {int num_phys; TYPE_1__* ex_phy; } ;
struct domain_device {struct expander_device ex_dev; } ;
struct TYPE_2__ {int phy_change_count; } ;





 int FUNC_0 (struct domain_device*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct domain_device *VAR_0, int *VAR_1,
         int VAR_2, bool VAR_3)
{
 struct expander_device *VAR_4 = &VAR_0->ex_dev;
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = VAR_2; VAR_6 < VAR_4->num_phys; VAR_6++) {
  int VAR_7 = 0;

  VAR_5 = FUNC_0(VAR_0, VAR_6, &VAR_7);
  switch (VAR_5) {
  case 128:
  case 129:
   continue;
  case 130:
   break;
  default:
   return VAR_5;
  }

  if (VAR_7 != VAR_4->ex_phy[VAR_6].phy_change_count) {
   if (VAR_3)
    VAR_4->ex_phy[VAR_6].phy_change_count =
     VAR_7;
   *VAR_1 = VAR_6;
   return 0;
  }
 }
 return 0;
}
