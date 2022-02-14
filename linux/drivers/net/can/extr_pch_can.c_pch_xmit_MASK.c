
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct pch_can_priv {int tx_obj; TYPE_2__* regs; } ;
struct net_device {int dummy; } ;
struct can_frame {int can_id; int can_dlc; int* data; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {TYPE_1__* ifregs; int treq2; } ;
struct TYPE_3__ {int creq; int mcont; int * data; int id2; int id1; int cmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;
 struct pch_can_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static netdev_tx_t FUNC_9(struct sk_buff *VAR_15, struct net_device *VAR_16)
{
 struct pch_can_priv *VAR_17 = FUNC_5(VAR_16);
 struct can_frame *VAR_18 = (struct can_frame *)VAR_15->data;
 int VAR_19;
 int VAR_20;
 u32 VAR_21;

 if (FUNC_0(VAR_16, VAR_15))
  return VAR_3;

 VAR_19 = VAR_17->tx_obj;
 if (VAR_17->tx_obj == VAR_13) {
  if (FUNC_2(&VAR_17->regs->treq2) & VAR_12)
   FUNC_6(VAR_16);

  VAR_17->tx_obj = VAR_14;
 } else {
  VAR_17->tx_obj++;
 }


 FUNC_7(&VAR_17->regs->ifregs[1].cmask, VAR_4);


 if (VAR_18->can_id & VAR_0) {
  FUNC_4(VAR_18->can_id & 0xffff, &VAR_17->regs->ifregs[1].id1);
  VAR_21 = ((VAR_18->can_id >> 16) & 0x1fff) | VAR_6;
 } else {
  FUNC_4(0, &VAR_17->regs->ifregs[1].id1);
  VAR_21 = (VAR_18->can_id & VAR_2) << 2;
 }

 VAR_21 |= VAR_7;


 if (!(VAR_18->can_id & VAR_1))
  VAR_21 |= VAR_5;

 FUNC_4(VAR_21, &VAR_17->regs->ifregs[1].id2);


 for (VAR_20 = 0; VAR_20 < VAR_18->can_dlc; VAR_20 += 2) {
  FUNC_3(VAR_18->data[VAR_20] | (VAR_18->data[VAR_20 + 1] << 8),
     &VAR_17->regs->ifregs[1].data[VAR_20 / 2]);
 }

 FUNC_1(VAR_15, VAR_16, VAR_19 - VAR_11 - 1);


 FUNC_4(VAR_18->can_dlc | VAR_8 | VAR_10 |
    VAR_9, &VAR_17->regs->ifregs[1].mcont);

 FUNC_8(&VAR_17->regs->ifregs[1].creq, VAR_19);

 return VAR_3;
}
