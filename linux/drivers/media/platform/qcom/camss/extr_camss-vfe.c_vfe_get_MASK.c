
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vfe_device {scalar_t__ power_count; int power_lock; int id; TYPE_1__* camss; int clock; int nclocks; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct vfe_device*) ;
 int FUNC_9 (struct vfe_device*) ;
 int FUNC_10 (struct vfe_device*) ;
 int FUNC_11 (struct vfe_device*) ;
 int FUNC_12 (struct vfe_device*) ;

__attribute__((used)) static int FUNC_13(struct vfe_device *VAR_0)
{
 int VAR_1;

 FUNC_4(&VAR_0->power_lock);

 if (VAR_0->power_count == 0) {
  VAR_1 = FUNC_3(VAR_0->camss, VAR_0->id);
  if (VAR_1 < 0)
   goto error_pm_domain;

  VAR_1 = FUNC_6(VAR_0->camss->dev);
  if (VAR_1 < 0)
   goto error_pm_runtime_get;

  VAR_1 = FUNC_12(VAR_0);
  if (VAR_1 < 0)
   goto error_clocks;

  VAR_1 = FUNC_1(VAR_0->nclocks, VAR_0->clock,
       VAR_0->camss->dev);
  if (VAR_1 < 0)
   goto error_clocks;

  VAR_1 = FUNC_10(VAR_0);
  if (VAR_1 < 0)
   goto error_reset;

  FUNC_11(VAR_0);

  FUNC_9(VAR_0);
 } else {
  VAR_1 = FUNC_8(VAR_0);
  if (VAR_1 < 0)
   goto error_clocks;
 }
 VAR_0->power_count++;

 FUNC_5(&VAR_0->power_lock);

 return 0;

error_reset:
 FUNC_0(VAR_0->nclocks, VAR_0->clock);

error_clocks:
 FUNC_7(VAR_0->camss->dev);

error_pm_runtime_get:
 FUNC_2(VAR_0->camss, VAR_0->id);

error_pm_domain:
 FUNC_5(&VAR_0->power_lock);

 return VAR_1;
}
