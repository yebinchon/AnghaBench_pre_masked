
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {TYPE_1__* dev; int pipe; } ;
struct r8a66597_device {int dummy; } ;
struct r8a66597 {struct r8a66597_device device0; } ;
struct TYPE_2__ {int dev; } ;


 struct r8a66597_device* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static struct r8a66597_device *
FUNC_2(struct r8a66597 *VAR_0, struct urb *VAR_1)
{
 if (FUNC_1(VAR_1->pipe) == 0)
  return &VAR_0->device0;

 return FUNC_0(&VAR_1->dev->dev);
}
