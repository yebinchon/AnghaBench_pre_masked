
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* planes; } ;
struct v4l2_buffer {scalar_t__ memory; int length; TYPE_3__ m; int type; } ;
struct s5p_mfc_ctx {scalar_t__ state; int vq_dst; int vq_src; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int mem_offset; } ;
struct TYPE_5__ {TYPE_1__ m; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct s5p_mfc_ctx* FUNC_0 (void*) ;
 int FUNC_1 (int,char*,scalar_t__,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_7, void *VAR_8,
         struct v4l2_buffer *VAR_9)
{
 struct s5p_mfc_ctx *VAR_10 = FUNC_0(VAR_8);
 int VAR_11;
 int VAR_12;

 if (VAR_9->memory != VAR_6) {
  FUNC_3("Only mmapped buffers can be used\n");
  return -VAR_1;
 }
 FUNC_1(2, "State: %d, buf->type: %d\n", VAR_10->state, VAR_9->type);
 if (VAR_10->state == VAR_2 &&
   VAR_9->type == VAR_5) {
  VAR_11 = FUNC_4(&VAR_10->vq_src, VAR_9);
 } else if (VAR_10->state == VAR_3 &&
   VAR_9->type == VAR_4) {
  VAR_11 = FUNC_4(&VAR_10->vq_dst, VAR_9);
  for (VAR_12 = 0; VAR_12 < VAR_9->length; VAR_12++)
   VAR_9->m.planes[VAR_12].m.mem_offset += VAR_0;
 } else {
  FUNC_3("vidioc_querybuf called in an inappropriate state\n");
  VAR_11 = -VAR_1;
 }
 FUNC_2();
 return VAR_11;
}
