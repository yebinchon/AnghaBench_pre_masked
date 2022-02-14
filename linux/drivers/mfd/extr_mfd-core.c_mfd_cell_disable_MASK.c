
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mfd_cell {int (* disable ) (struct platform_device*) ;int usage_count; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct mfd_cell* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*) ;

int FUNC_6(struct platform_device *VAR_0)
{
 const struct mfd_cell *VAR_1 = FUNC_4(VAR_0);
 int VAR_2 = 0;


 if (FUNC_1(VAR_1->usage_count) == 0)
  VAR_2 = VAR_1->disable(VAR_0);


 if (VAR_2)
  FUNC_2(VAR_1->usage_count);


 FUNC_0(FUNC_3(VAR_1->usage_count) < 0);

 return VAR_2;
}
