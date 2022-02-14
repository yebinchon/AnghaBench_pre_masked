
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ccw_device {TYPE_2__* private; } ;
struct TYPE_3__ {scalar_t__ pgid_unknown; } ;
struct TYPE_4__ {TYPE_1__ flags; } ;


 int FUNC_0 (struct ccw_device*,int) ;
 int FUNC_1 (struct ccw_device*) ;

__attribute__((used)) static void FUNC_2(struct ccw_device *VAR_0, void *VAR_1, int VAR_2)
{
 if (VAR_2) {

  FUNC_0(VAR_0, VAR_2);
  return;
 }




 VAR_0->private->flags.pgid_unknown = 0;
 FUNC_1(VAR_0);
}
