
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* ctrl_handler; } ;
struct TYPE_7__ {TYPE_1__ subdev; int type; int * ops; } ;
struct TYPE_8__ {int error; } ;
struct vsp1_sru {int intensity; TYPE_2__ entity; TYPE_4__ ctrls; } ;
struct vsp1_device {int dev; } ;


 int VAR_0 ;
 struct vsp1_sru* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 struct vsp1_sru* FUNC_2 (int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,int *,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct vsp1_device*,TYPE_2__*,char*,int,int *,int ) ;

struct vsp1_sru *FUNC_7(struct vsp1_device *VAR_7)
{
 struct vsp1_sru *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_8->entity.ops = &VAR_4;
 VAR_8->entity.type = VAR_3;

 VAR_9 = FUNC_6(VAR_7, &VAR_8->entity, "sru", 2, &VAR_6,
          VAR_2);
 if (VAR_9 < 0)
  return FUNC_0(VAR_9);


 FUNC_3(&VAR_8->ctrls, 1);
 FUNC_4(&VAR_8->ctrls, &VAR_5, ((void*)0));

 VAR_8->intensity = 1;

 VAR_8->entity.subdev.ctrl_handler = &VAR_8->ctrls;

 if (VAR_8->ctrls.error) {
  FUNC_1(VAR_7->dev, "sru: failed to initialize controls\n");
  VAR_9 = VAR_8->ctrls.error;
  FUNC_5(&VAR_8->entity);
  return FUNC_0(VAR_9);
 }

 return VAR_8;
}
