
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct vnt_usb_send_context {int tx_hdr_size; int pkt_type; int need_ack; int tx_rate; int frame_len; struct vnt_private* priv; } ;
struct vnt_tx_datahead_g_fb {void* duration_a; int hdr; void* time_stamp_off_b; void* time_stamp_off_a; void* duration_a_f1; void* duration_a_f0; void* duration_b; int b; int a; } ;
struct vnt_private {int top_cck_basic_rate; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (struct vnt_private*,int ,int ) ;
 int FUNC_2 (struct vnt_private*,int ,int ,int ,int *) ;
 int FUNC_3 (struct vnt_usb_send_context*,int *) ;
 void* FUNC_4 (struct vnt_private*,int ) ;

__attribute__((used)) static u16 FUNC_5(struct vnt_usb_send_context *VAR_1,
      struct vnt_tx_datahead_g_fb *VAR_2)
{
 struct vnt_private *VAR_3 = VAR_1->priv;
 u32 VAR_4 = VAR_1->frame_len;
 u16 VAR_5 = VAR_1->tx_rate;
 u8 VAR_6 = VAR_1->need_ack;


 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_1->pkt_type, &VAR_2->a);

 FUNC_2(VAR_3, VAR_4, VAR_3->top_cck_basic_rate,
     VAR_0, &VAR_2->b);


 VAR_2->duration_a = FUNC_1(VAR_3, VAR_1->pkt_type,
           VAR_6);
 VAR_2->duration_b = FUNC_1(VAR_3, VAR_0, VAR_6);

 VAR_2->duration_a_f0 = FUNC_1(VAR_3, VAR_1->pkt_type,
       VAR_6);
 VAR_2->duration_a_f1 = FUNC_1(VAR_3, VAR_1->pkt_type,
       VAR_6);

 VAR_2->time_stamp_off_a = FUNC_4(VAR_3, VAR_5);
 VAR_2->time_stamp_off_b = FUNC_4(VAR_3,
         VAR_3->top_cck_basic_rate);

 VAR_1->tx_hdr_size = FUNC_3(VAR_1, &VAR_2->hdr);

 return FUNC_0(VAR_2->duration_a);
}
