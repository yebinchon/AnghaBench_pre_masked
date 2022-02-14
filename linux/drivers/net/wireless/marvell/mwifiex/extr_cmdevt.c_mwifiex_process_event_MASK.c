
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; int data; } ;
struct mwifiex_rxinfo {int bss_num; int bss_type; } ;
struct mwifiex_private {int bss_num; int bss_type; scalar_t__ bss_role; } ;
struct TYPE_4__ {int (* event_complete ) (struct mwifiex_adapter*,struct sk_buff*) ;} ;
struct TYPE_3__ {int last_event_index; scalar_t__* last_event; } ;
struct mwifiex_adapter {int event_cause; int priv_num; TYPE_2__ if_ops; struct sk_buff* event_skb; TYPE_1__ dbg; struct mwifiex_private** priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct mwifiex_rxinfo* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct mwifiex_rxinfo*,int ,int) ;
 int FUNC_4 (struct mwifiex_adapter*,int ,char*,int) ;
 int FUNC_5 (struct mwifiex_adapter*,int ,char*,int ,int ) ;
 struct mwifiex_private* FUNC_6 (struct mwifiex_adapter*,int ) ;
 struct mwifiex_private* FUNC_7 (struct mwifiex_adapter*,int ,int ) ;
 scalar_t__ FUNC_8 (struct mwifiex_private*) ;
 int FUNC_9 (struct mwifiex_private*) ;
 int FUNC_10 (struct mwifiex_private*) ;
 int FUNC_11 (struct mwifiex_adapter*,struct sk_buff*) ;

int FUNC_12(struct mwifiex_adapter *VAR_7)
{
 int VAR_8, VAR_9;
 struct mwifiex_private *VAR_10 =
  FUNC_6(VAR_7, VAR_5);
 struct sk_buff *VAR_11 = VAR_7->event_skb;
 u32 VAR_12;
 struct mwifiex_rxinfo *VAR_13;

 if ((VAR_7->event_cause & VAR_2) == VAR_3) {
  for (VAR_9 = 0; VAR_9 < VAR_7->priv_num; VAR_9++) {
   VAR_10 = VAR_7->priv[VAR_9];
   if (VAR_10 && FUNC_8(VAR_10)) {
    VAR_7->event_cause |=
     ((VAR_10->bss_num & 0xff) << 16) |
     ((VAR_10->bss_type & 0xff) << 24);
    break;
   }
  }
 }

 VAR_12 = VAR_7->event_cause;


 VAR_7->dbg.last_event_index =
   (VAR_7->dbg.last_event_index + 1) % VAR_0;
 VAR_7->dbg.last_event[VAR_7->dbg.last_event_index] =
       (u16) VAR_12;


 VAR_10 = FUNC_7(VAR_7, FUNC_0(VAR_12),
          FUNC_1(VAR_12));
 if (!VAR_10)
  VAR_10 = FUNC_6(VAR_7, VAR_5);


 VAR_12 &= VAR_2;
 VAR_7->event_cause = VAR_12;

 if (VAR_11) {
  VAR_13 = FUNC_2(VAR_11);
  FUNC_3(VAR_13, 0, sizeof(*VAR_13));
  VAR_13->bss_num = VAR_10->bss_num;
  VAR_13->bss_type = VAR_10->bss_type;
  FUNC_5(VAR_7, VAR_4, "Event Buf:",
     VAR_11->data, VAR_11->len);
 }

 FUNC_4(VAR_7, VAR_1, "EVENT: cause: %#x\n", VAR_12);

 if (VAR_10->bss_role == VAR_6)
  VAR_8 = FUNC_10(VAR_10);
 else
  VAR_8 = FUNC_9(VAR_10);

 VAR_7->event_cause = 0;
 VAR_7->event_skb = ((void*)0);
 VAR_7->if_ops.event_complete(VAR_7, VAR_11);

 return VAR_8;
}
