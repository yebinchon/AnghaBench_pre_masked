
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_5__ {int owner; } ;
struct TYPE_4__ {int tcr; int req_count; } ;
struct vnt_tx_desc {TYPE_3__* td_info; TYPE_2__ td0; int buff_addr; TYPE_1__ td1; struct vnt_tx_desc* next; } ;
struct vnt_private {int bPWBitOn; int lock; int * iTDUsed; int PortOffset; struct vnt_tx_desc** apCurrTD; int hw; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_6__ {int flags; int buf_dma; int req_count; struct sk_buff* skb; } ;


 int FUNC_0 (struct vnt_private*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct vnt_private*,size_t,struct vnt_tx_desc*,struct sk_buff*) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct vnt_private *VAR_8, struct sk_buff *VAR_9)
{
 struct ieee80211_hdr *VAR_10 = (struct ieee80211_hdr *)VAR_9->data;
 struct vnt_tx_desc *VAR_11;
 u32 VAR_12;
 unsigned long VAR_13;

 FUNC_7(&VAR_8->lock, VAR_13);

 if (FUNC_5(VAR_10->frame_control))
  VAR_12 = VAR_6;
 else
  VAR_12 = VAR_7;

 if (FUNC_0(VAR_8, VAR_12) < 1) {
  FUNC_8(&VAR_8->lock, VAR_13);
  FUNC_6(VAR_8->hw);
  return -VAR_1;
 }

 VAR_11 = VAR_8->apCurrTD[VAR_12];

 VAR_11->td1.tcr = 0;

 VAR_11->td_info->skb = VAR_9;

 if (VAR_12 == VAR_6)
  VAR_11->td_info->flags = VAR_5;

 VAR_8->apCurrTD[VAR_12] = VAR_11->next;

 FUNC_8(&VAR_8->lock, VAR_13);

 FUNC_9(VAR_8, VAR_12, VAR_11, VAR_9);

 FUNC_7(&VAR_8->lock, VAR_13);

 VAR_8->bPWBitOn = 0;


 VAR_11->td1.tcr |= (VAR_4 | VAR_3 | VAR_0);
 VAR_11->td1.req_count = FUNC_3(VAR_11->td_info->req_count);

 VAR_11->buff_addr = FUNC_4(VAR_11->td_info->buf_dma);


 FUNC_10();
 VAR_11->td0.owner = VAR_2;
 FUNC_10();

 if (VAR_11->td_info->flags & VAR_5)
  FUNC_2(VAR_8->PortOffset);
 else
  FUNC_1(VAR_8->PortOffset);

 VAR_8->iTDUsed[VAR_12]++;

 FUNC_8(&VAR_8->lock, VAR_13);

 return 0;
}
