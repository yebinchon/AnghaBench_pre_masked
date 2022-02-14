
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {scalar_t__ count; } ;
struct s5p_mfc_dev {scalar_t__ dst_bufs_cnt; scalar_t__ capture_state; scalar_t__ total_dpb_count; int mfc_ops; int vq_dst; } ;
struct s5p_mfc_ctx {scalar_t__ dst_bufs_cnt; scalar_t__ capture_state; scalar_t__ total_dpb_count; int mfc_ops; int vq_dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct s5p_mfc_dev*) ;
 int FUNC_6 (int ,int ,struct s5p_mfc_dev*) ;
 int FUNC_7 (struct s5p_mfc_dev*,int ,int ) ;
 int FUNC_8 (struct s5p_mfc_dev*) ;
 int VAR_8 ;
 int FUNC_9 (int *,struct v4l2_requestbuffers*) ;

__attribute__((used)) static int FUNC_10(struct s5p_mfc_dev *VAR_9, struct s5p_mfc_ctx *VAR_10,
    struct v4l2_requestbuffers *VAR_11)
{
 int VAR_12 = 0;

 FUNC_4();

 if (VAR_11->count == 0) {
  FUNC_1(2, "Freeing buffers\n");
  VAR_12 = FUNC_9(&VAR_10->vq_dst, VAR_11);
  if (VAR_12)
   goto out;
  FUNC_6(VAR_9->mfc_ops, VAR_7, VAR_10);
  VAR_10->dst_bufs_cnt = 0;
 } else if (VAR_10->capture_state == VAR_4) {
  FUNC_0(VAR_10->dst_bufs_cnt != 0);
  FUNC_1(2, "Allocating %d buffers for CAPTURE queue\n",
    VAR_11->count);
  VAR_12 = FUNC_9(&VAR_10->vq_dst, VAR_11);
  if (VAR_12)
   goto out;

  VAR_10->capture_state = VAR_3;
  VAR_10->total_dpb_count = VAR_11->count;

  VAR_12 = FUNC_6(VAR_9->mfc_ops, VAR_6, VAR_10);
  if (VAR_12) {
   FUNC_2("Failed to allocate decoding buffers\n");
   VAR_11->count = 0;
   FUNC_9(&VAR_10->vq_dst, VAR_11);
   VAR_12 = -VAR_1;
   VAR_10->capture_state = VAR_4;
   goto out;
  }

  FUNC_0(VAR_10->dst_bufs_cnt != VAR_10->total_dpb_count);
  VAR_10->capture_state = VAR_2;

  if (FUNC_5(VAR_10))
   FUNC_8(VAR_10);
  FUNC_6(VAR_9->mfc_ops, VAR_8, VAR_9);
  FUNC_7(VAR_10, VAR_5,
       0);
 } else {
  FUNC_2("Buffers have already been requested\n");
  VAR_12 = -VAR_0;
 }
out:
 FUNC_3();
 if (VAR_12)
  FUNC_2("Failed allocating buffers for CAPTURE queue\n");
 return VAR_12;
}
