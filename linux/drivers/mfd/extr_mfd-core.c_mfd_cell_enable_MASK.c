
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mfd_cell {int (* enable ) (struct platform_device*) ;int usage_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mfd_cell* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*) ;

int FUNC_4(struct platform_device *VAR_0)
{
 const struct mfd_cell *VAR_1 = FUNC_2(VAR_0);
 int VAR_2 = 0;


 if (FUNC_1(VAR_1->usage_count) == 1)
  VAR_2 = VAR_1->enable(VAR_0);


 if (VAR_2)
  FUNC_0(VAR_1->usage_count);

 return VAR_2;
}
