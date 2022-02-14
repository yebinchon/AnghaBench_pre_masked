
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
struct msgbuf_rx_event {TYPE_2__ msg; int event_data_len; } ;
struct brcmf_pub {TYPE_1__* bus_if; } ;
struct brcmf_msgbuf {struct brcmf_pub* drvr; scalar_t__ rx_dataoffset; int rx_pktids; scalar_t__ cur_eventbuf; } ;
struct brcmf_if {int drvr; int ndev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct brcmf_pub*,char*,int ) ;
 int FUNC_1 (int ,struct sk_buff*,int ) ;
 struct brcmf_if* FUNC_2 (struct brcmf_pub*,int ) ;
 struct sk_buff* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct brcmf_msgbuf*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_11(struct brcmf_msgbuf *VAR_0, void *VAR_1)
{
 struct brcmf_pub *VAR_2 = VAR_0->drvr;
 struct msgbuf_rx_event *VAR_3;
 u32 VAR_4;
 u16 VAR_5;
 struct sk_buff *VAR_6;
 struct brcmf_if *VAR_7;

 VAR_3 = (struct msgbuf_rx_event *)VAR_1;
 VAR_4 = FUNC_8(VAR_3->msg.request_id);
 VAR_5 = FUNC_7(VAR_3->event_data_len);

 if (VAR_0->cur_eventbuf)
  VAR_0->cur_eventbuf--;
 FUNC_4(VAR_0);

 VAR_6 = FUNC_3(VAR_0->drvr->bus_if->dev,
         VAR_0->rx_pktids, VAR_4);
 if (!VAR_6)
  return;

 if (VAR_0->rx_dataoffset)
  FUNC_9(VAR_6, VAR_0->rx_dataoffset);

 FUNC_10(VAR_6, VAR_5);

 VAR_7 = FUNC_2(VAR_0->drvr, VAR_3->msg.ifidx);
 if (!VAR_7 || !VAR_7->ndev) {
  FUNC_0(VAR_2, "Received pkt for invalid ifidx %d\n",
    VAR_3->msg.ifidx);
  goto exit;
 }

 VAR_6->protocol = FUNC_6(VAR_6, VAR_7->ndev);

 FUNC_1(VAR_7->drvr, VAR_6, 0);

exit:
 FUNC_5(VAR_6);
}
