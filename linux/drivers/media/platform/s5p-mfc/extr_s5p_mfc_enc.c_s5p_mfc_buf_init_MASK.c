
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {scalar_t__ type; int drv_priv; } ;
struct vb2_buffer {unsigned int index; struct vb2_queue* vb2_queue; } ;
struct s5p_mfc_ctx {int src_bufs_cnt; TYPE_5__* src_bufs; int src_fmt; int dst_bufs_cnt; TYPE_2__* dst_bufs; int dst_fmt; } ;
struct TYPE_8__ {void* chroma; void* luma; } ;
struct TYPE_9__ {TYPE_3__ raw; } ;
struct TYPE_10__ {TYPE_4__ cookie; struct vb2_v4l2_buffer* b; } ;
struct TYPE_6__ {void* stream; } ;
struct TYPE_7__ {TYPE_1__ cookie; struct vb2_v4l2_buffer* b; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct vb2_buffer*) ;
 struct s5p_mfc_ctx* FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 struct vb2_v4l2_buffer* FUNC_3 (struct vb2_buffer*) ;
 void* FUNC_4 (struct vb2_buffer*,int) ;

__attribute__((used)) static int FUNC_5(struct vb2_buffer *VAR_3)
{
 struct vb2_v4l2_buffer *VAR_4 = FUNC_3(VAR_3);
 struct vb2_queue *VAR_5 = VAR_3->vb2_queue;
 struct s5p_mfc_ctx *VAR_6 = FUNC_1(VAR_5->drv_priv);
 unsigned int VAR_7;
 int VAR_8;

 if (VAR_5->type == VAR_1) {
  VAR_8 = FUNC_0(VAR_6->dst_fmt, VAR_3);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_7 = VAR_3->index;
  VAR_6->dst_bufs[VAR_7].b = VAR_4;
  VAR_6->dst_bufs[VAR_7].cookie.stream =
     FUNC_4(VAR_3, 0);
  VAR_6->dst_bufs_cnt++;
 } else if (VAR_5->type == VAR_2) {
  VAR_8 = FUNC_0(VAR_6->src_fmt, VAR_3);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_7 = VAR_3->index;
  VAR_6->src_bufs[VAR_7].b = VAR_4;
  VAR_6->src_bufs[VAR_7].cookie.raw.luma =
     FUNC_4(VAR_3, 0);
  VAR_6->src_bufs[VAR_7].cookie.raw.chroma =
     FUNC_4(VAR_3, 1);
  VAR_6->src_bufs_cnt++;
 } else {
  FUNC_2("invalid queue type: %d\n", VAR_5->type);
  return -VAR_0;
 }
 return 0;
}
