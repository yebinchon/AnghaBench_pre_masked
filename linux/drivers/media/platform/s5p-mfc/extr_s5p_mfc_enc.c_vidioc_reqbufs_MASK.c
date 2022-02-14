
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_requestbuffers {scalar_t__ memory; scalar_t__ type; scalar_t__ count; } ;
struct s5p_mfc_dev {int mfc_ops; } ;
struct s5p_mfc_ctx {scalar_t__ capture_state; scalar_t__ output_state; scalar_t__ pb_count; int vq_src; int vq_dst; TYPE_1__* dev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int mfc_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct s5p_mfc_dev*) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct s5p_mfc_ctx* FUNC_1 (void*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char*,...) ;
 int VAR_9 ;
 int FUNC_4 (int ,int ,struct s5p_mfc_ctx*) ;
 int FUNC_5 (int *,struct v4l2_requestbuffers*) ;
 struct s5p_mfc_dev* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_10, void *VAR_11,
       struct v4l2_requestbuffers *VAR_12)
{
 struct s5p_mfc_dev *VAR_13 = FUNC_6(VAR_10);
 struct s5p_mfc_ctx *VAR_14 = FUNC_1(VAR_11);
 int VAR_15 = 0;


 if ((VAR_12->memory != VAR_6) &&
  (VAR_12->memory != VAR_7))
  return -VAR_0;
 if (VAR_12->type == VAR_4) {
  if (VAR_12->count == 0) {
   FUNC_2(2, "Freeing buffers\n");
   VAR_15 = FUNC_5(&VAR_14->vq_dst, VAR_12);
   FUNC_4(VAR_13->mfc_ops, VAR_9,
     VAR_14);
   VAR_14->capture_state = VAR_3;
   return VAR_15;
  }
  if (VAR_14->capture_state != VAR_3) {
   FUNC_3("invalid capture state: %d\n",
       VAR_14->capture_state);
   return -VAR_0;
  }
  VAR_15 = FUNC_5(&VAR_14->vq_dst, VAR_12);
  if (VAR_15 != 0) {
   FUNC_3("error in vb2_reqbufs() for E(D)\n");
   return VAR_15;
  }
  VAR_14->capture_state = VAR_2;

  VAR_15 = FUNC_4(VAR_14->dev->mfc_ops,
    VAR_8, VAR_14);
  if (VAR_15) {
   FUNC_3("Failed to allocate encoding buffers\n");
   VAR_12->count = 0;
   VAR_15 = FUNC_5(&VAR_14->vq_dst, VAR_12);
   return -VAR_1;
  }
 } else if (VAR_12->type == VAR_5) {
  if (VAR_12->count == 0) {
   FUNC_2(2, "Freeing buffers\n");
   VAR_15 = FUNC_5(&VAR_14->vq_src, VAR_12);
   FUNC_4(VAR_13->mfc_ops, VAR_9,
     VAR_14);
   VAR_14->output_state = VAR_3;
   return VAR_15;
  }
  if (VAR_14->output_state != VAR_3) {
   FUNC_3("invalid output state: %d\n",
       VAR_14->output_state);
   return -VAR_0;
  }

  if (FUNC_0(VAR_13)) {

   if (VAR_14->pb_count &&
    (VAR_12->count < VAR_14->pb_count)) {
    VAR_12->count = VAR_14->pb_count;
    FUNC_2(2, "Minimum %d output buffers needed\n",
      VAR_14->pb_count);
   } else {
    VAR_14->pb_count = VAR_12->count;
   }
  }

  VAR_15 = FUNC_5(&VAR_14->vq_src, VAR_12);
  if (VAR_15 != 0) {
   FUNC_3("error in vb2_reqbufs() for E(S)\n");
   return VAR_15;
  }
  VAR_14->output_state = VAR_2;
 } else {
  FUNC_3("invalid buf type\n");
  return -VAR_0;
 }
 return VAR_15;
}
