
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct port_info {int smt_idx; } ;
struct net_device {int mtu; } ;
struct neighbour {int nud_state; TYPE_2__* dev; } ;
struct in6_addr {int dummy; } ;
struct dst_entry {int dummy; } ;
struct cxgbit_sock {int txq_idx; int ctrlq_idx; int port_id; int rss_qid; int smac_idx; void* tx_chan; int mtu; void* l2t; scalar_t__ dcb_priority; } ;
struct TYPE_3__ {int ntxq; int nchan; int nrxq; int nports; int * rxq_ids; int l2t; } ;
struct cxgbit_device {TYPE_1__ lldi; int ** selectq; } ;
typedef int __u8 ;
typedef int __be32 ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 void* FUNC_1 (int ,struct neighbour*,struct net_device*,scalar_t__) ;
 void* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*,int) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 struct net_device* FUNC_6 (TYPE_2__*) ;
 struct net_device* FUNC_7 (int ) ;
 struct net_device* FUNC_8 (struct in6_addr*) ;
 int FUNC_9 (struct cxgbit_sock*,struct port_info*) ;
 int FUNC_10 (struct dst_entry*) ;
 struct neighbour* FUNC_11 (struct dst_entry*,int *) ;
 int FUNC_12 (struct neighbour*,int *) ;
 int FUNC_13 (struct neighbour*) ;
 scalar_t__ FUNC_14 (struct net_device*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;

__attribute__((used)) static int
FUNC_17(struct cxgbit_sock *VAR_5, int VAR_6, __u8 *VAR_7,
      u16 VAR_8, struct dst_entry *VAR_9,
      struct cxgbit_device *VAR_10)
{
 struct neighbour *VAR_11;
 int VAR_12, VAR_13;
 struct net_device *VAR_14;
 u16 VAR_15, VAR_16;




 VAR_11 = FUNC_11(VAR_9, VAR_7);
 if (!VAR_11)
  return -VAR_1;

 FUNC_15();
 if (!(VAR_11->nud_state & VAR_4))
  FUNC_12(VAR_11, ((void*)0));

 VAR_12 = -VAR_2;
 if (VAR_11->dev->flags & VAR_3) {
  if (VAR_6 == 4)
   VAR_14 = FUNC_7(*(__be32 *)VAR_7);
  else if (FUNC_0(VAR_0))
   VAR_14 = FUNC_8((struct in6_addr *)VAR_7);
  else
   VAR_14 = ((void*)0);

  if (!VAR_14) {
   VAR_12 = -VAR_1;
   goto out;
  }

  VAR_5->l2t = FUNC_1(VAR_10->lldi.l2t,
      VAR_11, VAR_14, 0);
  if (!VAR_5->l2t)
   goto out;
  VAR_5->mtu = VAR_14->mtu;
  VAR_5->tx_chan = FUNC_2(VAR_14);
  VAR_5->smac_idx =
          ((struct port_info *)FUNC_14(VAR_14))->smt_idx;
  VAR_13 = VAR_10->lldi.ntxq /
   VAR_10->lldi.nchan;
  VAR_5->txq_idx = FUNC_3(VAR_14) * VAR_13;
  VAR_13 = VAR_10->lldi.nrxq /
   VAR_10->lldi.nchan;
  VAR_5->ctrlq_idx = FUNC_3(VAR_14);
  VAR_5->rss_qid = VAR_10->lldi.rxq_ids[
    FUNC_3(VAR_14) * VAR_13];
  VAR_5->port_id = FUNC_3(VAR_14);
  FUNC_9(VAR_5,
          (struct port_info *)FUNC_14(VAR_14));
 } else {
  VAR_14 = FUNC_6(VAR_11->dev);
  if (!VAR_14) {
   VAR_12 = -VAR_1;
   goto out;
  }
  VAR_5->l2t = FUNC_1(VAR_10->lldi.l2t, VAR_11, VAR_14, 0);

  if (!VAR_5->l2t)
   goto out;
  VAR_16 = FUNC_3(VAR_14);
  VAR_5->mtu = FUNC_10(VAR_9);
  VAR_5->tx_chan = FUNC_2(VAR_14);
  VAR_5->smac_idx =
          ((struct port_info *)FUNC_14(VAR_14))->smt_idx;
  VAR_13 = VAR_10->lldi.ntxq /
   VAR_10->lldi.nports;
  VAR_5->txq_idx = (VAR_16 * VAR_13) +
    (VAR_10->selectq[VAR_16][0]++ % VAR_13);
  VAR_5->ctrlq_idx = FUNC_3(VAR_14);
  VAR_13 = VAR_10->lldi.nrxq /
   VAR_10->lldi.nports;
  VAR_15 = (VAR_16 * VAR_13) +
    (VAR_10->selectq[VAR_16][1]++ % VAR_13);
  VAR_5->rss_qid = VAR_10->lldi.rxq_ids[VAR_15];
  VAR_5->port_id = VAR_16;
  FUNC_9(VAR_5,
          (struct port_info *)FUNC_14(VAR_14));
 }
 VAR_12 = 0;
out:
 FUNC_16();
 FUNC_13(VAR_11);
 return VAR_12;
}
