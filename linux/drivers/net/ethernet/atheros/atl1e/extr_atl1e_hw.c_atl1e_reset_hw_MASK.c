
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct atl1e_hw {struct atl1e_adapter* adapter; } ;
struct atl1e_adapter {int netdev; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct atl1e_hw*,int ) ;
 int FUNC_1 (struct atl1e_hw*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct pci_dev*,int ,int*) ;
 int FUNC_6 (struct pci_dev*,int ,int) ;
 int FUNC_7 () ;

int FUNC_8(struct atl1e_hw *VAR_10)
{
 struct atl1e_adapter *VAR_11 = VAR_10->adapter;
 struct pci_dev *VAR_12 = VAR_11->pdev;

 u32 VAR_13 = 0;
 u16 VAR_14 = 0;
 int VAR_15 = 0;


 FUNC_5(VAR_12, VAR_7, &VAR_14);
 if ((VAR_14 & (VAR_3 |
    VAR_4 | VAR_2))
   != (VAR_3 | VAR_4 | VAR_2)) {
  VAR_14 |= (VAR_3 |
         VAR_4 | VAR_2);
  FUNC_6(VAR_12, VAR_7, VAR_14);
 }







 FUNC_1(VAR_10, VAR_9,
   VAR_5 | VAR_6);
 FUNC_7();
 FUNC_3(1);


 for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
  VAR_13 = FUNC_0(VAR_10, VAR_8);
  if (VAR_13 == 0)
   break;
  FUNC_3(1);
  FUNC_2();
 }

 if (VAR_15 >= VAR_1) {
  FUNC_4(VAR_11->netdev,
      "MAC state machine can't be idle since disabled for 10ms second\n");
  return VAR_0;
 }

 return 0;
}
