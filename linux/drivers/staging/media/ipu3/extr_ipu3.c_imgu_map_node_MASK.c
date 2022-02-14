
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imgu_device {int dummy; } ;
struct TYPE_2__ {unsigned int css_queue; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

unsigned int FUNC_0(struct imgu_device *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_1[VAR_4].css_queue == VAR_3)
   break;

 return VAR_4;
}
