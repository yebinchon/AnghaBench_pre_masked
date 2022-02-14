
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vnt_usb_send_context {int tx_rate; int pkt_type; struct vnt_private* priv; } ;
struct vnt_rts_g {int data_head; void* duration_aa; int data; void* duration_ba; void* duration_bb; int a; int b; } ;
struct vnt_private {int top_cck_basic_rate; int top_ofdm_basic_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vnt_usb_send_context*,int *,void*) ;
 int FUNC_1 (struct vnt_private*,int,int,int ,int *) ;
 void* FUNC_2 (struct vnt_usb_send_context*,int ,int ,int) ;
 int FUNC_3 (struct vnt_usb_send_context*,int *) ;

__attribute__((used)) static u16 FUNC_4(struct vnt_usb_send_context *VAR_4,
          struct vnt_rts_g *VAR_5)
{
 struct vnt_private *VAR_6 = VAR_4->priv;
 u16 VAR_7 = 20;
 u16 VAR_8 = VAR_4->tx_rate;

 FUNC_1(VAR_6, VAR_7, VAR_6->top_cck_basic_rate,
     VAR_0, &VAR_5->b);
 FUNC_1(VAR_6, VAR_7, VAR_6->top_ofdm_basic_rate,
     VAR_4->pkt_type, &VAR_5->a);

 VAR_5->duration_bb = FUNC_2(VAR_4, VAR_3,
            VAR_0,
            VAR_6->top_cck_basic_rate);
 VAR_5->duration_aa = FUNC_2(VAR_4, VAR_1,
            VAR_4->pkt_type,
            VAR_8);
 VAR_5->duration_ba = FUNC_2(VAR_4, VAR_2,
            VAR_4->pkt_type,
            VAR_8);

 FUNC_0(VAR_4, &VAR_5->data, VAR_5->duration_aa);

 return FUNC_3(VAR_4, &VAR_5->data_head);
}
