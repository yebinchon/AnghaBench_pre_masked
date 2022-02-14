
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {int dummy; } ;
struct dt3155_priv {int config; scalar_t__ regs; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__*) ;
 int FUNC_4 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_5(struct dt3155_priv *VAR_40)
{
 struct pci_dev *VAR_41 = VAR_40->pdev;
 int VAR_42;
 u8 VAR_43 = 0;

 FUNC_2(VAR_41);


 FUNC_0(VAR_1 | VAR_0 | VAR_19 | VAR_18 |
   VAR_21 | VAR_20, VAR_40->regs + VAR_9);
 FUNC_1(20);


 FUNC_0(VAR_15 | VAR_35, VAR_40->regs + VAR_9);
 FUNC_0(0xEEEEEE01, VAR_40->regs + VAR_14);
 FUNC_0(0xEEEEEE01, VAR_40->regs + VAR_29);
 FUNC_0(0x00000020, VAR_40->regs + VAR_17);
 FUNC_0(0x00000103, VAR_40->regs + VAR_39);
 FUNC_0(0, VAR_40->regs + VAR_34);
 FUNC_0(0, VAR_40->regs + VAR_26);
 FUNC_0(1, VAR_40->regs + VAR_13);
 FUNC_0(1, VAR_40->regs + VAR_28);
 FUNC_0(0, VAR_40->regs + VAR_27);
 FUNC_0(0x0005007C, VAR_40->regs + VAR_16);
 FUNC_0(0x01010101, VAR_40->regs + VAR_25);


 FUNC_3(VAR_40->regs, VAR_11, &VAR_43);
 if (VAR_43 != VAR_10)
  return -VAR_12;


 FUNC_4(VAR_40->regs, VAR_2, 0);
 for (VAR_42 = 0; VAR_42 < 256; VAR_42++)
  FUNC_4(VAR_40->regs, VAR_5, VAR_42);



 FUNC_4(VAR_40->regs, VAR_2, VAR_4);
 FUNC_4(VAR_40->regs, VAR_3, VAR_38 | VAR_36 | VAR_37);
 FUNC_4(VAR_40->regs, VAR_2, VAR_7);
 FUNC_4(VAR_40->regs, VAR_3, 34);
 FUNC_4(VAR_40->regs, VAR_2, VAR_6);
 FUNC_4(VAR_40->regs, VAR_3, 0);


 FUNC_4(VAR_40->regs, VAR_8, VAR_40->config | VAR_32);
 for (VAR_42 = 0; VAR_42 < 256; VAR_42++) {
  FUNC_4(VAR_40->regs, VAR_30, VAR_42);
  FUNC_4(VAR_40->regs, VAR_31, VAR_42);
 }
 FUNC_4(VAR_40->regs, VAR_8, VAR_40->config | VAR_32 | VAR_33);
 for (VAR_42 = 0; VAR_42 < 256; VAR_42++) {
  FUNC_4(VAR_40->regs, VAR_30, VAR_42);
  FUNC_4(VAR_40->regs, VAR_31, VAR_42);
 }
 FUNC_4(VAR_40->regs, VAR_8, VAR_40->config);


 FUNC_4(VAR_40->regs, VAR_2, VAR_4);
 FUNC_4(VAR_40->regs, VAR_3, VAR_38 | VAR_36 | VAR_37);


 FUNC_0(VAR_24 | VAR_22 | VAR_23,
   VAR_40->regs + VAR_26);

 return 0;
}
