
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct subchannel {TYPE_1__ dev; } ;
struct TYPE_4__ {struct subchannel* pseudo_subchannel; } ;


 TYPE_2__* FUNC_0 (int ) ;

int FUNC_1(struct subchannel *VAR_0)
{
 if (!VAR_0->dev.parent)
  return 0;
 return VAR_0 == FUNC_0(VAR_0->dev.parent)->pseudo_subchannel;
}
