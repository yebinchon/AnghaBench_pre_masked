
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int index; int type; int * ops; } ;
struct vsp1_rwpf {TYPE_2__ entity; int ctrls; int dlm; int max_height; int max_width; } ;
struct vsp1_device {int dev; TYPE_1__* info; } ;
struct TYPE_4__ {int gen; } ;


 int VAR_0 ;
 struct vsp1_rwpf* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 struct vsp1_rwpf* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (char*,char*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vsp1_device*,unsigned int,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct vsp1_device*,TYPE_2__*,char*,int,int *,int ) ;
 int VAR_8 ;
 int FUNC_8 (struct vsp1_rwpf*) ;
 int VAR_9 ;

struct vsp1_rwpf *FUNC_9(struct vsp1_device *VAR_10, unsigned int VAR_11)
{
 struct vsp1_rwpf *VAR_12;
 char VAR_13[6];
 int VAR_14;

 VAR_12 = FUNC_2(VAR_10->dev, sizeof(*VAR_12), VAR_1);
 if (VAR_12 == ((void*)0))
  return FUNC_0(-VAR_0);

 if (VAR_10->info->gen == 2) {
  VAR_12->max_width = VAR_5;
  VAR_12->max_height = VAR_4;
 } else {
  VAR_12->max_width = VAR_7;
  VAR_12->max_height = VAR_6;
 }

 VAR_12->entity.ops = &VAR_8;
 VAR_12->entity.type = VAR_3;
 VAR_12->entity.index = VAR_11;

 FUNC_3(VAR_13, "wpf.%u", VAR_11);
 VAR_14 = FUNC_7(VAR_10, &VAR_12->entity, VAR_13, 2, &VAR_9,
          VAR_2);
 if (VAR_14 < 0)
  return FUNC_0(VAR_14);


 VAR_12->dlm = FUNC_5(VAR_10, VAR_11, 64);
 if (!VAR_12->dlm) {
  VAR_14 = -VAR_0;
  goto error;
 }


 VAR_14 = FUNC_8(VAR_12);
 if (VAR_14 < 0) {
  FUNC_1(VAR_10->dev, "wpf%u: failed to initialize controls\n",
   VAR_11);
  goto error;
 }

 FUNC_4(&VAR_12->ctrls);

 return VAR_12;

error:
 FUNC_6(&VAR_12->entity);
 return FUNC_0(VAR_14);
}
