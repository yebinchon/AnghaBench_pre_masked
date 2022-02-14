
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct vnt_usb_send_context {scalar_t__ pkt_type; } ;
struct vnt_mic_hdr {int dummy; } ;
struct TYPE_20__ {struct vnt_mic_hdr hdr; } ;
struct TYPE_21__ {TYPE_7__ mic; } ;
struct TYPE_22__ {TYPE_8__ tx; } ;
struct TYPE_17__ {struct vnt_mic_hdr hdr; } ;
struct TYPE_18__ {TYPE_4__ mic; } ;
struct TYPE_19__ {TYPE_5__ tx; } ;
struct TYPE_14__ {struct vnt_mic_hdr hdr; } ;
struct TYPE_15__ {TYPE_1__ mic; } ;
struct TYPE_16__ {TYPE_2__ tx; } ;
struct TYPE_13__ {TYPE_9__ tx_ab; TYPE_6__ tx_cts; TYPE_3__ tx_rts; } ;
struct vnt_tx_buffer {TYPE_10__ tx_head; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vnt_usb_send_context*,TYPE_10__*,int,scalar_t__) ;
 int FUNC_1 (struct vnt_usb_send_context*,TYPE_10__*,scalar_t__) ;
 int FUNC_2 (struct vnt_usb_send_context*,TYPE_10__*,scalar_t__) ;

__attribute__((used)) static u16 FUNC_3(struct vnt_usb_send_context *VAR_2,
         struct vnt_tx_buffer *VAR_3,
         struct vnt_mic_hdr **VAR_4, u32 VAR_5,
         bool VAR_6)
{
 if (VAR_2->pkt_type == VAR_1 ||
     VAR_2->pkt_type == VAR_0) {
  if (VAR_6) {
   if (VAR_5)
    *VAR_4 =
     &VAR_3->tx_head.tx_rts.tx.mic.hdr;

   return FUNC_2(VAR_2, &VAR_3->tx_head,
         VAR_5);
  }

  if (VAR_5)
   *VAR_4 = &VAR_3->tx_head.tx_cts.tx.mic.hdr;

  return FUNC_1(VAR_2, &VAR_3->tx_head, VAR_5);
 }

 if (VAR_5)
  *VAR_4 = &VAR_3->tx_head.tx_ab.tx.mic.hdr;

 return FUNC_0(VAR_2, &VAR_3->tx_head, VAR_6, VAR_5);
}
