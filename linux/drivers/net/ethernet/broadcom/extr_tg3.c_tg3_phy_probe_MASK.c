
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int flowctrl; int advertising; } ;
struct TYPE_3__ {int supported; int advertised; int eee_enabled; int tx_lpi_enabled; int tx_lpi_timer; } ;
struct tg3 {int pci_fn; int phy_flags; int phy_id; TYPE_2__ link_config; TYPE_1__ eee; int phy_ape_lock; } ;
struct subsys_tbl_ent {int phy_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 scalar_t__ FUNC_1 (struct tg3*) ;
 scalar_t__ FUNC_2 (struct tg3*) ;
 scalar_t__ FUNC_3 (struct tg3*,int ) ;
 int FUNC_4 (struct tg3*,int ) ;
 int FUNC_5 (struct tg3*) ;
 struct subsys_tbl_ent* FUNC_6 (struct tg3*) ;
 int FUNC_7 (struct tg3*,int ,int) ;
 int FUNC_8 (struct tg3*,int*) ;
 int FUNC_9 (struct tg3*) ;
 int FUNC_10 (struct tg3*) ;
 int FUNC_11 (struct tg3*) ;
 int FUNC_12 (struct tg3*) ;
 int FUNC_13 (struct tg3*,int ,int*) ;
 int FUNC_14 (struct tg3*,int ,int) ;

__attribute__((used)) static int FUNC_15(struct tg3 *VAR_42)
{
 u32 VAR_43, VAR_44;
 u32 VAR_45, VAR_46;
 int VAR_47;


 FUNC_4(VAR_42, VAR_23);
 VAR_42->link_config.flowctrl = VAR_17 | VAR_16;

 if (FUNC_3(VAR_42, VAR_13)) {
  switch (VAR_42->pci_fn) {
  case 0:
   VAR_42->phy_ape_lock = VAR_26;
   break;
  case 1:
   VAR_42->phy_ape_lock = VAR_27;
   break;
  case 2:
   VAR_42->phy_ape_lock = VAR_28;
   break;
  case 3:
   VAR_42->phy_ape_lock = VAR_29;
   break;
  }
 }

 if (!FUNC_3(VAR_42, VAR_14) &&
     !(VAR_42->phy_flags & VAR_33) &&
     !(VAR_42->phy_flags & VAR_31))
  VAR_42->phy_flags &= ~(VAR_32 |
       VAR_35);

 if (FUNC_3(VAR_42, VAR_41))
  return FUNC_9(VAR_42);




 VAR_47 = 0;
 if (FUNC_3(VAR_42, VAR_14) || FUNC_3(VAR_42, VAR_13)) {
  VAR_45 = VAR_46 = VAR_39;
 } else {





  VAR_47 |= FUNC_13(VAR_42, VAR_21, &VAR_43);
  VAR_47 |= FUNC_13(VAR_42, VAR_22, &VAR_44);

  VAR_45 = (VAR_43 & 0xffff) << 10;
  VAR_45 |= (VAR_44 & 0xfc00) << 16;
  VAR_45 |= (VAR_44 & 0x03ff) << 0;

  VAR_46 = VAR_45 & VAR_40;
 }

 if (!VAR_47 && FUNC_0(VAR_46)) {
  VAR_42->phy_id = VAR_45;
  if (VAR_46 == VAR_38)
   VAR_42->phy_flags |= VAR_36;
  else
   VAR_42->phy_flags &= ~VAR_36;
 } else {
  if (VAR_42->phy_id != VAR_39) {



  } else {
   struct subsys_tbl_ent *VAR_48;




   VAR_48 = FUNC_6(VAR_42);
   if (VAR_48) {
    VAR_42->phy_id = VAR_48->phy_id;
   } else if (!FUNC_3(VAR_42, VAR_18)) {







    return -VAR_15;
   }

   if (!VAR_42->phy_id ||
       VAR_42->phy_id == VAR_38)
    VAR_42->phy_flags |= VAR_36;
  }
 }

 if (!(VAR_42->phy_flags & VAR_33) &&
     (FUNC_1(VAR_42) == VAR_3 ||
      FUNC_1(VAR_42) == VAR_4 ||
      FUNC_1(VAR_42) == VAR_7 ||
      FUNC_1(VAR_42) == VAR_5 ||
      (FUNC_1(VAR_42) == VAR_2 &&
       FUNC_2(VAR_42) != VAR_11) ||
      (FUNC_1(VAR_42) == VAR_6 &&
       FUNC_2(VAR_42) != VAR_12))) {
  VAR_42->phy_flags |= VAR_34;

  VAR_42->eee.supported = VAR_25 |
        VAR_24;
  VAR_42->eee.advertised = VAR_1 |
         VAR_0;
  VAR_42->eee.eee_enabled = 1;
  VAR_42->eee.tx_lpi_enabled = 1;
  VAR_42->eee.tx_lpi_timer = VAR_30;
 }

 FUNC_10(VAR_42);

 if (!(VAR_42->phy_flags & VAR_35) &&
     !(VAR_42->phy_flags & VAR_33) &&
     !FUNC_3(VAR_42, VAR_13) &&
     !FUNC_3(VAR_42, VAR_14)) {
  u32 VAR_49, VAR_50;

  FUNC_13(VAR_42, VAR_20, &VAR_49);
  if (!FUNC_13(VAR_42, VAR_20, &VAR_49) &&
      (VAR_49 & VAR_10))
   goto skip_phy_reset;

  VAR_47 = FUNC_11(VAR_42);
  if (VAR_47)
   return VAR_47;

  FUNC_12(VAR_42);

  if (!FUNC_8(VAR_42, &VAR_50)) {
   FUNC_7(VAR_42, VAR_42->link_config.advertising,
         VAR_42->link_config.flowctrl);

   FUNC_14(VAR_42, VAR_19,
         VAR_8 | VAR_9);
  }
 }

skip_phy_reset:
 if ((VAR_42->phy_id & VAR_40) == VAR_37) {
  VAR_47 = FUNC_5(VAR_42);
  if (VAR_47)
   return VAR_47;

  VAR_47 = FUNC_5(VAR_42);
 }

 return VAR_47;
}
