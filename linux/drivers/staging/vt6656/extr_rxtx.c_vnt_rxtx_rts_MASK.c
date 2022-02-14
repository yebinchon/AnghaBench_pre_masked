
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union vnt_tx_data_head {int rts_g; int rts_g_fb; } ;
struct TYPE_4__ {union vnt_tx_data_head head; } ;
struct TYPE_5__ {TYPE_1__ mic; union vnt_tx_data_head head; } ;
struct vnt_rrv_time_rts {void* rrv_time_b; void* rrv_time_a; void* rts_rrv_time_bb; void* rts_rrv_time_ba; void* rts_rrv_time_aa; } ;
struct TYPE_6__ {TYPE_2__ tx; struct vnt_rrv_time_rts rts; } ;
union vnt_tx_head {TYPE_3__ tx_rts; } ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct vnt_usb_send_context {scalar_t__ fb_option; int pkt_type; int need_ack; int tx_rate; int frame_len; struct vnt_private* priv; } ;
struct vnt_private {int top_cck_basic_rate; } ;


 int VAR_0 ;
 void* FUNC_0 (struct vnt_private*,int,int ,int ,int ) ;
 void* FUNC_1 (struct vnt_private*,int ,int ,int ,int ) ;
 int FUNC_2 (struct vnt_usb_send_context*,int *) ;
 int FUNC_3 (struct vnt_usb_send_context*,int *) ;

__attribute__((used)) static u16 FUNC_4(struct vnt_usb_send_context *VAR_1,
   union vnt_tx_head *VAR_2, bool VAR_3)
{
 struct vnt_private *VAR_4 = VAR_1->priv;
 struct vnt_rrv_time_rts *VAR_5 = &VAR_2->tx_rts.rts;
 union vnt_tx_data_head *VAR_6 = &VAR_2->tx_rts.tx.head;
 u32 VAR_7 = VAR_1->frame_len;
 u16 VAR_8 = VAR_1->tx_rate;
 u8 VAR_9 = VAR_1->need_ack;

 VAR_5->rts_rrv_time_aa = FUNC_0(VAR_4, 2,
   VAR_1->pkt_type, VAR_7, VAR_8);
 VAR_5->rts_rrv_time_ba = FUNC_0(VAR_4, 1,
   VAR_1->pkt_type, VAR_7, VAR_8);
 VAR_5->rts_rrv_time_bb = FUNC_0(VAR_4, 0,
   VAR_1->pkt_type, VAR_7, VAR_8);

 VAR_5->rrv_time_a = FUNC_1(VAR_4, VAR_1->pkt_type,
      VAR_7, VAR_8,
      VAR_9);
 VAR_5->rrv_time_b = FUNC_1(VAR_4, VAR_0, VAR_7,
     VAR_4->top_cck_basic_rate, VAR_9);

 if (VAR_3)
  VAR_6 = &VAR_2->tx_rts.tx.mic.head;

 if (VAR_1->fb_option)
  return FUNC_2(VAR_1, &VAR_6->rts_g_fb);

 return FUNC_3(VAR_1, &VAR_6->rts_g);
}
