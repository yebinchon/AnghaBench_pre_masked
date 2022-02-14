
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media_entity {struct media_pad* pads; } ;
struct video_device {struct media_entity entity; } ;
struct vb2_queue {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct media_pad {int flags; struct media_entity* entity; } ;
struct camss_video {TYPE_1__* ops; struct video_device vdev; } ;
struct TYPE_2__ {int (* flush_buffers ) (struct camss_video*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct media_entity*) ;
 struct media_pad* FUNC_1 (struct media_pad*) ;
 struct v4l2_subdev* FUNC_2 (struct media_entity*) ;
 int FUNC_3 (struct media_entity*) ;
 int VAR_2 ;
 int FUNC_4 (struct camss_video*,int ) ;
 int FUNC_5 (struct v4l2_subdev*,struct camss_video*,int ,int ) ;
 struct camss_video* FUNC_6 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_7(struct vb2_queue *VAR_3)
{
 struct camss_video *VAR_4 = FUNC_6(VAR_3);
 struct video_device *VAR_5 = &VAR_4->vdev;
 struct media_entity *VAR_6;
 struct media_pad *VAR_7;
 struct v4l2_subdev *VAR_8;

 VAR_6 = &VAR_5->entity;
 while (1) {
  VAR_7 = &VAR_6->pads[0];
  if (!(VAR_7->flags & VAR_0))
   break;

  VAR_7 = FUNC_1(VAR_7);
  if (!VAR_7 || !FUNC_0(VAR_7->entity))
   break;

  VAR_6 = VAR_7->entity;
  VAR_8 = FUNC_2(VAR_6);

  FUNC_5(VAR_8, VAR_4, VAR_2, 0);
 }

 FUNC_3(&VAR_5->entity);

 VAR_4->ops->flush_buffers(VAR_4, VAR_1);
}
