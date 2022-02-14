
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_5__ {int pki_ih3; } ;
struct TYPE_6__ {TYPE_1__ cmd3; } ;
struct octeon_soft_command {scalar_t__ datasize; int dmadptr; struct octeon_soft_command* callback_arg; int callback; TYPE_2__ cmd; int iq_no; struct sk_buff* ctxptr; int virtdptr; } ;
struct octeon_instr_pki_ih3 {int tagtype; } ;
struct octeon_device {TYPE_3__* pci_dev; } ;
struct net_device {int dummy; } ;
struct lio_vf_rep_desc {int ifidx; struct octeon_device* oct; int ifstate; struct net_device* parent_ndev; } ;
struct lio {int txq; } ;
typedef int netdev_tx_t ;
struct TYPE_8__ {scalar_t__ nr_frags; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 struct lio* FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,scalar_t__,int ) ;
 int VAR_9 ;
 struct lio_vf_rep_desc* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct octeon_device*,int ,int,int ) ;
 int FUNC_11 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_12 (struct octeon_device*,struct octeon_soft_command*,int ,int ,int ,int ,int ) ;
 int FUNC_13 (struct octeon_device*,struct octeon_soft_command*) ;
 scalar_t__ FUNC_14 (struct octeon_device*,int ) ;
 TYPE_4__* FUNC_15 (struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t
FUNC_16(struct sk_buff *VAR_10, struct net_device *VAR_11)
{
 struct lio_vf_rep_desc *VAR_12 = FUNC_7(VAR_11);
 struct net_device *VAR_13 = VAR_12->parent_ndev;
 struct octeon_device *VAR_14 = VAR_12->oct;
 struct octeon_instr_pki_ih3 *VAR_15;
 struct octeon_soft_command *VAR_16;
 struct lio *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_0(VAR_13);

 if (!(FUNC_1(&VAR_12->ifstate) & VAR_3) ||
     VAR_10->len <= 0)
  goto xmit_failed;

 if (FUNC_14(VAR_12->oct, VAR_17->txq)) {
  FUNC_2(&VAR_14->pci_dev->dev, "VF rep: Device IQ full\n");
  FUNC_8(VAR_11);
  return VAR_4;
 }

 VAR_16 = (struct octeon_soft_command *)
  FUNC_10(VAR_14, 0, 16, 0);
 if (!VAR_16) {
  FUNC_2(&VAR_14->pci_dev->dev, "VF rep: Soft command alloc failed\n");
  goto xmit_failed;
 }


 if (FUNC_15(VAR_10)->nr_frags != 0) {
  FUNC_2(&VAR_14->pci_dev->dev, "VF rep: nr_frags != 0. Dropping packet\n");
  FUNC_11(VAR_14, VAR_16);
  goto xmit_failed;
 }

 VAR_16->dmadptr = FUNC_4(&VAR_14->pci_dev->dev,
         VAR_10->data, VAR_10->len, VAR_0);
 if (FUNC_5(&VAR_14->pci_dev->dev, VAR_16->dmadptr)) {
  FUNC_2(&VAR_14->pci_dev->dev, "VF rep: DMA mapping failed\n");
  FUNC_11(VAR_14, VAR_16);
  goto xmit_failed;
 }

 VAR_16->virtdptr = VAR_10->data;
 VAR_16->datasize = VAR_10->len;
 VAR_16->ctxptr = VAR_10;
 VAR_16->iq_no = VAR_17->txq;

 FUNC_12(VAR_14, VAR_16, VAR_6, VAR_7,
        VAR_12->ifidx, 0, 0);
 VAR_15 = (struct octeon_instr_pki_ih3 *)&VAR_16->cmd.cmd3.pki_ih3;
 VAR_15->tagtype = VAR_8;

 VAR_16->callback = VAR_9;
 VAR_16->callback_arg = VAR_16;

 VAR_18 = FUNC_13(VAR_14, VAR_16);
 if (VAR_18 == VAR_1) {
  FUNC_6(&VAR_14->pci_dev->dev, VAR_16->dmadptr,
     VAR_16->datasize, VAR_0);
  FUNC_11(VAR_14, VAR_16);
  goto xmit_failed;
 }

 if (VAR_18 == VAR_2)
  FUNC_8(VAR_11);

 FUNC_9(VAR_11);

 return VAR_5;

xmit_failed:
 FUNC_3(VAR_10);

 return VAR_5;
}
