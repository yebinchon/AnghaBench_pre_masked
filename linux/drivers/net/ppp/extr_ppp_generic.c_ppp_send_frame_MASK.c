
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; unsigned char* data; } ;
struct TYPE_10__ {scalar_t__ qlen; } ;
struct TYPE_8__ {int rwait; TYPE_4__ rq; } ;
struct TYPE_7__ {int tx_bytes; int tx_packets; } ;
struct ppp {int debug; int flags; int xstate; TYPE_5__* dev; struct sk_buff* xmit_pending; TYPE_2__ file; scalar_t__ xc_state; int vj; TYPE_1__ stats64; void* last_xmit; scalar_t__ active_filter; scalar_t__ pass_filter; } ;
struct TYPE_9__ {int tx_errors; } ;
struct TYPE_11__ {TYPE_3__ stats; int hard_header_len; } ;


 scalar_t__ FUNC_0 (scalar_t__,struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned char VAR_12 ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 void* VAR_13 ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_5__*,char*) ;
 int FUNC_7 (int ,TYPE_5__*,char*) ;
 struct sk_buff* FUNC_8 (struct ppp*,struct sk_buff*) ;
 int FUNC_9 (struct ppp*,struct sk_buff*,int ) ;
 int FUNC_10 (struct ppp*) ;
 int FUNC_11 (struct sk_buff*,int) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int) ;
 unsigned char* FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (TYPE_4__*,struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 int FUNC_16 (int ,unsigned char*,int,int ,unsigned char**,int) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void
FUNC_18(struct ppp *VAR_14, struct sk_buff *VAR_15)
{
 int VAR_16 = FUNC_1(VAR_15);
 struct sk_buff *VAR_17;
 int VAR_18;
 unsigned char *VAR_19;

 if (VAR_16 < 0x8000) {
  VAR_14->last_xmit = VAR_13;

 }

 ++VAR_14->stats64.tx_packets;
 VAR_14->stats64.tx_bytes += VAR_15->len - 2;

 switch (VAR_16) {
 case 128:
  if (!VAR_14->vj || (VAR_14->flags & VAR_8) == 0)
   break;

  VAR_17 = FUNC_2(VAR_15->len + VAR_14->dev->hard_header_len - 2,
        VAR_0);
  if (!VAR_17) {
   FUNC_6(VAR_14->dev, "PPP: no memory (VJ comp pkt)\n");
   goto drop;
  }
  FUNC_15(VAR_17, VAR_14->dev->hard_header_len - 2);
  VAR_19 = VAR_15->data + 2;
  VAR_18 = FUNC_16(VAR_14->vj, VAR_19, VAR_15->len - 2,
        VAR_17->data + 2, &VAR_19,
        !(VAR_14->flags & VAR_11));
  if (VAR_19 == VAR_15->data + 2) {

   FUNC_3(VAR_17);
  } else {
   if (VAR_19[0] & VAR_12) {
    VAR_16 = VAR_4;
    VAR_19[0] &= ~VAR_12;
   } else {
    VAR_16 = VAR_5;
    VAR_19[0] = VAR_15->data[2];
   }
   FUNC_3(VAR_15);
   VAR_15 = VAR_17;
   VAR_19 = FUNC_13(VAR_15, VAR_18 + 2);
   VAR_19[0] = 0;
   VAR_19[1] = VAR_16;
  }
  break;

 case 129:

  FUNC_9(VAR_14, VAR_15, 0);
  break;
 }


 if ((VAR_14->xstate & VAR_7) && VAR_14->xc_state &&
     VAR_16 != VAR_2 && VAR_16 != 129) {
  if (!(VAR_14->flags & VAR_6) && (VAR_14->flags & VAR_10)) {
   if (FUNC_5())
    FUNC_6(VAR_14->dev,
        "ppp: compression required but "
        "down - pkt dropped.\n");
   goto drop;
  }
  VAR_15 = FUNC_8(VAR_14, VAR_15);
  if (!VAR_15)
   goto drop;
 }





 if (VAR_14->flags & VAR_9) {
  if (VAR_14->file.rq.qlen > VAR_3)
   goto drop;
  FUNC_14(&VAR_14->file.rq, VAR_15);
  FUNC_17(&VAR_14->file.rwait);
  return;
 }

 VAR_14->xmit_pending = VAR_15;
 FUNC_10(VAR_14);
 return;

 drop:
 FUNC_4(VAR_15);
 ++VAR_14->dev->stats.tx_errors;
}
