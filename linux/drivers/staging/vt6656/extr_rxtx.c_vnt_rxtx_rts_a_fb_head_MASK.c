
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vnt_usb_send_context {int tx_rate; int pkt_type; struct vnt_private* priv; } ;
struct vnt_rts_a_fb {int data_head; void* duration; int data; void* rts_duration_f1; void* rts_duration_f0; int a; } ;
struct vnt_private {int tx_rate_fb0; int tx_rate_fb1; int top_ofdm_basic_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vnt_usb_send_context*,int *,void*) ;
 int FUNC_1 (struct vnt_private*,int,int ,int ,int *) ;
 void* FUNC_2 (struct vnt_usb_send_context*,int ,int ,int) ;
 int FUNC_3 (struct vnt_usb_send_context*,int *) ;

__attribute__((used)) static u16 FUNC_4(struct vnt_usb_send_context *VAR_3,
      struct vnt_rts_a_fb *VAR_4)
{
 struct vnt_private *VAR_5 = VAR_3->priv;
 u16 VAR_6 = VAR_3->tx_rate;
 u16 VAR_7 = 20;

 FUNC_1(VAR_5, VAR_7, VAR_5->top_ofdm_basic_rate,
     VAR_3->pkt_type, &VAR_4->a);

 VAR_4->duration = FUNC_2(VAR_3, VAR_0,
         VAR_3->pkt_type,
         VAR_6);

 VAR_4->rts_duration_f0 =
  FUNC_2(VAR_3, VAR_1,
        VAR_3->pkt_type,
        VAR_5->tx_rate_fb0);

 VAR_4->rts_duration_f1 =
  FUNC_2(VAR_3, VAR_2,
        VAR_3->pkt_type,
        VAR_5->tx_rate_fb1);

 FUNC_0(VAR_3, &VAR_4->data, VAR_4->duration);

 return FUNC_3(VAR_3, &VAR_4->data_head);
}
