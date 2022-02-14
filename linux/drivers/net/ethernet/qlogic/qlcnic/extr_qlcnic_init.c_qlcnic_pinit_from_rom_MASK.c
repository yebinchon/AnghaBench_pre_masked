
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;
struct crb_addr_pair {int addr; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
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
 int FUNC_1 (int ) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_2 (struct qlcnic_adapter*,int,int*) ;
 int FUNC_3 (struct qlcnic_adapter*,int,int) ;
 int FUNC_4 (struct qlcnic_adapter*,int ,int ) ;
 int VAR_27 ;
 int FUNC_5 (int *,char*,...) ;
 struct crb_addr_pair* FUNC_6 (int,int,int ) ;
 int FUNC_7 (struct crb_addr_pair*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct qlcnic_adapter*,int,int*) ;
 int FUNC_11 (struct qlcnic_adapter*) ;
 int FUNC_12 (int,int) ;

int FUNC_13(struct qlcnic_adapter *VAR_28)
{
 int VAR_29, VAR_30 = 0;
 int VAR_31, VAR_32, VAR_33;
 struct crb_addr_pair *VAR_34;
 unsigned VAR_35;
 u32 VAR_36, VAR_37;
 struct pci_dev *VAR_38 = VAR_28->pdev;

 FUNC_4(VAR_28, VAR_6, 0);
 FUNC_4(VAR_28, VAR_25, 0);



 FUNC_3(VAR_28, VAR_10 + 0x10, 0x0);
 FUNC_3(VAR_28, VAR_10 + 0x14, 0x0);
 FUNC_3(VAR_28, VAR_10 + 0x18, 0x0);
 FUNC_3(VAR_28, VAR_10 + 0x1c, 0x0);
 FUNC_3(VAR_28, VAR_10 + 0x20, 0x0);
 FUNC_3(VAR_28, VAR_10 + 0x24, 0x0);


 FUNC_3(VAR_28, VAR_11 + 0x40, 0xff);

 FUNC_3(VAR_28, VAR_11 + 0x70000, 0x00);

 FUNC_3(VAR_28, VAR_11 + 0x80000, 0x00);

 FUNC_3(VAR_28, VAR_11 + 0x90000, 0x00);

 FUNC_3(VAR_28, VAR_11 + 0xa0000, 0x00);

 FUNC_3(VAR_28, VAR_11 + 0xb0000, 0x00);


 VAR_37 = FUNC_2(VAR_28, VAR_20 + 0x1000, &VAR_30);
 if (VAR_30 == -VAR_0)
  return VAR_30;
 FUNC_3(VAR_28, VAR_20 + 0x1000, VAR_37 & (~(0x1)));


 FUNC_3(VAR_28, VAR_8 + 0x1300, 0x1);


 FUNC_3(VAR_28, VAR_21 + 0x0, 0x0);
 FUNC_3(VAR_28, VAR_21 + 0x8, 0x0);
 FUNC_3(VAR_28, VAR_21 + 0x10, 0x0);
 FUNC_3(VAR_28, VAR_21 + 0x18, 0x0);
 FUNC_3(VAR_28, VAR_21 + 0x100, 0x0);
 FUNC_3(VAR_28, VAR_21 + 0x200, 0x0);

 FUNC_3(VAR_28, VAR_12 + 0x3c, 1);
 FUNC_3(VAR_28, VAR_13 + 0x3c, 1);
 FUNC_3(VAR_28, VAR_14 + 0x3c, 1);
 FUNC_3(VAR_28, VAR_15 + 0x3c, 1);
 FUNC_3(VAR_28, VAR_16 + 0x3c, 1);
 FUNC_8(20);

 FUNC_11(VAR_28);

 FUNC_3(VAR_28, VAR_26, 0xfeffffff);


 if (FUNC_10(VAR_28, 0, &VAR_32) != 0 || (VAR_32 != 0xcafecafe) ||
   FUNC_10(VAR_28, 4, &VAR_32) != 0) {
  FUNC_5(&VAR_38->dev, "ERROR Reading crb_init area: val:%x\n", VAR_32);
  return -VAR_0;
 }
 VAR_35 = VAR_32 & 0xffffU;
 VAR_32 = (VAR_32 >> 16) & 0xffffU;

 if (VAR_32 >= 1024) {
  FUNC_5(&VAR_38->dev, "QLOGIC card flash not initialized.\n");
  return -VAR_0;
 }

 VAR_34 = FUNC_6(VAR_32, sizeof(struct crb_addr_pair), VAR_2);
 if (VAR_34 == ((void*)0))
  return -VAR_1;

 for (VAR_31 = 0; VAR_31 < VAR_32; VAR_31++) {
  if (FUNC_10(VAR_28, 8*VAR_31 + 4*VAR_35, &VAR_37) != 0 ||
  FUNC_10(VAR_28, 8*VAR_31 + 4*VAR_35 + 4, &VAR_29) != 0) {
   FUNC_7(VAR_34);
   return -VAR_0;
  }

  VAR_34[VAR_31].addr = VAR_29;
  VAR_34[VAR_31].data = VAR_37;
 }

 for (VAR_31 = 0; VAR_31 < VAR_32; VAR_31++) {

  VAR_36 = FUNC_9(VAR_34[VAR_31].addr);
  if (VAR_36 == VAR_5) {
   FUNC_5(&VAR_38->dev, "CRB init value out of range %x\n",
     VAR_34[VAR_31].addr);
   continue;
  }
  VAR_36 += VAR_22;

  if (VAR_36 & 1)
   continue;


  if (VAR_36 == FUNC_0(0x1fc))
   continue;
  if (VAR_36 == (VAR_9 + 0x1c))
   continue;
  if (VAR_36 == (VAR_27 + 0xbc))
   continue;
  if (VAR_36 == (VAR_27 + 0xa8))
   continue;
  if (VAR_36 == (VAR_27 + 0xc8))
   continue;
  if (VAR_36 == (VAR_27 + 0x24))
   continue;
  if (VAR_36 == (VAR_27 + 0x1c))
   continue;
  if ((VAR_36 & 0x0ff00000) == VAR_7)
   continue;

  if (VAR_36 == FUNC_1(VAR_3))
   continue;
  if (VAR_36 == FUNC_1(VAR_4))
   continue;
  if ((VAR_36 & 0x0ff00000) == VAR_19)
   continue;

  VAR_33 = 1;


  if (VAR_36 == VAR_26)
   VAR_33 = 1000;

  FUNC_3(VAR_28, VAR_36, VAR_34[VAR_31].data);

  FUNC_8(VAR_33);
 }
 FUNC_7(VAR_34);


 FUNC_3(VAR_28, VAR_17 + 0xec, 0x1e);
 FUNC_3(VAR_28, VAR_17 + 0x4c, 8);
 FUNC_3(VAR_28, VAR_18 + 0x4c, 8);
 FUNC_3(VAR_28, VAR_12 + 0x8, 0);
 FUNC_3(VAR_28, VAR_12 + 0xc, 0);
 FUNC_3(VAR_28, VAR_13 + 0x8, 0);
 FUNC_3(VAR_28, VAR_13 + 0xc, 0);
 FUNC_3(VAR_28, VAR_14 + 0x8, 0);
 FUNC_3(VAR_28, VAR_14 + 0xc, 0);
 FUNC_3(VAR_28, VAR_15 + 0x8, 0);
 FUNC_3(VAR_28, VAR_15 + 0xc, 0);
 FUNC_3(VAR_28, VAR_16 + 0x8, 0);
 FUNC_3(VAR_28, VAR_16 + 0xc, 0);
 FUNC_12(1000, 1500);

 FUNC_4(VAR_28, VAR_23, 0);
 FUNC_4(VAR_28, VAR_24, 0);

 return 0;
}
