
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct imx6_pcie {int link_gen; TYPE_1__* drvdata; struct dw_pcie* pci; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int flags; } ;


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
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct dw_pcie*,int ) ;
 int FUNC_4 (struct dw_pcie*) ;
 int FUNC_5 (struct dw_pcie*,int ,int) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct imx6_pcie*) ;
 int FUNC_8 (struct imx6_pcie*) ;

__attribute__((used)) static int FUNC_9(struct imx6_pcie *VAR_10)
{
 struct dw_pcie *VAR_11 = VAR_10->pci;
 struct device *VAR_12 = VAR_11->dev;
 u32 VAR_13;
 int VAR_14;






 VAR_13 = FUNC_3(VAR_11, VAR_4);
 VAR_13 &= ~VAR_7;
 VAR_13 |= VAR_5;
 FUNC_5(VAR_11, VAR_4, VAR_13);


 FUNC_6(VAR_12);

 VAR_14 = FUNC_4(VAR_11);
 if (VAR_14)
  goto err_reset_phy;

 if (VAR_10->link_gen == 2) {

  VAR_13 = FUNC_3(VAR_11, VAR_4);
  VAR_13 &= ~VAR_7;
  VAR_13 |= VAR_6;
  FUNC_5(VAR_11, VAR_4, VAR_13);





  VAR_13 = FUNC_3(VAR_11, VAR_1);
  VAR_13 |= VAR_9;
  FUNC_5(VAR_11, VAR_1, VAR_13);

  if (VAR_10->drvdata->flags &
      VAR_0) {
   VAR_14 = FUNC_8(VAR_10);
   if (VAR_14) {
    FUNC_1(VAR_12, "Failed to bring link up!\n");
    goto err_reset_phy;
   }
  }


  VAR_14 = FUNC_4(VAR_11);
  if (VAR_14) {
   FUNC_1(VAR_12, "Failed to bring link up!\n");
   goto err_reset_phy;
  }
 } else {
  FUNC_2(VAR_12, "Link: Gen2 disabled\n");
 }

 VAR_13 = FUNC_3(VAR_11, VAR_8);
 FUNC_2(VAR_12, "Link up, Gen%i\n", (VAR_13 >> 16) & 0xf);
 return 0;

err_reset_phy:
 FUNC_0(VAR_12, "PHY DEBUG_R0=0x%08x DEBUG_R1=0x%08x\n",
  FUNC_3(VAR_11, VAR_2),
  FUNC_3(VAR_11, VAR_3));
 FUNC_7(VAR_10);
 return VAR_14;
}
