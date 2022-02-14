
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int error; } ;
struct TYPE_7__ {int index; struct vsp1_device* vsp1; } ;
struct TYPE_5__ {void* vflip; void* rotate; void* hflip; } ;
struct TYPE_6__ {TYPE_1__ ctrls; int lock; } ;
struct vsp1_rwpf {TYPE_4__ ctrls; TYPE_3__ entity; TYPE_2__ flip; } ;
struct vsp1_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,void**) ;
 void* FUNC_3 (TYPE_4__*,int *,int ,int ,int,int,int ) ;
 scalar_t__ FUNC_4 (struct vsp1_device*,int ) ;
 int FUNC_5 (struct vsp1_rwpf*,unsigned int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct vsp1_rwpf *VAR_6)
{
 struct vsp1_device *VAR_7 = VAR_6->entity.vsp1;
 unsigned int VAR_8;

 FUNC_1(&VAR_6->flip.lock);

 if (VAR_6->entity.index != 0) {

  VAR_8 = 0;
 } else if (FUNC_4(VAR_7, VAR_3)) {




  VAR_8 = 3;
 } else if (FUNC_4(VAR_7, VAR_4)) {




  VAR_8 = 1;
 } else {

  VAR_8 = 0;
 }

 FUNC_5(VAR_6, VAR_8);

 if (VAR_8 >= 1) {
  VAR_6->flip.ctrls.vflip =
   FUNC_3(&VAR_6->ctrls, &VAR_5,
       VAR_2, 0, 1, 1, 0);
 }

 if (VAR_8 == 3) {
  VAR_6->flip.ctrls.hflip =
   FUNC_3(&VAR_6->ctrls, &VAR_5,
       VAR_0, 0, 1, 1, 0);
  VAR_6->flip.ctrls.rotate =
   FUNC_3(&VAR_6->ctrls, &VAR_5,
       VAR_1, 0, 270, 90, 0);
  FUNC_2(3, &VAR_6->flip.ctrls.vflip);
 }

 if (VAR_6->ctrls.error) {
  FUNC_0(VAR_7->dev, "wpf%u: failed to initialize controls\n",
   VAR_6->entity.index);
  return VAR_6->ctrls.error;
 }

 return 0;
}
