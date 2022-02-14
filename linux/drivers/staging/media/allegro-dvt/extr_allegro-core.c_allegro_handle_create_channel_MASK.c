
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct mcu_msg_create_channel_response {int rec_buffers_size; int rec_buffers_count; int int_buffers_size; int int_buffers_count; int channel_id; int error_code; int user_id; TYPE_1__ header; } ;
struct allegro_dev {int v4l2_dev; } ;
struct allegro_channel {int error; int completion; int mcu_channel_id; int user_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct allegro_channel*) ;
 struct allegro_channel* FUNC_1 (struct allegro_dev*,int ) ;
 int FUNC_2 (struct allegro_channel*) ;
 int FUNC_3 (struct allegro_channel*) ;
 int FUNC_4 (struct allegro_channel*,int ,int ) ;
 int FUNC_5 (struct allegro_channel*,int ,int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ,int *,char*,int ,int ,...) ;
 int FUNC_9 (int *,char*,int ,...) ;
 int FUNC_10 (int *,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_11(struct allegro_dev *VAR_3,
         struct mcu_msg_create_channel_response *VAR_4)
{
 struct allegro_channel *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_1(VAR_3, VAR_4->user_id);
 if (FUNC_0(VAR_5)) {
  FUNC_10(&VAR_3->v4l2_dev,
     "received %s for unknown user %d\n",
     FUNC_7(VAR_4->header.type),
     VAR_4->user_id);
  return -VAR_0;
 }

 if (VAR_4->error_code) {
  FUNC_9(&VAR_3->v4l2_dev,
    "user %d: mcu failed to create channel: error %x\n",
    VAR_5->user_id, VAR_4->error_code);
  VAR_6 = -VAR_1;
  goto out;
 }

 VAR_5->mcu_channel_id = VAR_4->channel_id;
 FUNC_8(1, VAR_2, &VAR_3->v4l2_dev,
   "user %d: channel has channel id %d\n",
   VAR_5->user_id, VAR_5->mcu_channel_id);

 FUNC_8(1, VAR_2, &VAR_3->v4l2_dev,
   "channel %d: intermediate buffers: %d x %d bytes\n",
   VAR_5->mcu_channel_id,
   VAR_4->int_buffers_count, VAR_4->int_buffers_size);
 VAR_6 = FUNC_4(VAR_5, VAR_4->int_buffers_count,
         VAR_4->int_buffers_size);
 if (VAR_6) {
  FUNC_9(&VAR_3->v4l2_dev,
    "channel %d: failed to allocate intermediate buffers\n",
    VAR_5->mcu_channel_id);
  goto out;
 }
 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6)
  goto out;

 FUNC_8(1, VAR_2, &VAR_3->v4l2_dev,
   "channel %d: reference buffers: %d x %d bytes\n",
   VAR_5->mcu_channel_id,
   VAR_4->rec_buffers_count, VAR_4->rec_buffers_size);
 VAR_6 = FUNC_5(VAR_5, VAR_4->rec_buffers_count,
      VAR_4->rec_buffers_size);
 if (VAR_6) {
  FUNC_9(&VAR_3->v4l2_dev,
    "channel %d: failed to allocate reference buffers\n",
    VAR_5->mcu_channel_id);
  goto out;
 }
 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6)
  goto out;

out:
 VAR_5->error = VAR_6;
 FUNC_6(&VAR_5->completion);


 return 0;
}
