
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct e1000_hw {scalar_t__ mac_type; scalar_t__ media_type; } ;
struct e1000_adapter {int wol; int flags; scalar_t__ en_mng_pt; struct e1000_hw hw; } ;


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
 int FUNC_0 (scalar_t__) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct e1000_adapter*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 struct e1000_adapter* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct pci_dev*) ;
 struct net_device* FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (int,int) ;

__attribute__((used)) static int FUNC_17(struct pci_dev *VAR_21, bool *VAR_22)
{
 struct net_device *VAR_23 = FUNC_12(VAR_21);
 struct e1000_adapter *VAR_24 = FUNC_8(VAR_23);
 struct e1000_hw *VAR_25 = &VAR_24->hw;
 u32 VAR_26, VAR_27, VAR_28, VAR_29;
 u32 VAR_30 = VAR_24->wol;




 FUNC_9(VAR_23);

 if (FUNC_10(VAR_23)) {
  int VAR_31 = VAR_2;

  while (FUNC_15(VAR_17, &VAR_24->flags) && VAR_31--)
   FUNC_16(10000, 20000);

  FUNC_0(FUNC_15(VAR_17, &VAR_24->flags));
  FUNC_1(VAR_24);
 }







 VAR_29 = FUNC_6(VAR_13);
 if (VAR_29 & VAR_8)
  VAR_30 &= ~VAR_10;

 if (VAR_30) {
  FUNC_5(VAR_24);
  FUNC_4(VAR_23);

  VAR_28 = FUNC_6(VAR_12);


  if (VAR_30 & VAR_11)
   VAR_28 |= VAR_7;


  FUNC_7(VAR_12, VAR_28 | VAR_6);

  if (VAR_25->mac_type >= VAR_18) {
   VAR_26 = FUNC_6(VAR_0);




   VAR_26 |= 0x00100000 |
    0x00200000;
   FUNC_7(VAR_0, VAR_26);
  }

  if (VAR_25->media_type == VAR_19 ||
      VAR_25->media_type == VAR_20) {

   VAR_27 = FUNC_6(VAR_1);
   VAR_27 |= VAR_5;
   FUNC_7(VAR_1, VAR_27);
  }

  FUNC_7(VAR_14, VAR_9);
  FUNC_7(VAR_15, VAR_30);
 } else {
  FUNC_7(VAR_14, 0);
  FUNC_7(VAR_15, 0);
 }

 FUNC_3(VAR_24);

 *VAR_22 = !!VAR_30;


 if (VAR_24->en_mng_pt)
  *VAR_22 = 1;

 if (FUNC_10(VAR_23))
  FUNC_2(VAR_24);

 if (!FUNC_14(VAR_16, &VAR_24->flags))
  FUNC_11(VAR_21);

 return 0;
}
