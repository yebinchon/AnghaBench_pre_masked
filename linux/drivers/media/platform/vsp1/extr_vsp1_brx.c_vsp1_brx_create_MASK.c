
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vsp1_device {int dev; TYPE_1__* info; } ;
struct TYPE_8__ {TYPE_5__* ctrl_handler; } ;
struct TYPE_9__ {int type; TYPE_2__ subdev; int * ops; } ;
struct TYPE_10__ {int error; } ;
struct vsp1_brx {TYPE_3__ entity; TYPE_5__ ctrls; scalar_t__ bgcolor; int base; } ;
typedef enum vsp1_entity_type { ____Placeholder_vsp1_entity_type } vsp1_entity_type ;
struct TYPE_7__ {int num_bru_inputs; } ;


 int VAR_0 ;
 struct vsp1_brx* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*,char const*) ;
 struct vsp1_brx* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (TYPE_5__*,int *,int ,int ,int,int,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct vsp1_device*,TYPE_3__*,char const*,unsigned int,int *,int ) ;

struct vsp1_brx *FUNC_7(struct vsp1_device *VAR_10,
     enum vsp1_entity_type VAR_11)
{
 struct vsp1_brx *VAR_12;
 unsigned int VAR_13;
 const char *VAR_14;
 int VAR_15;

 VAR_12 = FUNC_2(VAR_10->dev, sizeof(*VAR_12), VAR_1);
 if (VAR_12 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_12->base = VAR_11 == VAR_6 ? VAR_5 : VAR_4;
 VAR_12->entity.ops = &VAR_8;
 VAR_12->entity.type = VAR_11;

 if (VAR_11 == VAR_6) {
  VAR_13 = VAR_10->info->num_bru_inputs + 1;
  VAR_14 = "bru";
 } else {
  VAR_13 = 3;
  VAR_14 = "brs";
 }

 VAR_15 = FUNC_6(VAR_10, &VAR_12->entity, VAR_14, VAR_13, &VAR_9,
          VAR_2);
 if (VAR_15 < 0)
  return FUNC_0(VAR_15);


 FUNC_3(&VAR_12->ctrls, 1);
 FUNC_4(&VAR_12->ctrls, &VAR_7, VAR_3,
     0, 0xffffff, 1, 0);

 VAR_12->bgcolor = 0;

 VAR_12->entity.subdev.ctrl_handler = &VAR_12->ctrls;

 if (VAR_12->ctrls.error) {
  FUNC_1(VAR_10->dev, "%s: failed to initialize controls\n", VAR_14);
  VAR_15 = VAR_12->ctrls.error;
  FUNC_5(&VAR_12->entity);
  return FUNC_0(VAR_15);
 }

 return VAR_12;
}
