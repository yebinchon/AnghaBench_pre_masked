
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ head; } ;
struct l2t_entry {int vlan; } ;
struct fw_flowc_wr {TYPE_1__* mnemval; void* flowid_len16; void* op_to_nparams; } ;
struct cxgbi_sock {int tx_chan; int rss_qid; int snd_nxt; int rcv_nxt; int snd_win; int advmss; size_t port_id; TYPE_2__* cdev; int tid; scalar_t__ l2t; } ;
struct TYPE_4__ {int pfvf; int * ports; } ;
struct TYPE_3__ {int val; scalar_t__ mnemonic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct sk_buff* FUNC_4 (int,int ,int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ,struct sk_buff*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int,char*,struct cxgbi_sock*,int ,int ,int,int,int,int,int,int) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (struct sk_buff*,int ,size_t) ;
 int FUNC_11 (int*,int*) ;

__attribute__((used)) static inline int FUNC_12(struct cxgbi_sock *VAR_18)
{
 struct sk_buff *VAR_19;
 struct fw_flowc_wr *VAR_20;
 int VAR_21, VAR_22, VAR_23;




 VAR_22 = FUNC_11(&VAR_21, &VAR_23);
 VAR_19 = FUNC_4(VAR_23, 0, VAR_15);
 VAR_20 = (struct fw_flowc_wr *)VAR_19->head;
 VAR_20->op_to_nparams =
  FUNC_7(FUNC_3(VAR_14) | FUNC_0(VAR_21));
 VAR_20->flowid_len16 =
  FUNC_7(FUNC_2(VAR_22) | FUNC_1(VAR_18->tid));
 VAR_20->mnemval[0].mnemonic = VAR_8;
 VAR_20->mnemval[0].val = FUNC_7(VAR_18->cdev->pfvf);
 VAR_20->mnemval[1].mnemonic = VAR_4;
 VAR_20->mnemval[1].val = FUNC_7(VAR_18->tx_chan);
 VAR_20->mnemval[2].mnemonic = VAR_9;
 VAR_20->mnemval[2].val = FUNC_7(VAR_18->tx_chan);
 VAR_20->mnemval[3].mnemonic = VAR_6;
 VAR_20->mnemval[3].val = FUNC_7(VAR_18->rss_qid);
 VAR_20->mnemval[4].mnemonic = VAR_12;
 VAR_20->mnemval[4].val = FUNC_7(VAR_18->snd_nxt);
 VAR_20->mnemval[5].mnemonic = VAR_10;
 VAR_20->mnemval[5].val = FUNC_7(VAR_18->rcv_nxt);
 VAR_20->mnemval[6].mnemonic = VAR_11;
 VAR_20->mnemval[6].val = FUNC_7(VAR_18->snd_win);
 VAR_20->mnemval[7].mnemonic = VAR_7;
 VAR_20->mnemval[7].val = FUNC_7(VAR_18->advmss);
 VAR_20->mnemval[8].mnemonic = 0;
 VAR_20->mnemval[8].val = 0;
 VAR_20->mnemval[8].mnemonic = VAR_13;
 VAR_20->mnemval[8].val = 16384;
 FUNC_10(VAR_19, VAR_1, VAR_18->port_id);

 FUNC_8(1 << VAR_3 | 1 << VAR_2,
  "csk 0x%p, tid 0x%x, %u,%u,%u,%u,%u,%u,%u.\n",
  VAR_18, VAR_18->tid, 0, VAR_18->tx_chan, VAR_18->rss_qid,
  VAR_18->snd_nxt, VAR_18->rcv_nxt, VAR_18->snd_win,
  VAR_18->advmss);

 FUNC_6(VAR_18->cdev->ports[VAR_18->port_id], VAR_19);

 return VAR_22;
}
