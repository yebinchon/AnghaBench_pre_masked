
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {scalar_t__ num_buffers; } ;
struct vb2_buffer {int dummy; } ;
struct v4l2_buffer {scalar_t__ index; int bytesused; int type; } ;
struct hva_stream {int bytesused; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct hva_ctx {TYPE_1__ fh; int name; } ;
struct file {int private_data; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device* FUNC_0 (struct hva_ctx*) ;
 int FUNC_1 (struct device*,char*,int ,scalar_t__,scalar_t__) ;
 struct hva_ctx* FUNC_2 (int ) ;
 struct hva_stream* FUNC_3 (int ) ;
 int FUNC_4 (struct vb2_buffer*) ;
 struct vb2_queue* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct file*,int ,struct v4l2_buffer*) ;
 struct vb2_buffer* FUNC_7 (struct vb2_queue*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_2, void *VAR_3, struct v4l2_buffer *VAR_4)
{
 struct hva_ctx *VAR_5 = FUNC_2(VAR_2->private_data);
 struct device *VAR_6 = FUNC_0(VAR_5);

 if (VAR_4->type == VAR_1) {







  struct vb2_queue *VAR_7;
  struct hva_stream *VAR_8;
  struct vb2_buffer *VAR_9;

  VAR_7 = FUNC_5(VAR_5->fh.m2m_ctx, VAR_4->type);

  if (VAR_4->index >= VAR_7->num_buffers) {
   FUNC_1(VAR_6, "%s buffer index %d out of range (%d)\n",
    VAR_5->name, VAR_4->index, VAR_7->num_buffers);
   return -VAR_0;
  }

  VAR_9 = FUNC_7(VAR_7, VAR_4->index);
  VAR_8 = FUNC_3(FUNC_4(VAR_9));
  VAR_8->bytesused = VAR_4->bytesused;
 }

 return FUNC_6(VAR_2, VAR_5->fh.m2m_ctx, VAR_4);
}
