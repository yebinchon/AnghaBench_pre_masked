
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int index; int type; int * ops; } ;
struct vsp1_rwpf {TYPE_1__ entity; int ctrls; int max_height; int max_width; } ;
struct vsp1_device {int dev; } ;


 int VAR_0 ;
 struct vsp1_rwpf* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 struct vsp1_rwpf* FUNC_2 (int ,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,char*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct vsp1_device*,TYPE_1__*,char*,int,int *,int ) ;
 int FUNC_7 (struct vsp1_rwpf*,int ) ;

struct vsp1_rwpf *FUNC_8(struct vsp1_device *VAR_8, unsigned int VAR_9)
{
 struct vsp1_rwpf *VAR_10;
 char VAR_11[6];
 int VAR_12;

 VAR_10 = FUNC_2(VAR_8->dev, sizeof(*VAR_10), VAR_1);
 if (VAR_10 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_10->max_width = VAR_4;
 VAR_10->max_height = VAR_3;

 VAR_10->entity.ops = &VAR_6;
 VAR_10->entity.type = VAR_5;
 VAR_10->entity.index = VAR_9;

 FUNC_3(VAR_11, "rpf.%u", VAR_9);
 VAR_12 = FUNC_6(VAR_8, &VAR_10->entity, VAR_11, 2, &VAR_7,
          VAR_2);
 if (VAR_12 < 0)
  return FUNC_0(VAR_12);


 VAR_12 = FUNC_7(VAR_10, 0);
 if (VAR_12 < 0) {
  FUNC_1(VAR_8->dev, "rpf%u: failed to initialize controls\n",
   VAR_9);
  goto error;
 }

 FUNC_4(&VAR_10->ctrls);

 return VAR_10;

error:
 FUNC_5(&VAR_10->entity);
 return FUNC_0(VAR_12);
}
