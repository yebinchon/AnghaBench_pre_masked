
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int error; } ;
struct TYPE_7__ {TYPE_4__* ctrl_handler; } ;
struct TYPE_8__ {TYPE_1__ subdev; int type; int * ops; } ;
struct vsp1_lut {TYPE_4__ ctrls; TYPE_2__ entity; int pool; int lock; } ;
struct vsp1_device {int dev; } ;


 int VAR_0 ;
 struct vsp1_lut* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 struct vsp1_lut* FUNC_2 (int ,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int *,int *) ;
 int FUNC_7 (struct vsp1_device*,int,int ,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct vsp1_device*,TYPE_2__*,char*,int,int *,int ) ;

struct vsp1_lut *FUNC_10(struct vsp1_device *VAR_8)
{
 struct vsp1_lut *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_8->dev, sizeof(*VAR_9), VAR_1);
 if (VAR_9 == ((void*)0))
  return FUNC_0(-VAR_0);

 FUNC_3(&VAR_9->lock);

 VAR_9->entity.ops = &VAR_5;
 VAR_9->entity.type = VAR_4;

 VAR_10 = FUNC_9(VAR_8, &VAR_9->entity, "lut", 2, &VAR_6,
          VAR_3);
 if (VAR_10 < 0)
  return FUNC_0(VAR_10);






 VAR_9->pool = FUNC_7(VAR_8, 3, VAR_2, 0);
 if (!VAR_9->pool)
  return FUNC_0(-VAR_0);


 FUNC_4(&VAR_9->ctrls, 1);
 FUNC_6(&VAR_9->ctrls, &VAR_7, ((void*)0));

 VAR_9->entity.subdev.ctrl_handler = &VAR_9->ctrls;

 if (VAR_9->ctrls.error) {
  FUNC_1(VAR_8->dev, "lut: failed to initialize controls\n");
  VAR_10 = VAR_9->ctrls.error;
  FUNC_8(&VAR_9->entity);
  return FUNC_0(VAR_10);
 }

 FUNC_5(&VAR_9->ctrls);

 return VAR_9;
}
