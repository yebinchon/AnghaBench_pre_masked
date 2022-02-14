
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* planes; } ;
struct v4l2_buffer {scalar_t__ memory; scalar_t__ type; TYPE_3__ m; } ;
struct s5p_mfc_ctx {scalar_t__ state; int vq_src; int vq_dst; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int mem_offset; } ;
struct TYPE_5__ {TYPE_1__ m; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct s5p_mfc_ctx* FUNC_0 (void*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7, void *VAR_8,
         struct v4l2_buffer *VAR_9)
{
 struct s5p_mfc_ctx *VAR_10 = FUNC_0(VAR_8);
 int VAR_11 = 0;


 if ((VAR_9->memory != VAR_5) &&
  (VAR_9->memory != VAR_6))
  return -VAR_1;
 if (VAR_9->type == VAR_3) {
  if (VAR_10->state != VAR_2) {
   FUNC_1("invalid context state: %d\n", VAR_10->state);
   return -VAR_1;
  }
  VAR_11 = FUNC_2(&VAR_10->vq_dst, VAR_9);
  if (VAR_11 != 0) {
   FUNC_1("error in vb2_querybuf() for E(D)\n");
   return VAR_11;
  }
  VAR_9->m.planes[0].m.mem_offset += VAR_0;
 } else if (VAR_9->type == VAR_4) {
  VAR_11 = FUNC_2(&VAR_10->vq_src, VAR_9);
  if (VAR_11 != 0) {
   FUNC_1("error in vb2_querybuf() for E(S)\n");
   return VAR_11;
  }
 } else {
  FUNC_1("invalid buf type\n");
  return -VAR_1;
 }
 return VAR_11;
}
