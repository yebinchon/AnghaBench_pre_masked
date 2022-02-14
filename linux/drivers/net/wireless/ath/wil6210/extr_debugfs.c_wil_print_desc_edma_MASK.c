
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct TYPE_15__ {scalar_t__* d; } ;
struct wil_tx_enhanced_desc {TYPE_7__ mac; } ;
struct TYPE_10__ {int buff_id; } ;
struct wil_rx_enhanced_desc {TYPE_2__ mac; } ;
struct wil_ring {TYPE_8__* ctx; TYPE_6__* va; scalar_t__ is_rx; } ;
struct TYPE_12__ {TYPE_3__* buff_arr; int size; } ;
struct wil6210_priv {TYPE_4__ rx_buff_mgmt; } ;
struct seq_file {int dummy; } ;
struct TYPE_16__ {scalar_t__ skb; } ;
struct TYPE_13__ {int enhanced; } ;
struct TYPE_9__ {int enhanced; } ;
struct TYPE_14__ {TYPE_5__ tx; TYPE_1__ rx; } ;
struct TYPE_11__ {int skb; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,char) ;
 scalar_t__ FUNC_2 (size_t,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, struct wil6210_priv *VAR_1,
    struct wil_ring *VAR_2,
    char VAR_3, char VAR_4, int VAR_5)
{
 u8 VAR_6;
 bool VAR_7 = 0;

 if (VAR_2->is_rx) {
  struct wil_rx_enhanced_desc *VAR_8 =
   (struct wil_rx_enhanced_desc *)
   &VAR_2->va[VAR_5].rx.enhanced;
  u16 VAR_9 = FUNC_0(VAR_8->mac.buff_id);

  if (VAR_1->rx_buff_mgmt.buff_arr &&
      FUNC_2(VAR_9, 0, VAR_1->rx_buff_mgmt.size))
   VAR_7 = VAR_1->rx_buff_mgmt.buff_arr[VAR_9].skb;
  FUNC_1(VAR_0, "%c", (VAR_7) ? VAR_4 : VAR_3);
 } else {
  struct wil_tx_enhanced_desc *VAR_10 =
   (struct wil_tx_enhanced_desc *)
   &VAR_2->va[VAR_5].tx.enhanced;

  VAR_6 = (u8)VAR_10->mac.d[2];
  VAR_7 = VAR_2->ctx && VAR_2->ctx[VAR_5].skb;
  if (VAR_6 >= 1)
   FUNC_1(VAR_0, "%c", VAR_7 ? VAR_4 : VAR_3);
  else

   FUNC_1(VAR_0, "%c", VAR_7 ? 'h' : VAR_3);
 }
}
