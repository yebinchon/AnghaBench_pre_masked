
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct bcm_sf2_priv {TYPE_1__* dev; scalar_t__ wol_ports_mask; } ;
struct TYPE_2__ {int ds; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bcm_sf2_priv*) ;
 int FUNC_2 (struct bcm_sf2_priv*) ;
 int FUNC_3 (int ) ;
 struct bcm_sf2_priv* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct bcm_sf2_priv *VAR_1 = FUNC_4(VAR_0);

 VAR_1->wol_ports_mask = 0;

 FUNC_1(VAR_1);
 FUNC_3(VAR_1->dev->ds);
 FUNC_0(VAR_1->dev->ds);
 FUNC_2(VAR_1);

 return 0;
}
