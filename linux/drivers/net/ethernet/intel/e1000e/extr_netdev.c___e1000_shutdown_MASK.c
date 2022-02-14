
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pci_dev {TYPE_6__* bus; } ;
struct net_device {int dummy; } ;
struct TYPE_10__ {int (* acquire ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;} ;
struct TYPE_11__ {scalar_t__ media_type; scalar_t__ type; TYPE_4__ ops; } ;
struct TYPE_8__ {int eee_lp_ability; } ;
struct TYPE_9__ {TYPE_2__ ich8lan; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_5__ phy; TYPE_3__ dev_spec; TYPE_1__ mac; } ;
struct e1000_adapter {int wol; int flags2; int flags; int eee_advert; struct e1000_hw hw; } ;
struct TYPE_12__ {struct pci_dev* self; } ;


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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct e1000_hw*,int) ;
 int FUNC_1 (struct e1000_adapter*,int) ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_adapter*) ;
 int FUNC_7 (struct e1000_adapter*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct e1000_hw*,int ,int*) ;
 int FUNC_10 (struct e1000_hw*,int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 struct e1000_adapter* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct pci_dev*) ;
 struct net_device* FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*,int ,int*) ;
 int FUNC_19 (struct pci_dev*,int ,int) ;
 int FUNC_20 (struct e1000_hw*) ;
 int FUNC_21 (struct e1000_hw*) ;

__attribute__((used)) static int FUNC_22(struct pci_dev *VAR_31, bool VAR_32)
{
 struct net_device *VAR_33 = FUNC_15(VAR_31);
 struct e1000_adapter *VAR_34 = FUNC_13(VAR_33);
 struct e1000_hw *VAR_35 = &VAR_34->hw;
 u32 VAR_36, VAR_37, VAR_38, VAR_39;

 u32 VAR_40 = VAR_32 ? VAR_10 : VAR_34->wol;
 int VAR_41 = 0;

 VAR_39 = FUNC_11(VAR_23);
 if (VAR_39 & VAR_6)
  VAR_40 &= ~VAR_10;

 if (VAR_40) {
  FUNC_3(VAR_34);
  FUNC_8(VAR_33);


  if (VAR_40 & VAR_11) {
   VAR_38 = FUNC_11(VAR_22);
   VAR_38 |= VAR_5;
   FUNC_12(VAR_22, VAR_38);
  }

  VAR_36 = FUNC_11(VAR_0);
  VAR_36 |= VAR_2;
  if (!(VAR_34->flags2 & VAR_12))
   VAR_36 |= VAR_3;
  FUNC_12(VAR_0, VAR_36);

  if (VAR_34->hw.phy.media_type == VAR_26 ||
      VAR_34->hw.phy.media_type ==
      VAR_27) {

   VAR_37 = FUNC_11(VAR_1);
   VAR_37 |= VAR_4;
   FUNC_12(VAR_1, VAR_37);
  }

  if (!VAR_32)
   FUNC_6(VAR_34);

  if (VAR_34->flags & VAR_13)
   FUNC_4(&VAR_34->hw);

  if (VAR_34->flags2 & VAR_12) {

   VAR_41 = FUNC_1(VAR_34, VAR_40);
   if (VAR_41)
    return VAR_41;
  } else {

   FUNC_12(VAR_25, VAR_40);
   FUNC_12(VAR_24, VAR_7);
  }
 } else {
  FUNC_12(VAR_24, 0);
  FUNC_12(VAR_25, 0);

  FUNC_2(VAR_34);
 }

 if (VAR_34->hw.phy.type == VAR_30) {
  FUNC_5(&VAR_34->hw);
 } else if (VAR_35->mac.type >= VAR_28) {
  if (!(VAR_40 & (VAR_9 | VAR_11 | VAR_8)))



   VAR_41 = FUNC_0(VAR_35, !VAR_32);

  if (VAR_41)
   return VAR_41;
 }




 if ((VAR_35->phy.type >= VAR_29) &&
     VAR_34->eee_advert && VAR_35->dev_spec.ich8lan.eee_lp_ability) {
  u16 VAR_42 = 0;

  VAR_41 = VAR_35->phy.ops.acquire(VAR_35);
  if (!VAR_41) {
   VAR_41 = FUNC_9(VAR_35, VAR_17,
       &VAR_42);
   if (!VAR_41) {
    if (VAR_34->eee_advert &
        VAR_35->dev_spec.ich8lan.eee_lp_ability &
        VAR_16)
     VAR_42 |= VAR_19;
    if (VAR_34->eee_advert &
        VAR_35->dev_spec.ich8lan.eee_lp_ability &
        VAR_15)
     VAR_42 |= VAR_18;

    VAR_41 = FUNC_10(VAR_35, VAR_17,
        VAR_42);
   }
  }
  VAR_35->phy.ops.release(VAR_35);
 }




 FUNC_7(VAR_34);

 FUNC_14(VAR_31);
 if (VAR_34->flags & VAR_14) {
  struct pci_dev *VAR_43 = VAR_31->bus->self;
  u16 VAR_44;

  if (!VAR_43)
   return 0;

  FUNC_18(VAR_43, VAR_20, &VAR_44);
  FUNC_19(VAR_43, VAR_20,
        (VAR_44 & ~VAR_21));

  FUNC_17(VAR_31);
  FUNC_16(VAR_31);

  FUNC_19(VAR_43, VAR_20, VAR_44);
 }

 return 0;
}
