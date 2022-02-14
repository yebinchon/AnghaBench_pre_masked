
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct imx6_pcie {TYPE_2__* pci; TYPE_1__* drvdata; int pcie_phy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int flags; } ;


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
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned long) ;
 int FUNC_2 (struct imx6_pcie*,int ,int*) ;
 int FUNC_3 (struct imx6_pcie*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct imx6_pcie *VAR_10)
{
 unsigned long VAR_11 = FUNC_0(VAR_10->pcie_phy);
 int VAR_12, VAR_13;
 u16 VAR_14;

 if (!(VAR_10->drvdata->flags & VAR_1))
  return 0;

 switch (VAR_11) {
 case 125000000:




  return 0;
 case 100000000:
  VAR_12 = 25;
  VAR_13 = 0;
  break;
 case 200000000:
  VAR_12 = 25;
  VAR_13 = 1;
  break;
 default:
  FUNC_1(VAR_10->pci->dev,
   "Unsupported PHY reference clock rate %lu\n", VAR_11);
  return -VAR_0;
 }

 FUNC_2(VAR_10, VAR_9, &VAR_14);
 VAR_14 &= ~(VAR_6 <<
   VAR_8);
 VAR_14 |= VAR_12 << VAR_8;
 VAR_14 |= VAR_7;
 FUNC_3(VAR_10, VAR_9, VAR_14);

 FUNC_2(VAR_10, VAR_2, &VAR_14);
 VAR_14 &= ~(VAR_4 <<
   VAR_5);
 VAR_14 |= VAR_13 << VAR_5;
 VAR_14 |= VAR_3;
 FUNC_3(VAR_10, VAR_2, VAR_14);

 return 0;
}
