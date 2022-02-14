
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct subchannel {int vpm; } ;
struct TYPE_3__ {int parent; } ;
struct ccw_device {TYPE_2__* private; TYPE_1__ dev; } ;
struct TYPE_4__ {int path_new_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct ccw_device*,int ) ;
 int FUNC_1 (struct ccw_device*,int ) ;
 int FUNC_2 (struct ccw_device*) ;
 struct subchannel* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ccw_device *VAR_4)
{
 struct subchannel *VAR_5 = FUNC_3(VAR_4->dev.parent);

 if (FUNC_0(VAR_4, VAR_2) == VAR_3) {

  FUNC_1(VAR_4, VAR_0);

  VAR_4->private->path_new_mask = VAR_5->vpm;
  return;
 }

 FUNC_2(VAR_4);
 FUNC_1(VAR_4, VAR_1);
}
