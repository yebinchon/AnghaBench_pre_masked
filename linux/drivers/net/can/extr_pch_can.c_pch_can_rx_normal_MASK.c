
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct pch_can_priv {TYPE_2__* regs; TYPE_3__* ndev; } ;
struct net_device_stats {int rx_bytes; int rx_packets; } ;
struct net_device {int dummy; } ;
struct can_frame {int can_id; int can_dlc; int* data; } ;
typedef int id2 ;
typedef int canid_t ;
struct TYPE_6__ {struct net_device_stats stats; } ;
struct TYPE_5__ {TYPE_1__* ifregs; } ;
struct TYPE_4__ {int * data; int mcont; int id1; int id2; int creq; int cmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sk_buff* FUNC_0 (TYPE_3__*,struct can_frame**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct net_device*,char*) ;
 struct pch_can_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (struct net_device*,int) ;
 int FUNC_10 (struct pch_can_priv*,int) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_9, u32 VAR_10, int VAR_11)
{
 u32 VAR_12;
 canid_t VAR_13;
 int VAR_14 = 0;
 struct sk_buff *VAR_15;
 struct can_frame *VAR_16;
 struct pch_can_priv *VAR_17 = FUNC_6(VAR_9);
 struct net_device_stats *VAR_18 = &(VAR_17->ndev->stats);
 int VAR_19;
 u32 VAR_20;
 u16 VAR_21;

 do {

  FUNC_4(VAR_3, &VAR_17->regs->ifregs[0].cmask);
  FUNC_8(&VAR_17->regs->ifregs[0].creq, VAR_10);


  VAR_12 = FUNC_3(&VAR_17->regs->ifregs[0].mcont);

  if (VAR_12 & VAR_6)
   break;


  if (VAR_12 & VAR_7) {
   FUNC_9(VAR_9, VAR_10);
   VAR_14++;
   VAR_11--;
   VAR_10++;
   continue;
  } else if (!(VAR_12 & VAR_8)) {
   VAR_10++;
   continue;
  }

  VAR_15 = FUNC_0(VAR_17->ndev, &VAR_16);
  if (!VAR_15) {
   FUNC_5(VAR_9, "alloc_can_skb Failed\n");
   return VAR_14;
  }


  VAR_20 = FUNC_3(&VAR_17->regs->ifregs[0].id2);
  if (VAR_20 & VAR_5) {
   VAR_13 = (FUNC_3(&VAR_17->regs->ifregs[0].id1) & 0xffff);
   VAR_13 |= (((VAR_20) & 0x1fff) << 16);
   VAR_16->can_id = VAR_13 | VAR_0;
  } else {
   VAR_13 = (VAR_20 >> 2) & VAR_2;
   VAR_16->can_id = VAR_13;
  }

  if (VAR_20 & VAR_4)
   VAR_16->can_id |= VAR_1;

  VAR_16->can_dlc = FUNC_1((FUNC_3(&VAR_17->regs->
          ifregs[0].mcont)) & 0xF);

  for (VAR_19 = 0; VAR_19 < VAR_16->can_dlc; VAR_19 += 2) {
   VAR_21 = FUNC_2(&VAR_17->regs->ifregs[0].data[VAR_19 / 2]);
   VAR_16->data[VAR_19] = VAR_21;
   VAR_16->data[VAR_19 + 1] = VAR_21 >> 8;
  }

  FUNC_7(VAR_15);
  VAR_14++;
  VAR_18->rx_packets++;
  VAR_11--;
  VAR_18->rx_bytes += VAR_16->can_dlc;

  FUNC_10(VAR_17, VAR_10);
  VAR_10++;
 } while (VAR_11 > 0);

 return VAR_14;
}
