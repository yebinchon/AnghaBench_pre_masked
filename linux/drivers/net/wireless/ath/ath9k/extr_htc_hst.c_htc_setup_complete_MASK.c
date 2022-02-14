
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct htc_target {int dev; int cmd_wait; int htc_flags; } ;
struct htc_frame_hdr {int dummy; } ;
struct htc_comp_msg {int msg_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct htc_target*,struct sk_buff*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct htc_comp_msg* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 unsigned long FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct htc_target *VAR_8)
{
 struct sk_buff *VAR_9;
 struct htc_comp_msg *VAR_10;
 int VAR_11 = 0;
 unsigned long VAR_12;

 VAR_9 = FUNC_0(50 + sizeof(struct htc_frame_hdr), VAR_4);
 if (!VAR_9) {
  FUNC_2(VAR_8->dev, "failed to allocate send buffer\n");
  return -VAR_2;
 }
 FUNC_6(VAR_9, sizeof(struct htc_frame_hdr));

 VAR_10 = FUNC_5(VAR_9, sizeof(struct htc_comp_msg));
 VAR_10->msg_id = FUNC_1(VAR_5);

 VAR_8->htc_flags |= VAR_6;

 VAR_11 = FUNC_3(VAR_8, VAR_9, VAR_9->len, 0, VAR_1);
 if (VAR_11)
  goto err;

 VAR_12 = FUNC_7(&VAR_8->cmd_wait, VAR_7);
 if (!VAR_12) {
  FUNC_2(VAR_8->dev, "HTC start timeout\n");
  FUNC_4(VAR_9);
  return -VAR_3;
 }

 return 0;

err:
 FUNC_4(VAR_9);
 return -VAR_0;
}
