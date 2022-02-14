
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxafb_info {scalar_t__ state; unsigned long hsync_time; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct pxafb_info* FUNC_0 (struct device*) ;

unsigned long FUNC_1(struct device *VAR_1)
{
 struct pxafb_info *VAR_2 = FUNC_0(VAR_1);


 if (!VAR_2 || (VAR_2->state != VAR_0))
  return 0;

 return VAR_2->hsync_time;
}
