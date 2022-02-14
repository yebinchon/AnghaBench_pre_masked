
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int len; int protocol; TYPE_5__* dev; int data; int ip_summed; } ;
struct TYPE_10__ {scalar_t__ qlen; } ;
struct TYPE_9__ {int rwait; TYPE_3__ rq; } ;
struct TYPE_8__ {int rx_bytes; int rx_packets; } ;
struct ppp {int rstate; int flags; int debug; scalar_t__* npmode; TYPE_5__* dev; int ppp_net; void* last_recv; scalar_t__ active_filter; scalar_t__ pass_filter; TYPE_2__ file; TYPE_1__ stats64; int vj; scalar_t__ rc_state; } ;
struct TYPE_11__ {int flags; } ;


 scalar_t__ FUNC_0 (scalar_t__,struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct sk_buff*) ;


 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ) ;
 void* VAR_12 ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_5__*,char*) ;
 int FUNC_10 (int ,TYPE_5__*,char*) ;
 int FUNC_11 (struct sk_buff*) ;
 int * VAR_13 ;
 int FUNC_12 (struct ppp*,struct sk_buff*,int) ;
 struct sk_buff* FUNC_13 (struct ppp*,struct sk_buff*) ;
 int FUNC_14 (struct ppp*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*,int ,int ,int) ;
 struct sk_buff* FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (struct sk_buff*,int) ;
 scalar_t__ FUNC_21 (struct sk_buff*,int) ;
 int FUNC_22 (struct sk_buff*,int) ;
 int FUNC_23 (TYPE_3__*,struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*,int) ;
 int FUNC_25 (struct sk_buff*) ;
 int FUNC_26 (struct sk_buff*,int) ;
 int FUNC_27 (struct sk_buff*) ;
 int FUNC_28 (struct sk_buff*,int) ;
 scalar_t__ FUNC_29 (struct sk_buff*,int ) ;
 int FUNC_30 (int ,int ,int) ;
 int FUNC_31 (int ,int ,int) ;
 int FUNC_32 (int *) ;

__attribute__((used)) static void
FUNC_33(struct ppp *VAR_14, struct sk_buff *VAR_15)
{
 struct sk_buff *VAR_16;
 int VAR_17, VAR_18, VAR_19;






 if (VAR_14->rc_state && (VAR_14->rstate & VAR_9) &&
     (VAR_14->rstate & (VAR_8 | VAR_7)) == 0)
  VAR_15 = FUNC_13(VAR_14, VAR_15);

 if (VAR_14->flags & VAR_10 && VAR_14->rstate & VAR_8)
  goto err;




 VAR_17 = FUNC_1(VAR_15);
 switch (VAR_17) {
 case 129:

  if (!VAR_14->vj || (VAR_14->flags & VAR_11))
   goto err;

  if (FUNC_27(VAR_15) < 124 || FUNC_17(VAR_15)) {

   VAR_16 = FUNC_4(VAR_15->len + 128);
   if (!VAR_16) {
    FUNC_9(VAR_14->dev, "PPP: no memory "
        "(VJ decomp)\n");
    goto err;
   }
   FUNC_24(VAR_16, 2);
   FUNC_18(VAR_15, 0, FUNC_22(VAR_16, VAR_15->len), VAR_15->len);
   FUNC_3(VAR_15);
   VAR_15 = VAR_16;
  }
  else
   VAR_15->ip_summed = VAR_0;

  VAR_18 = FUNC_31(VAR_14->vj, VAR_15->data + 2, VAR_15->len - 2);
  if (VAR_18 <= 0) {
   FUNC_10(VAR_3, VAR_14->dev,
          "PPP: VJ decompression error\n");
   goto err;
  }
  VAR_18 += 2;
  if (VAR_18 > VAR_15->len)
   FUNC_22(VAR_15, VAR_18 - VAR_15->len);
  else if (VAR_18 < VAR_15->len)
   FUNC_28(VAR_15, VAR_18);
  VAR_17 = VAR_5;
  break;

 case 128:
  if (!VAR_14->vj || (VAR_14->flags & VAR_11))
   goto err;




  if (!FUNC_16(VAR_15, VAR_15->len))
   goto err;

  if (FUNC_30(VAR_14->vj, VAR_15->data + 2, VAR_15->len - 2) <= 0) {
   FUNC_9(VAR_14->dev, "PPP: VJ uncompressed error\n");
   goto err;
  }
  VAR_17 = VAR_5;
  break;

 case 130:
  FUNC_12(VAR_14, VAR_15, 1);
  break;
 }

 ++VAR_14->stats64.rx_packets;
 VAR_14->stats64.rx_bytes += VAR_15->len - 2;

 VAR_19 = FUNC_15(VAR_17);
 if (VAR_19 < 0) {

  FUNC_23(&VAR_14->file.rq, VAR_15);

  while (VAR_14->file.rq.qlen > VAR_6 &&
         (VAR_15 = FUNC_19(&VAR_14->file.rq)))
   FUNC_7(VAR_15);

  FUNC_32(&VAR_14->file.rwait);

 } else {
   VAR_14->last_recv = VAR_12;

  if ((VAR_14->dev->flags & VAR_2) == 0 ||
      VAR_14->npmode[VAR_19] != VAR_4) {
   FUNC_7(VAR_15);
  } else {

   FUNC_20(VAR_15, 2);
   VAR_15->dev = VAR_14->dev;
   VAR_15->protocol = FUNC_6(VAR_13[VAR_19]);
   FUNC_25(VAR_15);
   FUNC_26(VAR_15, !FUNC_8(VAR_14->ppp_net,
            FUNC_5(VAR_14->dev)));
   FUNC_11(VAR_15);
  }
 }
 return;

 err:
 FUNC_7(VAR_15);
 FUNC_14(VAR_14);
}
