
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct parport {int irq; } ;
struct ax_drvdata {TYPE_1__* io; int base; } ;
struct TYPE_2__ {int start; } ;


 int FUNC_0 (int ,struct parport*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ax_drvdata*) ;
 int FUNC_3 (struct parport*) ;
 struct parport* FUNC_4 (struct platform_device*) ;
 struct ax_drvdata* FUNC_5 (struct parport*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct parport *VAR_1 = FUNC_4(VAR_0);
 struct ax_drvdata *VAR_2 = FUNC_5(VAR_1);

 FUNC_0(VAR_1->irq, VAR_1);
 FUNC_3(VAR_1);
 FUNC_1(VAR_2->base);
 FUNC_6(VAR_2->io->start, FUNC_7(VAR_2->io));
 FUNC_2(VAR_2);

 return 0;
}
