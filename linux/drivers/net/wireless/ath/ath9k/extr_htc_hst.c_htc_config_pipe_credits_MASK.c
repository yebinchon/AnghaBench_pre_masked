
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct htc_target {int dev; int cmd_wait; int htc_flags; int credits; } ;
struct htc_frame_hdr {int dummy; } ;
struct htc_config_pipe_msg {int credits; int pipe_id; int message_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct htc_target*,struct sk_buff*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct htc_config_pipe_msg* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 unsigned long FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct htc_target *VAR_9)
{
 struct sk_buff *VAR_10;
 struct htc_config_pipe_msg *VAR_11;
 int VAR_12;
 unsigned long VAR_13;

 VAR_10 = FUNC_0(50 + sizeof(struct htc_frame_hdr), VAR_4);
 if (!VAR_10) {
  FUNC_2(VAR_9->dev, "failed to allocate send buffer\n");
  return -VAR_2;
 }
 FUNC_6(VAR_10, sizeof(struct htc_frame_hdr));

 VAR_11 = FUNC_5(VAR_10, sizeof(struct htc_config_pipe_msg));

 VAR_11->message_id = FUNC_1(VAR_5);
 VAR_11->pipe_id = VAR_8;
 VAR_11->credits = VAR_9->credits;

 VAR_9->htc_flags |= VAR_6;

 VAR_12 = FUNC_3(VAR_9, VAR_10, VAR_10->len, 0, VAR_1);
 if (VAR_12)
  goto err;

 VAR_13 = FUNC_7(&VAR_9->cmd_wait, VAR_7);
 if (!VAR_13) {
  FUNC_2(VAR_9->dev, "HTC credit config timeout\n");
  FUNC_4(VAR_10);
  return -VAR_3;
 }

 return 0;
err:
 FUNC_4(VAR_10);
 return -VAR_0;
}
