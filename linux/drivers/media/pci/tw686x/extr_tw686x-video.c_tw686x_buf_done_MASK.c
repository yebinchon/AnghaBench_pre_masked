
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_buffer {int timestamp; } ;
struct vb2_v4l2_buffer {struct vb2_buffer vb2_buf; scalar_t__ sequence; int field; } ;
struct tw686x_video_channel {int pb; int sequence; TYPE_1__** curr_bufs; struct tw686x_dev* dev; struct tw686x_dma_desc* dma_descs; } ;
struct tw686x_dma_desc {int size; int virt; } ;
struct tw686x_dev {scalar_t__ dma_mode; TYPE_2__* dma_ops; } ;
struct TYPE_4__ {int field; } ;
struct TYPE_3__ {struct vb2_v4l2_buffer vb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct vb2_buffer*,int ) ;
 int FUNC_3 (struct vb2_buffer*,int ) ;

__attribute__((used)) static void FUNC_4(struct tw686x_video_channel *VAR_2,
       unsigned int VAR_3)
{
 struct tw686x_dma_desc *VAR_4 = &VAR_2->dma_descs[VAR_3];
 struct tw686x_dev *VAR_5 = VAR_2->dev;
 struct vb2_v4l2_buffer *VAR_6;
 struct vb2_buffer *VAR_7;

 if (VAR_2->curr_bufs[VAR_3]) {
  VAR_6 = &VAR_2->curr_bufs[VAR_3]->vb;

  VAR_6->field = VAR_5->dma_ops->field;
  VAR_6->sequence = VAR_2->sequence++;
  VAR_7 = &VAR_6->vb2_buf;

  if (VAR_5->dma_mode == VAR_0)
   FUNC_1(FUNC_3(VAR_7, 0), VAR_4->virt,
          VAR_4->size);
  VAR_7->timestamp = FUNC_0();
  FUNC_2(VAR_7, VAR_1);
 }

 VAR_2->pb = !VAR_3;
}
