
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfe_device {int power_count; int power_lock; int id; TYPE_1__* camss; int clock; int nclocks; scalar_t__ was_streaming; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct vfe_device*) ;

__attribute__((used)) static void FUNC_7(struct vfe_device *VAR_0)
{
 FUNC_3(&VAR_0->power_lock);

 if (VAR_0->power_count == 0) {
  FUNC_2(VAR_0->camss->dev, "vfe power off on power_count == 0\n");
  goto exit;
 } else if (VAR_0->power_count == 1) {
  if (VAR_0->was_streaming) {
   VAR_0->was_streaming = 0;
   FUNC_6(VAR_0);
  }
  FUNC_0(VAR_0->nclocks, VAR_0->clock);
  FUNC_5(VAR_0->camss->dev);
  FUNC_1(VAR_0->camss, VAR_0->id);
 }

 VAR_0->power_count--;

exit:
 FUNC_4(&VAR_0->power_lock);
}
