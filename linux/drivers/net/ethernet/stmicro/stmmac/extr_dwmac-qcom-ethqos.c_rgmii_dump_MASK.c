
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_ethqos {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct qcom_ethqos*,int ) ;

__attribute__((used)) static void FUNC_2(struct qcom_ethqos *VAR_9)
{
 FUNC_0(&VAR_9->pdev->dev, "Rgmii register dump\n");
 FUNC_0(&VAR_9->pdev->dev, "RGMII_IO_MACRO_CONFIG: %x\n",
  FUNC_1(VAR_9, VAR_1));
 FUNC_0(&VAR_9->pdev->dev, "SDCC_HC_REG_DLL_CONFIG: %x\n",
  FUNC_1(VAR_9, VAR_6));
 FUNC_0(&VAR_9->pdev->dev, "SDCC_HC_REG_DDR_CONFIG: %x\n",
  FUNC_1(VAR_9, VAR_5));
 FUNC_0(&VAR_9->pdev->dev, "SDCC_HC_REG_DLL_CONFIG2: %x\n",
  FUNC_1(VAR_9, VAR_7));
 FUNC_0(&VAR_9->pdev->dev, "SDC4_STATUS: %x\n",
  FUNC_1(VAR_9, VAR_4));
 FUNC_0(&VAR_9->pdev->dev, "SDCC_USR_CTL: %x\n",
  FUNC_1(VAR_9, VAR_8));
 FUNC_0(&VAR_9->pdev->dev, "RGMII_IO_MACRO_CONFIG2: %x\n",
  FUNC_1(VAR_9, VAR_2));
 FUNC_0(&VAR_9->pdev->dev, "RGMII_IO_MACRO_DEBUG1: %x\n",
  FUNC_1(VAR_9, VAR_3));
 FUNC_0(&VAR_9->pdev->dev, "EMAC_SYSTEM_LOW_POWER_DEBUG: %x\n",
  FUNC_1(VAR_9, VAR_0));
}
