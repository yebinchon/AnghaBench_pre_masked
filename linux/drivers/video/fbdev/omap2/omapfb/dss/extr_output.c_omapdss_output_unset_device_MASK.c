
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {TYPE_1__* dst; } ;
struct TYPE_2__ {scalar_t__ state; int * src; int name; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

int FUNC_3(struct omap_dss_device *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_2);

 if (!VAR_3->dst) {
  FUNC_0("output doesn't have a device connected to it\n");
  VAR_4 = -VAR_0;
  goto err;
 }

 if (VAR_3->dst->state != VAR_1) {
  FUNC_0("device %s is not disabled, cannot unset device\n",
    VAR_3->dst->name);
  VAR_4 = -VAR_0;
  goto err;
 }

 VAR_3->dst->src = ((void*)0);
 VAR_3->dst = ((void*)0);

 FUNC_2(&VAR_2);

 return 0;
err:
 FUNC_2(&VAR_2);

 return VAR_4;
}
