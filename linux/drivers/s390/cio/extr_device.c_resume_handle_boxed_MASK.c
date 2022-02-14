
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw_device {TYPE_1__* private; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct ccw_device*,int ) ;
 int FUNC_1 (struct ccw_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct ccw_device *VAR_5)
{
 VAR_5->private->state = VAR_2;
 if (FUNC_0(VAR_5, VAR_1) == VAR_4)
  return 0;
 FUNC_1(VAR_5, VAR_0);
 return -VAR_3;
}
