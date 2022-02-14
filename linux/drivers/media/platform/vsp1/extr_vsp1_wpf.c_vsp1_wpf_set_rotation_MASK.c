
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vsp1_video {int lock; int queue; } ;
struct TYPE_4__ {int lock; int config; } ;
struct TYPE_3__ {int rotate; } ;
struct vsp1_rwpf {TYPE_2__ entity; TYPE_1__ flip; struct vsp1_video* video; } ;
struct v4l2_mbus_framefmt {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 struct v4l2_mbus_framefmt* FUNC_3 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct vsp1_rwpf *VAR_3, unsigned int VAR_4)
{
 struct vsp1_video *VAR_5 = VAR_3->video;
 struct v4l2_mbus_framefmt *VAR_6;
 struct v4l2_mbus_framefmt *VAR_7;
 bool VAR_8;
 int VAR_9 = 0;





 VAR_8 = VAR_4 == 90 || VAR_4 == 270;
 if (VAR_8 == VAR_3->flip.rotate)
  return 0;


 FUNC_0(&VAR_5->lock);

 if (FUNC_2(&VAR_5->queue)) {
  VAR_9 = -VAR_0;
  goto done;
 }

 VAR_6 = FUNC_3(&VAR_3->entity,
       VAR_3->entity.config,
       VAR_1);
 VAR_7 = FUNC_3(&VAR_3->entity,
         VAR_3->entity.config,
         VAR_2);

 FUNC_0(&VAR_3->entity.lock);

 if (VAR_8) {
  VAR_7->width = VAR_6->height;
  VAR_7->height = VAR_6->width;
 } else {
  VAR_7->width = VAR_6->width;
  VAR_7->height = VAR_6->height;
 }

 VAR_3->flip.rotate = VAR_8;

 FUNC_1(&VAR_3->entity.lock);

done:
 FUNC_1(&VAR_5->lock);
 return VAR_9;
}
