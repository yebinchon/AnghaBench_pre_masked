
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {scalar_t__ output_type; scalar_t__ type; struct omap_dss_device* src; struct omap_dss_device* dst; int name; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

int FUNC_3(struct omap_dss_device *VAR_2,
  struct omap_dss_device *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_1);

 if (VAR_2->dst) {
  FUNC_0("output already has device %s connected to it\n",
   VAR_2->dst->name);
  VAR_4 = -VAR_0;
  goto err;
 }

 if (VAR_2->output_type != VAR_3->type) {
  FUNC_0("output type and display type don't match\n");
  VAR_4 = -VAR_0;
  goto err;
 }

 VAR_2->dst = VAR_3;
 VAR_3->src = VAR_2;

 FUNC_2(&VAR_1);

 return 0;
err:
 FUNC_2(&VAR_1);

 return VAR_4;
}
