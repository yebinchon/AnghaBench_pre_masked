
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct vnt_usb_send_context {int tx_hdr_size; int frame_len; int need_ack; int pkt_type; int tx_rate; struct vnt_private* priv; } ;
struct vnt_tx_datahead_a_fb {void* duration; int hdr; int time_stamp_off; void* duration_f1; void* duration_f0; int a; } ;
struct vnt_private {int dummy; } ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (struct vnt_private*,int ,int ) ;
 int FUNC_2 (struct vnt_private*,int ,int ,int ,int *) ;
 int FUNC_3 (struct vnt_usb_send_context*,int *) ;
 int FUNC_4 (struct vnt_private*,int ) ;

__attribute__((used)) static u16 FUNC_5(struct vnt_usb_send_context *VAR_0,
      struct vnt_tx_datahead_a_fb *VAR_1)
{
 struct vnt_private *VAR_2 = VAR_0->priv;
 u16 VAR_3 = VAR_0->tx_rate;
 u8 VAR_4 = VAR_0->pkt_type;
 u8 VAR_5 = VAR_0->need_ack;
 u32 VAR_6 = VAR_0->frame_len;


 FUNC_2(VAR_2, VAR_6, VAR_3, VAR_4, &VAR_1->a);

 VAR_1->duration = FUNC_1(VAR_2, VAR_4, VAR_5);

 VAR_1->duration_f0 = FUNC_1(VAR_2, VAR_4, VAR_5);
 VAR_1->duration_f1 = FUNC_1(VAR_2, VAR_4, VAR_5);

 VAR_1->time_stamp_off = FUNC_4(VAR_2, VAR_3);

 VAR_0->tx_hdr_size = FUNC_3(VAR_0, &VAR_1->hdr);

 return FUNC_0(VAR_1->duration);
}
