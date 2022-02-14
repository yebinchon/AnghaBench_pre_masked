
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vnt_usb_send_context {int tx_rate; int pkt_type; struct vnt_private* priv; } ;
struct vnt_rts_g_fb {int data_head; void* duration_aa; int data; void* rts_duration_aa_f1; void* rts_duration_ba_f1; void* rts_duration_aa_f0; void* rts_duration_ba_f0; void* duration_ba; void* duration_bb; int a; int b; } ;
struct vnt_private {int top_cck_basic_rate; int top_ofdm_basic_rate; int tx_rate_fb0; int tx_rate_fb1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vnt_usb_send_context*,int *,void*) ;
 int FUNC_1 (struct vnt_private*,int,int,int ,int *) ;
 void* FUNC_2 (struct vnt_usb_send_context*,int ,int ,int) ;
 int FUNC_3 (struct vnt_usb_send_context*,int *) ;

__attribute__((used)) static u16 FUNC_4(struct vnt_usb_send_context *VAR_8,
      struct vnt_rts_g_fb *VAR_9)
{
 struct vnt_private *VAR_10 = VAR_8->priv;
 u16 VAR_11 = VAR_8->tx_rate;
 u16 VAR_12 = 20;

 FUNC_1(VAR_10, VAR_12, VAR_10->top_cck_basic_rate,
     VAR_0, &VAR_9->b);
 FUNC_1(VAR_10, VAR_12, VAR_10->top_ofdm_basic_rate,
     VAR_8->pkt_type, &VAR_9->a);

 VAR_9->duration_bb = FUNC_2(VAR_8, VAR_7,
            VAR_0,
            VAR_10->top_cck_basic_rate);
 VAR_9->duration_aa = FUNC_2(VAR_8, VAR_1,
            VAR_8->pkt_type,
            VAR_11);
 VAR_9->duration_ba = FUNC_2(VAR_8, VAR_4,
            VAR_8->pkt_type,
            VAR_11);

 VAR_9->rts_duration_ba_f0 =
  FUNC_2(VAR_8, VAR_5,
        VAR_8->pkt_type,
        VAR_10->tx_rate_fb0);
 VAR_9->rts_duration_aa_f0 =
  FUNC_2(VAR_8, VAR_2,
        VAR_8->pkt_type,
        VAR_10->tx_rate_fb0);
 VAR_9->rts_duration_ba_f1 =
  FUNC_2(VAR_8, VAR_6,
        VAR_8->pkt_type,
        VAR_10->tx_rate_fb1);
 VAR_9->rts_duration_aa_f1 =
  FUNC_2(VAR_8, VAR_3,
        VAR_8->pkt_type,
        VAR_10->tx_rate_fb1);

 FUNC_0(VAR_8, &VAR_9->data, VAR_9->duration_aa);

 return FUNC_3(VAR_8, &VAR_9->data_head);
}
