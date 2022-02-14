
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int * resource; } ;
struct cpwd {int regs; int irq; scalar_t__ initialized; scalar_t__ broken; TYPE_1__* devs; int enabled; } ;
struct TYPE_2__ {int runstatus; int misc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (struct cpwd*,int) ;
 int FUNC_1 (struct cpwd*,int) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct cpwd*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 struct cpwd* FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct cpwd *VAR_6 = FUNC_6(VAR_5);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  FUNC_4(&VAR_6->devs[VAR_7].misc);

  if (!VAR_6->enabled) {
   FUNC_1(VAR_6, VAR_7);
   if (VAR_6->devs[VAR_7].runstatus & VAR_1)
    FUNC_0(VAR_6, VAR_7);
  }
 }

 if (VAR_6->broken)
  FUNC_2(&VAR_4);

 if (VAR_6->initialized)
  FUNC_3(VAR_6->irq, VAR_6);

 FUNC_5(&VAR_5->resource[0], VAR_6->regs, 4 * VAR_2);

 VAR_3 = ((void*)0);

 return 0;
}
