
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct dummy {TYPE_1__ gadget; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct dummy* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct dummy *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->gadget.dev, &VAR_0);
 FUNC_2(&VAR_2->gadget);
 return 0;
}
