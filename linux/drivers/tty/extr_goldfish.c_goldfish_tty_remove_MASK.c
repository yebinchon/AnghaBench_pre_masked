
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int index; } ;
struct goldfish_tty {int irq; int * base; TYPE_1__ console; } ;


 int FUNC_0 (int ,struct platform_device*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct goldfish_tty* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct goldfish_tty *VAR_4 = FUNC_5(VAR_3);

 FUNC_3(&VAR_2);

 FUNC_7(&VAR_4->console);
 FUNC_6(VAR_1, VAR_4->console.index);
 FUNC_2(VAR_4->base);
 VAR_4->base = ((void*)0);
 FUNC_0(VAR_4->irq, VAR_3);
 VAR_0--;
 if (VAR_0 == 0)
  FUNC_1();
 FUNC_4(&VAR_2);
 return 0;
}
