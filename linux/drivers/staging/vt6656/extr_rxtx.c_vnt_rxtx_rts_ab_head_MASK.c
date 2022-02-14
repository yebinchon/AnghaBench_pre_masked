
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vnt_usb_send_context {int tx_rate; int pkt_type; struct vnt_private* priv; } ;
struct vnt_rts_ab {int data_head; int duration; int data; int ab; } ;
struct vnt_private {int top_ofdm_basic_rate; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnt_usb_send_context*,int *,int ) ;
 int FUNC_1 (struct vnt_private*,int,int ,int ,int *) ;
 int FUNC_2 (struct vnt_usb_send_context*,int ,int ,int) ;
 int FUNC_3 (struct vnt_usb_send_context*,int *) ;

__attribute__((used)) static u16 FUNC_4(struct vnt_usb_send_context *VAR_1,
    struct vnt_rts_ab *VAR_2)
{
 struct vnt_private *VAR_3 = VAR_1->priv;
 u16 VAR_4 = VAR_1->tx_rate;
 u16 VAR_5 = 20;

 FUNC_1(VAR_3, VAR_5, VAR_3->top_ofdm_basic_rate,
     VAR_1->pkt_type, &VAR_2->ab);

 VAR_2->duration = FUNC_2(VAR_1, VAR_0,
         VAR_1->pkt_type,
         VAR_4);

 FUNC_0(VAR_1, &VAR_2->data, VAR_2->duration);

 return FUNC_3(VAR_1, &VAR_2->data_head);
}
