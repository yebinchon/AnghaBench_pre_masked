
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlynq_device {scalar_t__ regs_start; scalar_t__ regs_end; int local; int dev; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vlynq_device*) ;
 struct vlynq_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct vlynq_device *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(&VAR_1->dev);
 FUNC_1(VAR_1->local);
 FUNC_4(VAR_1->regs_start,
      VAR_1->regs_end - VAR_1->regs_start + 1);

 FUNC_2(VAR_1);

 return 0;
}
