
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel {int lpm; } ;
struct TYPE_2__ {int parent; } ;
struct ccw_device {TYPE_1__ dev; } ;
typedef int __u8 ;


 struct subchannel* FUNC_0 (int ) ;

__u8 FUNC_1(struct ccw_device *VAR_0)
{
 struct subchannel *VAR_1;

 if (!VAR_0->dev.parent)
  return 0;

 VAR_1 = FUNC_0(VAR_0->dev.parent);
 return VAR_1->lpm;
}
