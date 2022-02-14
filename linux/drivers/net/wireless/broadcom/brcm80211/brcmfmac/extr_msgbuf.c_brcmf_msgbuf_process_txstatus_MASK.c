
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {int ifidx; int request_id; } ;
struct TYPE_5__ {int flow_ring_id; } ;
struct msgbuf_tx_status {TYPE_3__ msg; TYPE_1__ compl_hdr; } ;
struct brcmf_msgbuf {TYPE_4__* drvr; struct brcmf_commonring** flowrings; int txstatus_done_map; int tx_pktids; } ;
struct brcmf_commonring {int outstanding_tx; } ;
struct TYPE_8__ {TYPE_2__* bus_if; } ;
struct TYPE_6__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 struct sk_buff* FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,struct sk_buff*,int) ;
 size_t FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (size_t,int ) ;

__attribute__((used)) static void
FUNC_7(struct brcmf_msgbuf *VAR_1, void *VAR_2)
{
 struct brcmf_commonring *VAR_3;
 struct msgbuf_tx_status *VAR_4;
 u32 VAR_5;
 struct sk_buff *VAR_6;
 u16 VAR_7;

 VAR_4 = (struct msgbuf_tx_status *)VAR_2;
 VAR_5 = FUNC_5(VAR_4->msg.request_id) - 1;
 VAR_7 = FUNC_4(VAR_4->compl_hdr.flow_ring_id);
 VAR_7 -= VAR_0;
 VAR_6 = FUNC_2(VAR_1->drvr->bus_if->dev,
         VAR_1->tx_pktids, VAR_5);
 if (!VAR_6)
  return;

 FUNC_6(VAR_7, VAR_1->txstatus_done_map);
 VAR_3 = VAR_1->flowrings[VAR_7];
 FUNC_0(&VAR_3->outstanding_tx);

 FUNC_3(FUNC_1(VAR_1->drvr, VAR_4->msg.ifidx),
    VAR_6, 1);
}
