
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ra; int frame_control; void* duration; } ;
struct vnt_cts_fb {int data_head; TYPE_1__ data; void* duration_ba; void* cts_duration_ba_f1; void* cts_duration_ba_f0; int b; } ;
union vnt_tx_data_head {struct vnt_cts_fb cts_g_fb; } ;
typedef int u32 ;
typedef int u16 ;
struct vnt_usb_send_context {int pkt_type; int tx_rate; struct vnt_private* priv; } ;
struct vnt_private {int current_net_addr; int tx_rate_fb1; int tx_rate_fb0; int top_cck_basic_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct vnt_private*,int,int ,int ,int *) ;
 void* FUNC_3 (struct vnt_usb_send_context*,int ,int ,int ) ;
 int FUNC_4 (struct vnt_usb_send_context*,int *) ;

__attribute__((used)) static u16 FUNC_5(struct vnt_usb_send_context *VAR_6,
    union vnt_tx_data_head *VAR_7)
{
 struct vnt_private *VAR_8 = VAR_6->priv;
 struct vnt_cts_fb *VAR_9 = &VAR_7->cts_g_fb;
 u32 VAR_10 = 14;
 u16 VAR_11 = VAR_6->tx_rate;


 FUNC_2(VAR_8, VAR_10, VAR_8->top_cck_basic_rate,
     VAR_5, &VAR_9->b);

 VAR_9->duration_ba =
  FUNC_3(VAR_6, VAR_0,
        VAR_6->pkt_type,
        VAR_11);

 VAR_9->cts_duration_ba_f0 =
  FUNC_3(VAR_6, VAR_1,
        VAR_6->pkt_type,
        VAR_8->tx_rate_fb0);

 VAR_9->cts_duration_ba_f1 =
  FUNC_3(VAR_6, VAR_2,
        VAR_6->pkt_type,
        VAR_8->tx_rate_fb1);

 VAR_9->data.duration = VAR_9->duration_ba;
 VAR_9->data.frame_control =
  FUNC_0(VAR_3 | VAR_4);

 FUNC_1(VAR_9->data.ra, VAR_8->current_net_addr);

 return FUNC_4(VAR_6, &VAR_9->data_head);
}
