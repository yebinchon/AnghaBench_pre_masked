
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omap_overlay_manager {int * get_device; int * wait_for_vsync; int * wait_for_go; int * get_manager_info; int * set_manager_info; int * apply; int * unset_output; int * set_output; } ;
struct omap_overlay {int * get_device; int * wait_for_go; int * get_overlay_info; int * set_overlay_info; int * unset_manager; int * set_manager; int * disable; int * enable; int * is_enabled; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 () ;
 struct platform_device* FUNC_6 () ;
 int FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_10 (struct platform_device*) ;
 int FUNC_11 (struct platform_device*) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 struct omap_overlay* FUNC_17 (int) ;
 struct omap_overlay_manager* FUNC_18 (int) ;
 int VAR_19 ;

int FUNC_19(void)
{
 struct platform_device *VAR_20 = FUNC_6();
 int VAR_21, VAR_22;

 FUNC_13(&VAR_1);

 if (VAR_2++ > 0)
  goto out;

 FUNC_0();

 FUNC_7(VAR_20);
 FUNC_8(VAR_20);

 for (VAR_21 = 0; VAR_21 < FUNC_15(); VAR_21++) {
  struct omap_overlay_manager *VAR_23;

  VAR_23 = FUNC_18(VAR_21);

  VAR_23->set_output = &VAR_6;
  VAR_23->unset_output = &VAR_7;
  VAR_23->apply = &VAR_19;
  VAR_23->set_manager_info = &VAR_5;
  VAR_23->get_manager_info = &VAR_4;
  VAR_23->wait_for_go = &VAR_8;
  VAR_23->wait_for_vsync = &VAR_10;
  VAR_23->get_device = &VAR_3;
 }

 for (VAR_21 = 0; VAR_21 < FUNC_16(); VAR_21++) {
  struct omap_overlay *VAR_24 = FUNC_17(VAR_21);

  VAR_24->is_enabled = &VAR_15;
  VAR_24->enable = &VAR_12;
  VAR_24->disable = &VAR_11;
  VAR_24->set_manager = &VAR_17;
  VAR_24->unset_manager = &VAR_18;
  VAR_24->set_overlay_info = &VAR_16;
  VAR_24->get_overlay_info = &VAR_14;
  VAR_24->wait_for_go = &VAR_9;
  VAR_24->get_device = &VAR_13;
 }

 VAR_22 = FUNC_9(&VAR_0);
 if (VAR_22)
  goto err_mgr_ops;

 VAR_22 = FUNC_3(VAR_20);
 if (VAR_22)
  goto err_disp_sysfs;

 FUNC_1();

 VAR_22 = FUNC_5();
 if (VAR_22)
  goto err_init_irq;

 FUNC_2();

out:
 FUNC_14(&VAR_1);

 return 0;

err_init_irq:
 FUNC_2();
 FUNC_4(VAR_20);

err_disp_sysfs:
 FUNC_12();

err_mgr_ops:
 FUNC_10(VAR_20);
 FUNC_11(VAR_20);

 VAR_2--;

 FUNC_14(&VAR_1);

 return VAR_22;
}
