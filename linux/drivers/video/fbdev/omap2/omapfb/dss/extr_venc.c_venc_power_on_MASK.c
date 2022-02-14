
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct omap_overlay_manager {int dummy; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_3__ {struct omap_overlay_manager* manager; } ;
struct TYPE_4__ {scalar_t__ type; int invert_polarity; int vdda_dac_reg; int timings; TYPE_1__ output; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct omap_overlay_manager*) ;
 int FUNC_1 (struct omap_overlay_manager*,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static int FUNC_12(struct omap_dss_device *VAR_3)
{
 struct omap_overlay_manager *VAR_4 = VAR_2.output.manager;
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_7();
 if (VAR_6)
  goto err0;

 FUNC_6();
 FUNC_10(FUNC_9(&VAR_2.timings));

 FUNC_3(VAR_2.type);
 FUNC_2(1);

 VAR_5 = 0;

 if (VAR_2.type == VAR_0)
  VAR_5 |= 1 << 1;
 else
  VAR_5 |= (1 << 0) | (1 << 2);

 if (VAR_2.invert_polarity == 0)
  VAR_5 |= 1 << 3;

 FUNC_11(VAR_1, VAR_5);

 FUNC_1(VAR_4, &VAR_2.timings);

 VAR_6 = FUNC_5(VAR_2.vdda_dac_reg);
 if (VAR_6)
  goto err1;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6)
  goto err2;

 return 0;

err2:
 FUNC_4(VAR_2.vdda_dac_reg);
err1:
 FUNC_11(VAR_1, 0);
 FUNC_2(0);

 FUNC_8();
err0:
 return VAR_6;
}
