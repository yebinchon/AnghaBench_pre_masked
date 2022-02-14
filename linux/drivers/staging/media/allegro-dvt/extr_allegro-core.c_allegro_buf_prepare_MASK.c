
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {scalar_t__ field; } ;
struct vb2_buffer {TYPE_1__* vb2_queue; } ;
struct allegro_dev {int v4l2_dev; } ;
struct allegro_channel {int mcu_channel_id; struct allegro_dev* dev; } ;
struct TYPE_2__ {int type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct allegro_channel*) ;
 struct vb2_v4l2_buffer* FUNC_2 (struct vb2_buffer*) ;
 int FUNC_3 (int *,char*,int ) ;
 struct allegro_channel* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct vb2_buffer *VAR_5)
{
 struct vb2_v4l2_buffer *VAR_6 = FUNC_2(VAR_5);
 struct allegro_channel *VAR_7 = FUNC_4(VAR_5->vb2_queue);
 struct allegro_dev *VAR_8 = VAR_7->dev;

 if (FUNC_1(VAR_7) == VAR_0 &&
     FUNC_0(VAR_5->vb2_queue->type))
  return -VAR_1;

 if (FUNC_0(VAR_5->vb2_queue->type)) {
  if (VAR_6->field == VAR_3)
   VAR_6->field = VAR_4;
  if (VAR_6->field != VAR_4) {
   FUNC_3(&VAR_8->v4l2_dev,
     "channel %d: unsupported field\n",
     VAR_7->mcu_channel_id);
   return -VAR_2;
  }
 }

 return 0;
}
