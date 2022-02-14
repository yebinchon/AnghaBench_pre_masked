
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct atl1c_hw {int nic_type; struct atl1c_adapter* adapter; } ;
struct atl1c_adapter {struct pci_dev* pdev; } ;


 int FUNC_0 (struct atl1c_hw*,int ,int*) ;
 int FUNC_1 (struct atl1c_hw*) ;
 int FUNC_2 (struct atl1c_hw*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_3 (struct atl1c_hw*) ;
 scalar_t__ FUNC_4 (struct atl1c_hw*,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct atl1c_hw *VAR_9)
{
 struct atl1c_adapter *VAR_10 = VAR_9->adapter;
 struct pci_dev *VAR_11 = VAR_10->pdev;
 u32 VAR_12 = 0;

 FUNC_3(VAR_9);






 FUNC_0(VAR_9, VAR_5, &VAR_12);
 VAR_12 |= VAR_2;
 FUNC_2(VAR_9, VAR_5, VAR_12 | VAR_3);

 FUNC_1(VAR_9);
 FUNC_6(10);


 if (FUNC_4(VAR_9, VAR_0)) {
  FUNC_5(&VAR_11->dev,
   "MAC state machine can't be idle since"
   " disabled for 10ms second\n");
  return -1;
 }
 FUNC_2(VAR_9, VAR_5, VAR_12);


 FUNC_0(VAR_9, VAR_4, &VAR_12);
 FUNC_2(VAR_9, VAR_4, VAR_12 | VAR_1);


 FUNC_0(VAR_9, VAR_6, &VAR_12);
 switch (VAR_9->nic_type) {
 case 129:
  VAR_12 &= ~(VAR_8 |
    VAR_7);
  FUNC_2(VAR_9, VAR_6, VAR_12);
  break;
 case 128:
 case 130:
  VAR_12 |= VAR_8 | VAR_7;
  FUNC_2(VAR_9, VAR_6, VAR_12);
  break;
 default:
  break;
 }

 return 0;
}
