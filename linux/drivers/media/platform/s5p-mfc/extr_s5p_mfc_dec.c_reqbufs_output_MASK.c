
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {scalar_t__ count; } ;
struct s5p_mfc_dev {int dummy; } ;
struct s5p_mfc_ctx {scalar_t__ src_bufs_cnt; scalar_t__ output_state; scalar_t__ state; int vq_src; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct s5p_mfc_dev*,struct s5p_mfc_ctx*) ;
 int FUNC_6 (int *,struct v4l2_requestbuffers*) ;

__attribute__((used)) static int FUNC_7(struct s5p_mfc_dev *VAR_4, struct s5p_mfc_ctx *VAR_5,
    struct v4l2_requestbuffers *VAR_6)
{
 int VAR_7 = 0;

 FUNC_4();

 if (VAR_6->count == 0) {
  FUNC_1(2, "Freeing buffers\n");
  VAR_7 = FUNC_6(&VAR_5->vq_src, VAR_6);
  if (VAR_7)
   goto out;
  VAR_5->src_bufs_cnt = 0;
  VAR_5->output_state = VAR_3;
 } else if (VAR_5->output_state == VAR_3) {

  FUNC_0(VAR_5->src_bufs_cnt != 0);
  if (VAR_5->state != VAR_1) {
   FUNC_2("Reqbufs called in an invalid state\n");
   VAR_7 = -VAR_0;
   goto out;
  }

  FUNC_1(2, "Allocating %d buffers for OUTPUT queue\n",
    VAR_6->count);
  VAR_7 = FUNC_6(&VAR_5->vq_src, VAR_6);
  if (VAR_7)
   goto out;

  VAR_7 = FUNC_5(VAR_4, VAR_5);
  if (VAR_7) {
   VAR_6->count = 0;
   FUNC_6(&VAR_5->vq_src, VAR_6);
   goto out;
  }

  VAR_5->output_state = VAR_2;
 } else {
  FUNC_2("Buffers have already been requested\n");
  VAR_7 = -VAR_0;
 }
out:
 FUNC_3();
 if (VAR_7)
  FUNC_2("Failed allocating buffers for OUTPUT queue\n");
 return VAR_7;
}
