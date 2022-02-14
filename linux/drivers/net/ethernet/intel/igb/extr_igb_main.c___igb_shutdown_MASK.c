
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int wol; scalar_t__ en_mng_pt; struct e1000_hw hw; } ;


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
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct igb_adapter*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct igb_adapter*) ;
 int FUNC_4 (struct igb_adapter*) ;
 int FUNC_5 (struct igb_adapter*) ;
 int FUNC_6 (struct igb_adapter*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct igb_adapter*) ;
 struct igb_adapter* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct pci_dev*) ;
 struct net_device* FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int) ;

__attribute__((used)) static int FUNC_18(struct pci_dev *VAR_11, bool *VAR_12,
     bool VAR_13)
{
 struct net_device *VAR_14 = FUNC_13(VAR_11);
 struct igb_adapter *VAR_15 = FUNC_9(VAR_14);
 struct e1000_hw *VAR_16 = &VAR_15->hw;
 u32 VAR_17, VAR_18, VAR_19;
 u32 VAR_20 = VAR_13 ? VAR_9 : VAR_15->wol;
 bool VAR_21;

 FUNC_15();
 FUNC_10(VAR_14);

 if (FUNC_11(VAR_14))
  FUNC_0(VAR_14, 1);

 FUNC_5(VAR_15);

 FUNC_1(VAR_15);
 FUNC_16();

 VAR_19 = FUNC_14(VAR_4);
 if (VAR_19 & VAR_5)
  VAR_20 &= ~VAR_9;

 if (VAR_20) {
  FUNC_8(VAR_15);
  FUNC_7(VAR_14);


  if (VAR_20 & VAR_10) {
   VAR_18 = FUNC_14(VAR_2);
   VAR_18 |= VAR_3;
   FUNC_17(VAR_2, VAR_18);
  }

  VAR_17 = FUNC_14(VAR_0);
  VAR_17 |= VAR_1;
  FUNC_17(VAR_0, VAR_17);


  FUNC_2(VAR_16);

  FUNC_17(VAR_6, VAR_7);
  FUNC_17(VAR_8, VAR_20);
 } else {
  FUNC_17(VAR_6, 0);
  FUNC_17(VAR_8, 0);
 }

 VAR_21 = VAR_20 || VAR_15->en_mng_pt;
 if (!VAR_21)
  FUNC_3(VAR_15);
 else
  FUNC_4(VAR_15);

 if (VAR_12)
  *VAR_12 = VAR_21;




 FUNC_6(VAR_15);

 FUNC_12(VAR_11);

 return 0;
}
