
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ra; int frame_control; int duration; } ;
struct vnt_cts {int data_head; TYPE_1__ data; int duration_ba; int b; } ;
union vnt_tx_data_head {struct vnt_cts cts_g; } ;
typedef int u32 ;
typedef int u16 ;
struct vnt_usb_send_context {int pkt_type; int tx_rate; struct vnt_private* priv; } ;
struct vnt_private {int current_net_addr; int top_cck_basic_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct vnt_private*,int,int ,int ,int *) ;
 int FUNC_3 (struct vnt_usb_send_context*,int ,int ,int ) ;
 int FUNC_4 (struct vnt_usb_send_context*,int *) ;

__attribute__((used)) static u16 FUNC_5(struct vnt_usb_send_context *VAR_4,
        union vnt_tx_data_head *VAR_5)
{
 struct vnt_private *VAR_6 = VAR_4->priv;
 struct vnt_cts *VAR_7 = &VAR_5->cts_g;
 u32 VAR_8 = 14;
 u16 VAR_9 = VAR_4->tx_rate;


 FUNC_2(VAR_6, VAR_8, VAR_6->top_cck_basic_rate,
     VAR_3, &VAR_7->b);

 VAR_7->duration_ba =
  FUNC_3(VAR_4, VAR_0,
        VAR_4->pkt_type,
        VAR_9);

 VAR_7->data.duration = VAR_7->duration_ba;
 VAR_7->data.frame_control =
  FUNC_0(VAR_1 | VAR_2);

 FUNC_1(VAR_7->data.ra, VAR_6->current_net_addr);

 return FUNC_4(VAR_4, &VAR_7->data_head);
}
