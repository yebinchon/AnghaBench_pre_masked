
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ state; } ;
struct ti_hecc_priv {scalar_t__ tx_tail; scalar_t__ tx_head; scalar_t__ use_hecc1int; int offload; int mbx_lock; TYPE_1__ can; int ndev; } ;
struct net_device_stats {int tx_packets; int tx_bytes; } ;
struct net_device {struct net_device_stats stats; } ;
typedef int irqreturn_t ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;
 scalar_t__ FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct ti_hecc_priv*) ;
 int FUNC_6 (struct ti_hecc_priv*,int ,int) ;
 int FUNC_7 (struct ti_hecc_priv*,int ) ;
 int FUNC_8 (struct ti_hecc_priv*,int) ;
 int FUNC_9 (struct ti_hecc_priv*,int ,int) ;
 int FUNC_10 (int ,char*) ;
 struct ti_hecc_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (struct net_device*,int,int) ;
 int FUNC_16 (struct net_device*,int,int) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static irqreturn_t FUNC_18(int VAR_23, void *VAR_24)
{
 struct net_device *VAR_25 = (struct net_device *)VAR_24;
 struct ti_hecc_priv *VAR_26 = FUNC_11(VAR_25);
 struct net_device_stats *VAR_27 = &VAR_25->stats;
 u32 VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
 unsigned long VAR_33, VAR_34;
 u32 VAR_35 = 0;

 VAR_30 = FUNC_7(VAR_26,
          VAR_26->use_hecc1int ?
          VAR_8 : VAR_7);

 if (!VAR_30)
  return VAR_22;

 VAR_31 = FUNC_7(VAR_26, VAR_5);
 if (FUNC_17(VAR_31 & VAR_6))
  FUNC_16(VAR_25, VAR_30, VAR_31);

 if (FUNC_17(VAR_30 & VAR_14)) {
  enum can_state VAR_36, VAR_37;
  u32 VAR_38 = FUNC_7(VAR_26, VAR_16);
  u32 VAR_39 = FUNC_7(VAR_26, VAR_19);

  if (VAR_30 & VAR_12) {
   VAR_35 |= VAR_12;
   VAR_36 = VAR_38 >= VAR_39 ? VAR_4 : 0;
   VAR_37 = VAR_38 <= VAR_39 ? VAR_4 : 0;
   FUNC_10(VAR_26->ndev, "Error Warning interrupt\n");
   FUNC_15(VAR_25, VAR_36, VAR_37);
  }

  if (VAR_30 & VAR_10) {
   VAR_35 |= VAR_10;
   VAR_36 = VAR_38 >= VAR_39 ? VAR_3 : 0;
   VAR_37 = VAR_38 <= VAR_39 ? VAR_3 : 0;
   FUNC_10(VAR_26->ndev, "Error passive interrupt\n");
   FUNC_15(VAR_25, VAR_36, VAR_37);
  }

  if (VAR_30 & VAR_9) {
   VAR_35 |= VAR_9;
   VAR_36 = VAR_1;
   VAR_37 = VAR_1;
   FUNC_10(VAR_26->ndev, "Bus off interrupt\n");


   FUNC_9(VAR_26, VAR_13, 0);
   FUNC_1(VAR_25);
   FUNC_15(VAR_25, VAR_36, VAR_37);
  }
 } else if (FUNC_17(VAR_26->can.state != VAR_2)) {
  enum can_state VAR_40, VAR_41, VAR_42;
  u32 VAR_43 = FUNC_7(VAR_26, VAR_16);
  u32 VAR_44 = FUNC_7(VAR_26, VAR_19);

  if (VAR_43 >= 128 || VAR_44 >= 128)
   VAR_40 = VAR_3;
  else if (VAR_43 >= 96 || VAR_44 >= 96)
   VAR_40 = VAR_4;
  else
   VAR_40 = VAR_2;

  if (VAR_40 < VAR_26->can.state) {
   VAR_42 = VAR_43 >= VAR_44 ? VAR_40 : 0;
   VAR_41 = VAR_43 <= VAR_44 ? VAR_40 : 0;
   FUNC_15(VAR_25, VAR_42, VAR_41);
  }
 }

 if (VAR_30 & VAR_11) {
  while (VAR_26->tx_tail - VAR_26->tx_head > 0) {
   VAR_28 = FUNC_5(VAR_26);
   VAR_29 = FUNC_0(VAR_28);
   if (!(VAR_29 & FUNC_7(VAR_26, VAR_18)))
    break;
   FUNC_9(VAR_26, VAR_18, VAR_29);
   FUNC_13(&VAR_26->mbx_lock, VAR_33);
   FUNC_6(VAR_26, VAR_15, VAR_29);
   FUNC_14(&VAR_26->mbx_lock, VAR_33);
   VAR_32 = FUNC_8(VAR_26, VAR_28);
   VAR_27->tx_bytes +=
    FUNC_3(&VAR_26->offload,
           VAR_28, VAR_32);
   VAR_27->tx_packets++;
   FUNC_2(VAR_25, VAR_0);
   --VAR_26->tx_tail;
  }


  if ((VAR_26->tx_head == VAR_26->tx_tail &&
       ((VAR_26->tx_head & VAR_20) != VAR_20)) ||
      (((VAR_26->tx_tail & VAR_20) == VAR_20) &&
       ((VAR_26->tx_head & VAR_20) == VAR_20)))
   FUNC_12(VAR_25);


  while ((VAR_34 = FUNC_7(VAR_26, VAR_17))) {
   FUNC_4(&VAR_26->offload,
            VAR_34);
  }
 }


 if (VAR_26->use_hecc1int) {
  FUNC_9(VAR_26, VAR_8, VAR_35);
  VAR_30 = FUNC_7(VAR_26, VAR_8);
 } else {
  FUNC_9(VAR_26, VAR_7, VAR_35);
  VAR_30 = FUNC_7(VAR_26, VAR_7);
 }

 return VAR_21;
}
