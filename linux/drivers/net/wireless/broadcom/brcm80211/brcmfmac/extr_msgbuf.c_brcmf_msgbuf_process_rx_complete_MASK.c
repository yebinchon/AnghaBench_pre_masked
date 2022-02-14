
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int protocol; } ;
struct TYPE_4__ {int ifidx; int request_id; } ;
struct msgbuf_rx_complete {TYPE_2__ msg; int flags; int data_len; int data_offset; } ;
struct brcmf_pub {struct brcmf_if* mon_if; TYPE_1__* bus_if; } ;
struct brcmf_msgbuf {int rx_dataoffset; struct brcmf_pub* drvr; int rx_pktids; } ;
struct brcmf_if {int ndev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmf_pub*,char*,...) ;
 struct brcmf_if* FUNC_1 (struct brcmf_pub*,int ) ;
 struct sk_buff* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct brcmf_msgbuf*,int) ;
 int FUNC_4 (struct brcmf_if*,struct sk_buff*) ;
 int FUNC_5 (struct brcmf_if*,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_12(struct brcmf_msgbuf *VAR_2, void *VAR_3)
{
 struct brcmf_pub *VAR_4 = VAR_2->drvr;
 struct msgbuf_rx_complete *VAR_5;
 struct sk_buff *VAR_6;
 u16 VAR_7;
 u16 VAR_8;
 u16 VAR_9;
 u32 VAR_10;
 struct brcmf_if *VAR_11;

 FUNC_3(VAR_2, 1);

 VAR_5 = (struct msgbuf_rx_complete *)VAR_3;
 VAR_7 = FUNC_8(VAR_5->data_offset);
 VAR_8 = FUNC_8(VAR_5->data_len);
 VAR_10 = FUNC_9(VAR_5->msg.request_id);
 VAR_9 = FUNC_8(VAR_5->flags);

 VAR_6 = FUNC_2(VAR_2->drvr->bus_if->dev,
         VAR_2->rx_pktids, VAR_10);
 if (!VAR_6)
  return;

 if (VAR_7)
  FUNC_10(VAR_6, VAR_7);
 else if (VAR_2->rx_dataoffset)
  FUNC_10(VAR_6, VAR_2->rx_dataoffset);

 FUNC_11(VAR_6, VAR_8);

 if ((VAR_9 & VAR_1) ==
     VAR_0) {
  VAR_11 = VAR_2->drvr->mon_if;

  if (!VAR_11) {
   FUNC_0(VAR_4, "Received unexpected monitor pkt\n");
   FUNC_6(VAR_6);
   return;
  }

  FUNC_4(VAR_11, VAR_6);
  return;
 }

 VAR_11 = FUNC_1(VAR_2->drvr, VAR_5->msg.ifidx);
 if (!VAR_11 || !VAR_11->ndev) {
  FUNC_0(VAR_4, "Received pkt for invalid ifidx %d\n",
    VAR_5->msg.ifidx);
  FUNC_6(VAR_6);
  return;
 }

 VAR_6->protocol = FUNC_7(VAR_6, VAR_11->ndev);
 FUNC_5(VAR_11, VAR_6);
}
