
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
struct camss_video {TYPE_1__* ops; int pipe; struct video_device vdev; } ;
struct TYPE_2__ {int (* flush_buffers ) (struct camss_video*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct media_entity*) ;
 struct media_pad* FUNC_1 (struct media_pad*) ;
 struct v4l2_subdev* FUNC_2 (struct media_entity*) ;
 int FUNC_3 (struct media_entity*,int *) ;
 int FUNC_4 (struct media_entity*) ;
 int VAR_3 ;
 int FUNC_5 (struct camss_video*,int ) ;
 int FUNC_6 (struct v4l2_subdev*,struct camss_video*,int ,int) ;
 struct camss_video* FUNC_7 (struct vb2_queue*) ;
 int FUNC_8 (struct camss_video*) ;

__attribute__((used)) static int FUNC_9(struct vb2_queue *VAR_4, unsigned int VAR_5)
{
 struct camss_video *VAR_6 = FUNC_7(VAR_4);
 struct video_device *VAR_7 = &VAR_6->vdev;
 struct media_entity *VAR_8;
 struct media_pad *VAR_9;
 struct v4l2_subdev *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(&VAR_7->entity, &VAR_6->pipe);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_8(VAR_6);
 if (VAR_11 < 0)
  goto error;

 VAR_8 = &VAR_7->entity;
 while (1) {
  VAR_9 = &VAR_8->pads[0];
  if (!(VAR_9->flags & VAR_1))
   break;

  VAR_9 = FUNC_1(VAR_9);
  if (!VAR_9 || !FUNC_0(VAR_9->entity))
   break;

  VAR_8 = VAR_9->entity;
  VAR_10 = FUNC_2(VAR_8);

  VAR_11 = FUNC_6(VAR_10, VAR_6, VAR_3, 1);
  if (VAR_11 < 0 && VAR_11 != -VAR_0)
   goto error;
 }

 return 0;

error:
 FUNC_4(&VAR_7->entity);

 VAR_6->ops->flush_buffers(VAR_6, VAR_2);

 return VAR_11;
}
