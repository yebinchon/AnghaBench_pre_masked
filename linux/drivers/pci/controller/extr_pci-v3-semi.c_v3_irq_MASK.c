
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v3_pci {scalar_t__ map; scalar_t__ base; struct device* dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_18, void *VAR_19)
{
 struct v3_pci *VAR_20 = VAR_19;
 struct device *VAR_21 = VAR_20->dev;
 u32 VAR_22;

 VAR_22 = FUNC_3(VAR_20->base + VAR_13);
 if (VAR_22 & VAR_15)
  FUNC_0(VAR_21, "parity error interrupt\n");
 if (VAR_22 & VAR_16)
  FUNC_0(VAR_21, "system error interrupt\n");
 if (VAR_22 & VAR_14)
  FUNC_0(VAR_21, "master abort error interrupt\n");
 if (VAR_22 & VAR_17)
  FUNC_0(VAR_21, "target abort error interrupt\n");
 FUNC_6(VAR_22, VAR_20->base + VAR_13);

 VAR_22 = FUNC_2(VAR_20->base + VAR_4);
 if (VAR_22 & VAR_8)
  FUNC_1(VAR_21, "PCI mailbox interrupt\n");
 if (VAR_22 & VAR_11)
  FUNC_0(VAR_21, "PCI target LB->PCI READ abort interrupt\n");
 if (VAR_22 & VAR_12)
  FUNC_0(VAR_21, "PCI target LB->PCI WRITE abort interrupt\n");
 if (VAR_22 & VAR_9)
  FUNC_1(VAR_21, "PCI pin interrupt\n");
 if (VAR_22 & VAR_10)
  FUNC_0(VAR_21, "PCI parity error interrupt\n");
 if (VAR_22 & VAR_7)
  FUNC_1(VAR_21, "I2O inbound post queue interrupt\n");
 if (VAR_22 & VAR_6)
  FUNC_1(VAR_21, "DMA channel 1 interrupt\n");
 if (VAR_22 & VAR_5)
  FUNC_1(VAR_21, "DMA channel 0 interrupt\n");

 FUNC_5(0, VAR_20->base + VAR_4);
 if (VAR_20->map)
  FUNC_4(VAR_20->map, VAR_2,
        VAR_0 |
        VAR_1);

 return VAR_3;
}
