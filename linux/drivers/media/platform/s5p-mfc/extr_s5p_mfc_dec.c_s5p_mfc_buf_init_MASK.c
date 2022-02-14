
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {scalar_t__ type; int drv_priv; } ;
struct vb2_buffer {unsigned int index; struct vb2_queue* vb2_queue; } ;
struct s5p_mfc_ctx {scalar_t__ capture_state; scalar_t__ luma_size; scalar_t__ chroma_size; scalar_t__ dec_src_buf_size; int src_bufs_cnt; TYPE_6__* src_bufs; int dst_bufs_cnt; TYPE_4__* dst_bufs; TYPE_1__* dst_fmt; } ;
struct TYPE_11__ {void* stream; } ;
struct TYPE_12__ {TYPE_5__ cookie; struct vb2_v4l2_buffer* b; } ;
struct TYPE_8__ {void* chroma; void* luma; } ;
struct TYPE_9__ {TYPE_2__ raw; } ;
struct TYPE_10__ {TYPE_3__ cookie; struct vb2_v4l2_buffer* b; } ;
struct TYPE_7__ {unsigned int num_planes; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct s5p_mfc_ctx* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 struct vb2_v4l2_buffer* FUNC_4 (struct vb2_buffer*) ;
 void* FUNC_5 (struct vb2_buffer*,int) ;
 scalar_t__ FUNC_6 (struct vb2_buffer*,int) ;

__attribute__((used)) static int FUNC_7(struct vb2_buffer *VAR_4)
{
 struct vb2_v4l2_buffer *VAR_5 = FUNC_4(VAR_4);
 struct vb2_queue *VAR_6 = VAR_4->vb2_queue;
 struct s5p_mfc_ctx *VAR_7 = FUNC_2(VAR_6->drv_priv);
 unsigned int VAR_8;

 if (VAR_6->type == VAR_2) {
  if (VAR_7->capture_state == VAR_1)
   return 0;
  for (VAR_8 = 0; VAR_8 < VAR_7->dst_fmt->num_planes; VAR_8++) {
   if (FUNC_1(FUNC_0(
     FUNC_5(VAR_4, VAR_8)))) {
    FUNC_3("Plane mem not allocated\n");
    return -VAR_0;
   }
  }
  if (FUNC_6(VAR_4, 0) < VAR_7->luma_size ||
   FUNC_6(VAR_4, 1) < VAR_7->chroma_size) {
   FUNC_3("Plane buffer (CAPTURE) is too small\n");
   return -VAR_0;
  }
  VAR_8 = VAR_4->index;
  VAR_7->dst_bufs[VAR_8].b = VAR_5;
  VAR_7->dst_bufs[VAR_8].cookie.raw.luma =
     FUNC_5(VAR_4, 0);
  VAR_7->dst_bufs[VAR_8].cookie.raw.chroma =
     FUNC_5(VAR_4, 1);
  VAR_7->dst_bufs_cnt++;
 } else if (VAR_6->type == VAR_3) {
  if (FUNC_1(FUNC_0(
     FUNC_5(VAR_4, 0)))) {
   FUNC_3("Plane memory not allocated\n");
   return -VAR_0;
  }
  if (FUNC_6(VAR_4, 0) < VAR_7->dec_src_buf_size) {
   FUNC_3("Plane buffer (OUTPUT) is too small\n");
   return -VAR_0;
  }

  VAR_8 = VAR_4->index;
  VAR_7->src_bufs[VAR_8].b = VAR_5;
  VAR_7->src_bufs[VAR_8].cookie.stream =
     FUNC_5(VAR_4, 0);
  VAR_7->src_bufs_cnt++;
 } else {
  FUNC_3("s5p_mfc_buf_init: unknown queue type\n");
  return -VAR_0;
 }
 return 0;
}
