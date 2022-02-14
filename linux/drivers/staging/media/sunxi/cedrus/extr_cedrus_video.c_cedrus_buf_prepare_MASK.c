
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int type; } ;
struct vb2_buffer {struct vb2_queue* vb2_queue; } ;
struct v4l2_pix_format {scalar_t__ sizeimage; } ;
struct cedrus_ctx {struct v4l2_pix_format dst_fmt; struct v4l2_pix_format src_fmt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct cedrus_ctx* FUNC_1 (struct vb2_queue*) ;
 scalar_t__ FUNC_2 (struct vb2_buffer*,int ) ;
 int FUNC_3 (struct vb2_buffer*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct vb2_buffer *VAR_1)
{
 struct vb2_queue *VAR_2 = VAR_1->vb2_queue;
 struct cedrus_ctx *VAR_3 = FUNC_1(VAR_2);
 struct v4l2_pix_format *VAR_4;

 if (FUNC_0(VAR_2->type))
  VAR_4 = &VAR_3->src_fmt;
 else
  VAR_4 = &VAR_3->dst_fmt;

 if (FUNC_2(VAR_1, 0) < VAR_4->sizeimage)
  return -VAR_0;

 FUNC_3(VAR_1, 0, VAR_4->sizeimage);

 return 0;
}
