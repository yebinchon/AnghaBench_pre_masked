
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vsp1_device {int dev; } ;
struct TYPE_9__ {int error; } ;
struct TYPE_7__ {TYPE_4__* ctrl_handler; } ;
struct TYPE_8__ {TYPE_1__ subdev; int vsp1; int type; int * ops; } ;
struct vsp1_clu {TYPE_4__ ctrls; TYPE_2__ entity; int pool; int lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct vsp1_clu* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*) ;
 struct vsp1_clu* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int *,int *) ;
 int FUNC_7 (int ,int,scalar_t__,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct vsp1_device*,TYPE_2__*,char*,int,int *,int ) ;

struct vsp1_clu *FUNC_10(struct vsp1_device *VAR_9)
{
 struct vsp1_clu *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_9->dev, sizeof(*VAR_10), VAR_2);
 if (VAR_10 == ((void*)0))
  return FUNC_0(-VAR_1);

 FUNC_3(&VAR_10->lock);

 VAR_10->entity.ops = &VAR_5;
 VAR_10->entity.type = VAR_4;

 VAR_11 = FUNC_9(VAR_9, &VAR_10->entity, "clu", 2, &VAR_7,
          VAR_3);
 if (VAR_11 < 0)
  return FUNC_0(VAR_11);







 VAR_10->pool = FUNC_7(VAR_10->entity.vsp1, 3, VAR_0 + 1,
          0);
 if (!VAR_10->pool)
  return FUNC_0(-VAR_1);


 FUNC_4(&VAR_10->ctrls, 2);
 FUNC_6(&VAR_10->ctrls, &VAR_8, ((void*)0));
 FUNC_6(&VAR_10->ctrls, &VAR_6, ((void*)0));

 VAR_10->entity.subdev.ctrl_handler = &VAR_10->ctrls;

 if (VAR_10->ctrls.error) {
  FUNC_1(VAR_9->dev, "clu: failed to initialize controls\n");
  VAR_11 = VAR_10->ctrls.error;
  FUNC_8(&VAR_10->entity);
  return FUNC_0(VAR_11);
 }

 FUNC_5(&VAR_10->ctrls);

 return VAR_10;
}
