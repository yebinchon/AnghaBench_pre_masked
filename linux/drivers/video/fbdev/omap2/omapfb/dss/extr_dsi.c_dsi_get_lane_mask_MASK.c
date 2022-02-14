
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct dsi_data {int num_lanes_supported; TYPE_1__* lanes; } ;
struct TYPE_2__ {scalar_t__ function; } ;


 scalar_t__ VAR_0 ;
 struct dsi_data* FUNC_0 (struct platform_device*) ;

__attribute__((used)) static unsigned FUNC_1(struct platform_device *VAR_1)
{
 struct dsi_data *VAR_2 = FUNC_0(VAR_1);
 unsigned VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_lanes_supported; ++VAR_4) {
  if (VAR_2->lanes[VAR_4].function != VAR_0)
   VAR_3 |= 1 << VAR_4;
 }

 return VAR_3;
}
