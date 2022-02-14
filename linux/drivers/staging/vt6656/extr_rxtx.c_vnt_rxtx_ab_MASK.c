
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union vnt_tx_data_head {int data_head_ab; int data_head_a_fb; int rts_ab; int rts_a_fb; } ;
struct TYPE_4__ {union vnt_tx_data_head head; } ;
struct TYPE_5__ {TYPE_1__ mic; union vnt_tx_data_head head; } ;
struct vnt_rrv_time_ab {void* rts_rrv_time; int rrv_time; } ;
struct TYPE_6__ {TYPE_2__ tx; struct vnt_rrv_time_ab ab; } ;
union vnt_tx_head {TYPE_3__ tx_ab; } ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct vnt_usb_send_context {int pkt_type; scalar_t__ fb_option; int need_ack; int tx_rate; int frame_len; struct vnt_private* priv; } ;
struct vnt_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct vnt_private*,int,int ,int ,int ) ;
 int FUNC_1 (struct vnt_usb_send_context*,int *) ;
 int FUNC_2 (struct vnt_usb_send_context*,int *) ;
 int FUNC_3 (struct vnt_private*,int ,int ,int ,int ) ;
 int FUNC_4 (struct vnt_usb_send_context*,int *) ;
 int FUNC_5 (struct vnt_usb_send_context*,int *) ;

__attribute__((used)) static u16 FUNC_6(struct vnt_usb_send_context *VAR_2,
         union vnt_tx_head *VAR_3, bool VAR_4, bool VAR_5)
{
 struct vnt_private *VAR_6 = VAR_2->priv;
 struct vnt_rrv_time_ab *VAR_7 = &VAR_3->tx_ab.ab;
 union vnt_tx_data_head *VAR_8 = &VAR_3->tx_ab.tx.head;
 u32 VAR_9 = VAR_2->frame_len;
 u16 VAR_10 = VAR_2->tx_rate;
 u8 VAR_11 = VAR_2->need_ack;

 VAR_7->rrv_time = FUNC_3(VAR_6, VAR_2->pkt_type,
           VAR_9, VAR_10, VAR_11);

 if (VAR_5)
  VAR_8 = &VAR_3->tx_ab.tx.mic.head;

 if (VAR_4) {
  if (VAR_2->pkt_type == VAR_1)
   VAR_7->rts_rrv_time = FUNC_0(VAR_6, 0,
    VAR_2->pkt_type, VAR_9, VAR_10);
  else
   VAR_7->rts_rrv_time = FUNC_0(VAR_6, 2,
    VAR_2->pkt_type, VAR_9, VAR_10);

  if (VAR_2->fb_option &&
      VAR_2->pkt_type == VAR_0)
   return FUNC_4(VAR_2,
            &VAR_8->rts_a_fb);

  return FUNC_5(VAR_2, &VAR_8->rts_ab);
 }

 if (VAR_2->pkt_type == VAR_0)
  return FUNC_1(VAR_2,
           &VAR_8->data_head_a_fb);

 return FUNC_2(VAR_2, &VAR_8->data_head_ab);
}
