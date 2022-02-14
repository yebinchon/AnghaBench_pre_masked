
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_3__ {int freq; } ;
struct TYPE_4__ {TYPE_1__ clock; } ;
struct cc770_priv {int cpu_interface; int bus_config; int clkout; TYPE_2__ can; } ;
struct cc770_platform_data {int osc_freq; int cir; int bcr; int cor; } ;


 int VAR_0 ;
 struct cc770_platform_data* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_1,
       struct cc770_priv *VAR_2)
{

 struct cc770_platform_data *VAR_3 = FUNC_0(&VAR_1->dev);

 VAR_2->can.clock.freq = VAR_3->osc_freq;
 if (VAR_2->cpu_interface & VAR_0)
  VAR_2->can.clock.freq /= 2;
 VAR_2->clkout = VAR_3->cor;
 VAR_2->bus_config = VAR_3->bcr;
 VAR_2->cpu_interface = VAR_3->cir;

 return 0;
}
