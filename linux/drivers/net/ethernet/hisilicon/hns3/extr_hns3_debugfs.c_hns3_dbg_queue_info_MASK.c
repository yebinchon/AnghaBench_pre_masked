
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hns3_nic_ring_data {struct hns3_enet_ring* ring; } ;
struct hns3_nic_priv {int state; struct hns3_nic_ring_data* ring_data; } ;
struct hns3_enet_ring {TYPE_2__* tqp; } ;
struct TYPE_4__ {scalar_t__ num_tqps; } ;
struct hnae3_handle {TYPE_3__* pdev; TYPE_1__ kinfo; struct hns3_nic_priv* priv; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {scalar_t__ io_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (char const*,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct hnae3_handle *VAR_22,
          const char *VAR_23)
{
 struct hns3_nic_priv *VAR_24 = VAR_22->priv;
 struct hns3_nic_ring_data *VAR_25;
 struct hns3_enet_ring *VAR_26;
 u32 VAR_27, VAR_28;
 u32 VAR_29, VAR_30;
 u32 VAR_31, VAR_32 = 0;
 int VAR_33;

 if (!VAR_24->ring_data) {
  FUNC_0(&VAR_22->pdev->dev, "ring_data is NULL\n");
  return -VAR_0;
 }

 VAR_30 = VAR_22->kinfo.num_tqps;
 VAR_33 = FUNC_2(&VAR_23[11], 0, &VAR_29);
 if (VAR_33)
  VAR_29 = 0;
 else
  VAR_30 = VAR_29 + 1;

 FUNC_1(&VAR_22->pdev->dev, "queue info\n");

 if (VAR_29 >= VAR_22->kinfo.num_tqps) {
  FUNC_0(&VAR_22->pdev->dev,
   "Queue number(%u) is out of range(0-%u)\n", VAR_29,
   VAR_22->kinfo.num_tqps - 1);
  return -VAR_1;
 }

 VAR_25 = VAR_24->ring_data;
 for (VAR_32 = VAR_29; VAR_32 < VAR_30; VAR_32++) {




  if (!FUNC_4(VAR_3, &VAR_24->state) ||
      FUNC_4(VAR_4, &VAR_24->state))
   return -VAR_2;

  VAR_26 = VAR_25[(u32)(VAR_32 + VAR_22->kinfo.num_tqps)].ring;
  VAR_28 = FUNC_3(VAR_26->tqp->io_base +
        VAR_5);
  VAR_27 = FUNC_3(VAR_26->tqp->io_base +
        VAR_6);
  FUNC_1(&VAR_22->pdev->dev, "RX(%d) BASE ADD: 0x%08x%08x\n", VAR_32,
    VAR_28, VAR_27);

  VAR_31 = FUNC_3(VAR_26->tqp->io_base +
          VAR_8);
  FUNC_1(&VAR_22->pdev->dev, "RX(%d) RING BD NUM: %u\n", VAR_32, VAR_31);

  VAR_31 = FUNC_3(VAR_26->tqp->io_base +
          VAR_7);
  FUNC_1(&VAR_22->pdev->dev, "RX(%d) RING BD LEN: %u\n", VAR_32, VAR_31);

  VAR_31 = FUNC_3(VAR_26->tqp->io_base +
          VAR_12);
  FUNC_1(&VAR_22->pdev->dev, "RX(%d) RING TAIL: %u\n", VAR_32, VAR_31);

  VAR_31 = FUNC_3(VAR_26->tqp->io_base +
          VAR_10);
  FUNC_1(&VAR_22->pdev->dev, "RX(%d) RING HEAD: %u\n", VAR_32, VAR_31);

  VAR_31 = FUNC_3(VAR_26->tqp->io_base +
          VAR_9);
  FUNC_1(&VAR_22->pdev->dev, "RX(%d) RING FBDNUM: %u\n", VAR_32, VAR_31);

  VAR_31 = FUNC_3(VAR_26->tqp->io_base +
          VAR_11);
  FUNC_1(&VAR_22->pdev->dev, "RX(%d) RING PKTNUM: %u\n", VAR_32, VAR_31);

  VAR_26 = VAR_25[VAR_32].ring;
  VAR_28 = FUNC_3(VAR_26->tqp->io_base +
        VAR_13);
  VAR_27 = FUNC_3(VAR_26->tqp->io_base +
        VAR_14);
  FUNC_1(&VAR_22->pdev->dev, "TX(%d) BASE ADD: 0x%08x%08x\n", VAR_32,
    VAR_28, VAR_27);

  VAR_31 = FUNC_3(VAR_26->tqp->io_base +
          VAR_15);
  FUNC_1(&VAR_22->pdev->dev, "TX(%d) RING BD NUM: %u\n", VAR_32, VAR_31);

  VAR_31 = FUNC_3(VAR_26->tqp->io_base +
          VAR_21);
  FUNC_1(&VAR_22->pdev->dev, "TX(%d) RING TC: %u\n", VAR_32, VAR_31);

  VAR_31 = FUNC_3(VAR_26->tqp->io_base +
          VAR_20);
  FUNC_1(&VAR_22->pdev->dev, "TX(%d) RING TAIL: %u\n", VAR_32, VAR_31);

  VAR_31 = FUNC_3(VAR_26->tqp->io_base +
          VAR_17);
  FUNC_1(&VAR_22->pdev->dev, "TX(%d) RING HEAD: %u\n", VAR_32, VAR_31);

  VAR_31 = FUNC_3(VAR_26->tqp->io_base +
          VAR_16);
  FUNC_1(&VAR_22->pdev->dev, "TX(%d) RING FBDNUM: %u\n", VAR_32, VAR_31);

  VAR_31 = FUNC_3(VAR_26->tqp->io_base +
          VAR_18);
  FUNC_1(&VAR_22->pdev->dev, "TX(%d) RING OFFSET: %u\n", VAR_32, VAR_31);

  VAR_31 = FUNC_3(VAR_26->tqp->io_base +
          VAR_19);
  FUNC_1(&VAR_22->pdev->dev, "TX(%d) RING PKTNUM: %u\n\n", VAR_32,
    VAR_31);
 }

 return 0;
}
