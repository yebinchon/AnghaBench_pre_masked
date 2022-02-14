
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ cb; scalar_t__ data; } ;
struct rtllib_hdr_3addr {void* seq_ctl; int frame_ctl; } ;
struct rtllib_device {short softmac_features; int* seq_ctrl; int dev; int (* softmac_hard_start_xmit ) (struct sk_buff*,int ) ;int basic_rate; int (* softmac_data_hard_start_xmit ) (struct sk_buff*,int ,int ) ;scalar_t__ disable_mgnt_queue; } ;
struct cb_desc {int RATRIndex; int bTxDisableRateFallBack; int bTxUseDriverAssingedRate; int data_rate; void* queue_index; } ;


 void* VAR_0 ;
 short VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct rtllib_device*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int ) ;

__attribute__((used)) static inline void
FUNC_7(struct sk_buff *VAR_5,
       struct rtllib_device *VAR_6)
{
 short VAR_7 = VAR_6->softmac_features & VAR_1;
 struct rtllib_hdr_3addr *VAR_8 =
  (struct rtllib_hdr_3addr *) VAR_5->data;
 u16 VAR_9, VAR_10, VAR_11;
 struct cb_desc *VAR_12 = (struct cb_desc *)(VAR_5->cb + 8);

 VAR_9 = FUNC_4(VAR_8->frame_ctl);
 VAR_10 = FUNC_2(VAR_9);
 VAR_11 = FUNC_1(VAR_9);


 if (VAR_11 != VAR_4)
  VAR_12->queue_index = VAR_2;
 else
  VAR_12->queue_index = VAR_0;

 if (VAR_6->disable_mgnt_queue)
  VAR_12->queue_index = VAR_0;


 VAR_12->data_rate = FUNC_0(VAR_6);
 VAR_12->RATRIndex = 7;
 VAR_12->bTxDisableRateFallBack = 1;
 VAR_12->bTxUseDriverAssingedRate = 1;
 if (VAR_7) {
  if (VAR_10 != VAR_3) {
   VAR_8->seq_ctl = FUNC_3(VAR_6->seq_ctrl[0] << 4);

   if (VAR_6->seq_ctrl[0] == 0xFFF)
    VAR_6->seq_ctrl[0] = 0;
   else
    VAR_6->seq_ctrl[0]++;

  }

  VAR_6->softmac_data_hard_start_xmit(VAR_5, VAR_6->dev,
         VAR_6->basic_rate);

 } else {
  if (VAR_10 != VAR_3) {
   VAR_8->seq_ctl = FUNC_3(VAR_6->seq_ctrl[0] << 4);

   if (VAR_6->seq_ctrl[0] == 0xFFF)
    VAR_6->seq_ctrl[0] = 0;
   else
    VAR_6->seq_ctrl[0]++;
  }
  VAR_6->softmac_hard_start_xmit(VAR_5, VAR_6->dev);

 }
}
