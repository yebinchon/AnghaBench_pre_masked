
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {scalar_t__ num_buffers; } ;
struct vb2_buffer {int dummy; } ;
struct v4l2_fh {int m2m_ctx; } ;
struct TYPE_6__ {TYPE_2__* planes; } ;
struct v4l2_buffer {scalar_t__ index; TYPE_3__ m; int type; } ;
struct mtk_jpeg_src_buf {int flags; } ;
struct mtk_jpeg_ctx {TYPE_1__* jpeg; } ;
struct file {struct v4l2_fh* private_data; } ;
struct TYPE_5__ {scalar_t__ bytesused; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct mtk_jpeg_ctx* FUNC_1 (void*) ;
 struct mtk_jpeg_src_buf* FUNC_2 (struct vb2_buffer*) ;
 struct vb2_queue* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct file*,int ,struct v4l2_buffer*) ;
 struct vb2_buffer* FUNC_5 (struct vb2_queue*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_4, void *VAR_5, struct v4l2_buffer *VAR_6)
{
 struct v4l2_fh *VAR_7 = VAR_4->private_data;
 struct mtk_jpeg_ctx *VAR_8 = FUNC_1(VAR_5);
 struct vb2_queue *VAR_9;
 struct vb2_buffer *VAR_10;
 struct mtk_jpeg_src_buf *VAR_11;

 if (VAR_6->type != VAR_3)
  goto end;

 VAR_9 = FUNC_3(VAR_7->m2m_ctx, VAR_6->type);
 if (VAR_6->index >= VAR_9->num_buffers) {
  FUNC_0(VAR_8->jpeg->dev, "buffer index out of range\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_5(VAR_9, VAR_6->index);
 VAR_11 = FUNC_2(VAR_10);
 VAR_11->flags = (VAR_6->m.planes[0].bytesused == 0) ?
  VAR_2 : VAR_1;
end:
 return FUNC_4(VAR_4, VAR_7->m2m_ctx, VAR_6);
}
