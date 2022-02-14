
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {unsigned int handle; int timeout_attr; scalar_t__ has_timeout; int mode_attr; } ;


 int FUNC_0 (int *,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_1,
  unsigned int VAR_2)
{
 if (VAR_0 && VAR_2 == VAR_0->handle) {
  FUNC_0(&VAR_1->dev, &VAR_0->mode_attr);
  if (VAR_0->has_timeout)
   FUNC_0(&VAR_1->dev, &VAR_0->timeout_attr);
  FUNC_1(VAR_0);
  VAR_0 = ((void*)0);
 }
}
