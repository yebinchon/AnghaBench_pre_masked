
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int handle; int * attrs; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_1)
{
 if (VAR_0) {
  FUNC_0(&VAR_1->dev, &VAR_0->attrs[0]);
  if (VAR_0->handle != 0x0115)
   FUNC_0(&VAR_1->dev, &VAR_0->attrs[1]);

  FUNC_1(VAR_0);
  VAR_0 = ((void*)0);
 }
}
