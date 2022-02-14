
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cu_type; } ;
struct ccw_device {TYPE_2__* private; TYPE_1__ id; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct ccw_device*) ;

__attribute__((used)) static int FUNC_2(struct ccw_device *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 && !VAR_3)
  return VAR_4;
 if (VAR_3 && VAR_2->private->state == VAR_0) {
  VAR_4 = FUNC_0(VAR_2);
  if (VAR_4)
   return VAR_4;
  if (VAR_2->id.cu_type == 0)
   VAR_2->private->state = VAR_1;
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4)
   return VAR_4;
 }
 return 0;
}
