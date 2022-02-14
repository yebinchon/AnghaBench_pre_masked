
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union vnt_tx_data_head {int dummy; } vnt_tx_data_head ;
struct TYPE_4__ {union vnt_tx_data_head head; } ;
struct TYPE_5__ {TYPE_1__ mic; union vnt_tx_data_head head; } ;
struct vnt_rrv_time_cts {int cts_rrv_time_ba; void* rrv_time_b; void* rrv_time_a; } ;
struct TYPE_6__ {TYPE_2__ tx; struct vnt_rrv_time_cts cts; } ;
union vnt_tx_head {TYPE_3__ tx_cts; } ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct vnt_usb_send_context {scalar_t__ fb_option; int pkt_type; int need_ack; int tx_rate; int frame_len; struct vnt_private* priv; } ;
struct vnt_private {int top_cck_basic_rate; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnt_usb_send_context*,union vnt_tx_data_head*) ;
 int FUNC_1 (struct vnt_usb_send_context*,union vnt_tx_data_head*) ;
 int FUNC_2 (struct vnt_private*,int,int ,int ,int ) ;
 void* FUNC_3 (struct vnt_private*,int ,int ,int ,int ) ;

__attribute__((used)) static u16 FUNC_4(struct vnt_usb_send_context *VAR_1,
   union vnt_tx_head *VAR_2, bool VAR_3)
{
 struct vnt_private *VAR_4 = VAR_1->priv;
 struct vnt_rrv_time_cts *VAR_5 = &VAR_2->tx_cts.cts;
 union vnt_tx_data_head *VAR_6 = &VAR_2->tx_cts.tx.head;
 u32 VAR_7 = VAR_1->frame_len;
 u16 VAR_8 = VAR_1->tx_rate;
 u8 VAR_9 = VAR_1->need_ack;

 VAR_5->rrv_time_a = FUNC_3(VAR_4, VAR_1->pkt_type,
     VAR_7, VAR_8, VAR_9);
 VAR_5->rrv_time_b = FUNC_3(VAR_4, VAR_0,
    VAR_7, VAR_4->top_cck_basic_rate, VAR_9);

 VAR_5->cts_rrv_time_ba = FUNC_2(VAR_4, 3,
   VAR_1->pkt_type, VAR_7, VAR_8);

 if (VAR_3)
  VAR_6 = &VAR_2->tx_cts.tx.mic.head;


 if (VAR_1->fb_option)
  return FUNC_0(VAR_1, VAR_6);

 return FUNC_1(VAR_1, VAR_6);
}
