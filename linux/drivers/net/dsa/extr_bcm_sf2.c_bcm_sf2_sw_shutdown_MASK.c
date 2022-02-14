
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_3__ {int num_gphy; } ;
struct bcm_sf2_priv {TYPE_2__* dev; TYPE_1__ hw_params; } ;
struct TYPE_4__ {int ds; } ;


 int FUNC_0 (int ,int) ;
 struct bcm_sf2_priv* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_0)
{
 struct bcm_sf2_priv *VAR_1 = FUNC_1(VAR_0);







 if (VAR_1->hw_params.num_gphy == 1)
  FUNC_0(VAR_1->dev->ds, 1);
}
