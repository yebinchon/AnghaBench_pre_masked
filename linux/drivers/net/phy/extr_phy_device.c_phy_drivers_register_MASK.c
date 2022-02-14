
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_driver {int dummy; } ;
struct module {int dummy; } ;


 int FUNC_0 (struct phy_driver*,struct module*) ;
 int FUNC_1 (struct phy_driver*) ;

int FUNC_2(struct phy_driver *VAR_0, int VAR_1,
    struct module *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0 + VAR_3, VAR_2);
  if (VAR_4) {
   while (VAR_3-- > 0)
    FUNC_1(VAR_0 + VAR_3);
   break;
  }
 }
 return VAR_4;
}
