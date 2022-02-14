
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ctrl_handler; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;
struct TYPE_5__ {TYPE_3__ entity; } ;
struct vsp1_hgt {int ctrls; TYPE_2__ histo; } ;
struct vsp1_device {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct vsp1_hgt* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vsp1_hgt* FUNC_2 (int ,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct vsp1_device*,TYPE_2__*,int ,char*,int *,int ,int ,int ,int ) ;

struct vsp1_hgt *FUNC_8(struct vsp1_device *VAR_8)
{
 struct vsp1_hgt *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_8->dev, sizeof(*VAR_9), VAR_1);
 if (VAR_9 == ((void*)0))
  return FUNC_1(-VAR_0);


 FUNC_3(&VAR_9->ctrls, 1);
 FUNC_5(&VAR_9->ctrls, &VAR_6, ((void*)0));

 VAR_9->histo.entity.subdev.ctrl_handler = &VAR_9->ctrls;


 VAR_10 = FUNC_7(VAR_8, &VAR_9->histo, VAR_4, "hgt",
      &VAR_5, VAR_7,
      FUNC_0(VAR_7),
      VAR_2, VAR_3);
 if (VAR_10 < 0) {
  FUNC_6(&VAR_9->histo.entity);
  return FUNC_1(VAR_10);
 }

 FUNC_4(&VAR_9->ctrls);

 return VAR_9;
}
