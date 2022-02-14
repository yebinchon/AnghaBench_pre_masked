
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {scalar_t__ codec_state; int lock; scalar_t__ streamon_cap; scalar_t__ streamon_out; } ;
struct v4l2_decoder_cmd {scalar_t__ cmd; } ;
struct hfi_frame_data {int device_addr; int flags; int buffer_type; int member_0; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct venus_inst*,struct hfi_frame_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct venus_inst* FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*,void*,struct v4l2_decoder_cmd*) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_5, void *VAR_6, struct v4l2_decoder_cmd *VAR_7)
{
 struct venus_inst *VAR_8 = FUNC_3(VAR_5);
 struct hfi_frame_data VAR_9 = {0};
 int VAR_10;

 VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_7);
 if (VAR_10)
  return VAR_10;

 FUNC_1(&VAR_8->lock);

 if (VAR_7->cmd == VAR_2) {




  if (!(VAR_8->streamon_out && VAR_8->streamon_cap))
   goto unlock;

  VAR_9.buffer_type = VAR_1;
  VAR_9.flags |= VAR_0;
  VAR_9.device_addr = 0xdeadb000;

  VAR_10 = FUNC_0(VAR_8, &VAR_9);

  if (!VAR_10 && VAR_8->codec_state == VAR_3)
   VAR_8->codec_state = VAR_4;
 }

unlock:
 FUNC_2(&VAR_8->lock);
 return VAR_10;
}
