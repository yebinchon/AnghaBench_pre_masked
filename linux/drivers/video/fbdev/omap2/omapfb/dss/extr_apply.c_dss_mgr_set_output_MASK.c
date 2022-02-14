
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager {int supported_outputs; struct omap_dss_device* output; int name; } ;
struct omap_dss_device {int id; struct omap_overlay_manager* manager; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct omap_overlay_manager *VAR_2,
  struct omap_dss_device *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_1);

 if (VAR_2->output) {
  FUNC_0("manager %s is already connected to an output\n",
   VAR_2->name);
  VAR_4 = -VAR_0;
  goto err;
 }

 if ((VAR_2->supported_outputs & VAR_3->id) == 0) {
  FUNC_0("output does not support manager %s\n",
   VAR_2->name);
  VAR_4 = -VAR_0;
  goto err;
 }

 VAR_3->manager = VAR_2;
 VAR_2->output = VAR_3;

 FUNC_2(&VAR_1);

 return 0;
err:
 FUNC_2(&VAR_1);
 return VAR_4;
}
