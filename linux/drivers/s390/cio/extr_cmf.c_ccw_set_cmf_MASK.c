
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccw_device {int dummy; } ;
struct TYPE_2__ {int (* set ) (struct ccw_device*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct ccw_device*,int) ;

int FUNC_1(struct ccw_device *VAR_1, int VAR_2)
{
 return VAR_0->set(VAR_1, VAR_2 ? 2 : 0);
}
