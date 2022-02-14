
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct spi_device {TYPE_1__ dev; } ;
struct ca8210_platform_data {int extclockgpio; int extclockfreq; scalar_t__ extclockenable; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int *) ;

__attribute__((used)) static int FUNC_2(
 struct spi_device *VAR_1,
 struct ca8210_platform_data *VAR_2
)
{
 int VAR_3 = 0;

 if (!VAR_1->dev.of_node)
  return -VAR_0;

 VAR_2->extclockenable = FUNC_0(
  VAR_1->dev.of_node,
  "extclock-enable"
 );
 if (VAR_2->extclockenable) {
  VAR_3 = FUNC_1(
   VAR_1->dev.of_node,
   "extclock-freq",
   &VAR_2->extclockfreq
  );
  if (VAR_3 < 0)
   return VAR_3;

  VAR_3 = FUNC_1(
   VAR_1->dev.of_node,
   "extclock-gpio",
   &VAR_2->extclockgpio
  );
 }

 return VAR_3;
}
