
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct imxdi_dev {TYPE_1__* pdev; scalar_t__ ioaddr; } ;
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
 int VAR_9 ;
 scalar_t__ VAR_10 ;
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
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct imxdi_dev *VAR_21, u32 VAR_22)
{
 u32 VAR_23;

 VAR_23 = FUNC_1(VAR_21->ioaddr + VAR_10);

 FUNC_0(&VAR_21->pdev->dev, "DryIce tamper event detected\n");

 if (VAR_22 & VAR_8)
  FUNC_0(&VAR_21->pdev->dev, "%sVoltage Tamper Event\n",
     VAR_23 & VAR_19 ? "" : "Spurious ");

 if (VAR_22 & VAR_0)
  FUNC_0(&VAR_21->pdev->dev, "%s32768 Hz Clock Tamper Event\n",
     VAR_23 & VAR_11 ? "" : "Spurious ");

 if (VAR_22 & VAR_7)
  FUNC_0(&VAR_21->pdev->dev, "%sTemperature Tamper Event\n",
     VAR_23 & VAR_18 ? "" : "Spurious ");

 if (VAR_22 & VAR_5)
  FUNC_0(&VAR_21->pdev->dev,
     "%sSecure Controller Alarm Event\n",
     VAR_23 & VAR_16 ? "" : "Spurious ");

 if (VAR_22 & VAR_1)
  FUNC_0(&VAR_21->pdev->dev, "%sExternal Boot Tamper Event\n",
     VAR_23 & VAR_12 ? "" : "Spurious ");

 if (VAR_22 & VAR_2)
  FUNC_0(&VAR_21->pdev->dev, "%sExternal Tamper A Event\n",
     VAR_23 & VAR_13 ? "" : "Spurious ");

 if (VAR_22 & VAR_3)
  FUNC_0(&VAR_21->pdev->dev, "%sExternal Tamper B Event\n",
     VAR_23 & VAR_14 ? "" : "Spurious ");

 if (VAR_22 & VAR_9)
  FUNC_0(&VAR_21->pdev->dev, "%sWire-mesh Tamper Event\n",
     VAR_23 & VAR_20 ? "" : "Spurious ");

 if (VAR_22 & VAR_4)
  FUNC_0(&VAR_21->pdev->dev,
     "%sMonotonic-counter Overflow Event\n",
     VAR_23 & VAR_15 ? "" : "Spurious ");

 if (VAR_22 & VAR_6)
  FUNC_0(&VAR_21->pdev->dev, "%sTimer-counter Overflow Event\n",
     VAR_23 & VAR_17 ? "" : "Spurious ");
}
