
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw_device {int ccwlock; TYPE_1__* private; } ;
struct TYPE_2__ {int cmb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ccw_device *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0->ccwlock);
 VAR_1 = !!VAR_0->private->cmb;
 FUNC_1(VAR_0->ccwlock);

 return VAR_1;
}
