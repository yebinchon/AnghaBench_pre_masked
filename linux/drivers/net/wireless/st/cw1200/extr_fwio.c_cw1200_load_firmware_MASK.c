
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct cw1200_common {int hwbus_priv; TYPE_1__* hwbus_ops; int hw_type; int hw_revision; int ba_tx_tid_mask; int ba_rx_tid_mask; int hw_refclk; } ;
struct TYPE_2__ {int (* unlock ) (int ) ;int (* lock ) (int ) ;} ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct cw1200_common*,int) ;
 int FUNC_1 (struct cw1200_common*,int*) ;
 int FUNC_2 (struct cw1200_common*,int) ;
 int FUNC_3 (struct cw1200_common*,int ,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int*) ;
 int FUNC_6 (struct cw1200_common*) ;
 int FUNC_7 (struct cw1200_common*,int ,int*) ;
 int FUNC_8 (struct cw1200_common*,int ,int*) ;
 int FUNC_9 (struct cw1200_common*,int ,int) ;
 int FUNC_10 (struct cw1200_common*,int ,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

int FUNC_19(struct cw1200_common *VAR_20)
{
 int VAR_21;
 int VAR_22;
 u32 VAR_23;
 u16 VAR_24;
 int VAR_25 = -1;


 VAR_21 = FUNC_8(VAR_20, VAR_15, &VAR_23);
 if (VAR_21 < 0) {
  FUNC_13("Can't read config register.\n");
  goto out;
 }

 if (VAR_23 == 0 || VAR_23 == 0xffffffff) {
  FUNC_13("Bad config register value (0x%08x)\n", VAR_23);
  VAR_21 = -VAR_11;
  goto out;
 }

 VAR_20->hw_type = FUNC_5(VAR_23, &VAR_25);
 if (VAR_20->hw_type < 0) {
  FUNC_13("Can't deduce hardware type.\n");
  VAR_21 = -VAR_12;
  goto out;
 }


 VAR_21 = FUNC_10(VAR_20, VAR_19,
      FUNC_4(VAR_20->hw_refclk));
 if (VAR_21 < 0) {
  FUNC_13("Can't write DPLL register.\n");
  goto out;
 }

 FUNC_12(20);

 VAR_21 = FUNC_8(VAR_20,
  VAR_19, &VAR_23);
 if (VAR_21 < 0) {
  FUNC_13("Can't read DPLL register.\n");
  goto out;
 }

 if (VAR_23 != FUNC_4(VAR_20->hw_refclk)) {
  FUNC_13("Unable to initialise DPLL register. Wrote 0x%.8X, Read 0x%.8X.\n",
         FUNC_4(VAR_20->hw_refclk), VAR_23);
  VAR_21 = -VAR_11;
  goto out;
 }


 VAR_21 = FUNC_7(VAR_20, VAR_16, &VAR_24);
 if (VAR_21 < 0) {
  FUNC_13("set_wakeup: can't read control register.\n");
  goto out;
 }

 VAR_21 = FUNC_9(VAR_20, VAR_16,
  VAR_24 | VAR_18);
 if (VAR_21 < 0) {
  FUNC_13("set_wakeup: can't write control register.\n");
  goto out;
 }


 for (VAR_22 = 0; VAR_22 < 300; VAR_22 += (1 + VAR_22 / 2)) {
  VAR_21 = FUNC_7(VAR_20,
   VAR_16, &VAR_24);
  if (VAR_21 < 0) {
   FUNC_13("wait_for_wakeup: can't read control register.\n");
   goto out;
  }

  if (VAR_24 & VAR_17)
   break;

  FUNC_12(VAR_22);
 }

 if ((VAR_24 & VAR_17) == 0) {
  FUNC_13("wait_for_wakeup: device is not responding.\n");
  VAR_21 = -VAR_13;
  goto out;
 }

 switch (VAR_25) {
 case 1:

  VAR_21 = FUNC_3(VAR_20, VAR_4, &VAR_23);
  if (VAR_21) {
   FUNC_13("HW detection: can't read CUT ID.\n");
   goto out;
  }

  switch (VAR_23) {
  case 129:
   FUNC_14("CW1x00 Cut 1.1 silicon detected.\n");
   VAR_20->hw_revision = VAR_6;
   break;
  default:
   FUNC_14("CW1x00 Cut 1.0 silicon detected.\n");
   VAR_20->hw_revision = VAR_5;
   break;
  }




  VAR_20->ba_rx_tid_mask = 0;
  VAR_20->ba_tx_tid_mask = 0;
  break;
 case 2: {
  u32 VAR_26, VAR_27, VAR_28;
  VAR_21 = FUNC_3(VAR_20, VAR_0, &VAR_26);
  if (VAR_21) {
   FUNC_13("(1) HW detection: can't read CUT ID\n");
   goto out;
  }
  VAR_21 = FUNC_3(VAR_20, VAR_0 + 4, &VAR_27);
  if (VAR_21) {
   FUNC_13("(2) HW detection: can't read CUT ID.\n");
   goto out;
  }

  VAR_21 = FUNC_3(VAR_20, VAR_0 + 8, &VAR_28);
  if (VAR_21) {
   FUNC_13("(3) HW detection: can't read CUT ID.\n");
   goto out;
  }

  if (VAR_26 == VAR_1 &&
      VAR_27 == VAR_2 &&
      VAR_28 == VAR_3) {
   FUNC_14("CW1x00 Cut 2.2 silicon detected.\n");
   VAR_20->hw_revision = VAR_8;
  } else {
   FUNC_14("CW1x00 Cut 2.0 silicon detected.\n");
   VAR_20->hw_revision = VAR_7;
  }
  break;
 }
 case 4:
  FUNC_14("CW1x60 silicon detected.\n");
  VAR_20->hw_revision = VAR_9;
  break;
 default:
  FUNC_13("Unsupported silicon major revision %d.\n",
         VAR_25);
  VAR_21 = -VAR_12;
  goto out;
 }


 VAR_21 = FUNC_1(VAR_20, &VAR_23);
 if (VAR_21 < 0) {
  FUNC_13("Can't read config register.\n");
  goto out;
 }

 if (!(VAR_23 & VAR_14)) {
  FUNC_13("Device is already in QUEUE mode!\n");
  VAR_21 = -VAR_10;
  goto out;
 }

 switch (VAR_20->hw_type) {
 case 128:
  if (VAR_20->hw_revision == VAR_9) {
   FUNC_13("Can't handle CW1160/1260 firmware load yet.\n");
   VAR_21 = -VAR_12;
   goto out;
  }
  VAR_21 = FUNC_6(VAR_20);
  break;
 default:
  FUNC_13("Can't perform firmware load for hw type %d.\n",
         VAR_20->hw_type);
  VAR_21 = -VAR_12;
  goto out;
 }
 if (VAR_21 < 0) {
  FUNC_13("Firmware load error.\n");
  goto out;
 }


 VAR_20->hwbus_ops->lock(VAR_20->hwbus_priv);
 VAR_21 = FUNC_0(VAR_20, 1);
 VAR_20->hwbus_ops->unlock(VAR_20->hwbus_priv);
 if (VAR_21 < 0)
  goto unsubscribe;


 VAR_21 = FUNC_1(VAR_20, &VAR_23);
 if (VAR_21 < 0) {
  FUNC_13("Can't read config register.\n");
  goto unsubscribe;
 }
 VAR_21 = FUNC_2(VAR_20, VAR_23 & ~VAR_14);
 if (VAR_21 < 0) {
  FUNC_13("Can't write config register.\n");
  goto unsubscribe;
 }




 FUNC_11(10);
 FUNC_1(VAR_20, &VAR_23);

out:
 return VAR_21;

unsubscribe:

 VAR_20->hwbus_ops->lock(VAR_20->hwbus_priv);
 VAR_21 = FUNC_0(VAR_20, 0);
 VAR_20->hwbus_ops->unlock(VAR_20->hwbus_priv);
 return VAR_21;
}
