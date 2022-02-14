
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int adapter_enable_int; } ;
struct aac_dev {TYPE_2__* pdev; scalar_t__ msi_enabled; scalar_t__ sa_firmware; TYPE_1__ a_ops; } ;
struct TYPE_6__ {int OMR; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_0 (struct aac_dev*) ;
 int FUNC_1 (struct aac_dev*) ;
 int FUNC_2 (struct aac_dev*) ;
 int VAR_5 ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct aac_dev*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct aac_dev *VAR_7, int VAR_8, u8 VAR_9)
{
 bool VAR_10;
 int VAR_11 = 0;

 if (VAR_8 < 0)
  goto invalid_out;

 if (VAR_8)
  FUNC_3(&VAR_7->pdev->dev, "adapter kernel panic'd %x.\n", VAR_8);




 if (VAR_8 >= 2 && VAR_7->sa_firmware && VAR_9 & VAR_1)
  VAR_9 &= ~VAR_1;

 VAR_7->a_ops.adapter_enable_int = VAR_5;

 FUNC_3(&VAR_7->pdev->dev, "Controller reset type is %d\n", VAR_9);

 if (VAR_9 & VAR_1) {
  FUNC_4(&VAR_7->pdev->dev, "Issuing IOP reset\n");
  FUNC_2(VAR_7);




  VAR_10 = FUNC_0(VAR_7);
  if (!VAR_10)
   FUNC_3(&VAR_7->pdev->dev, "IOP reset failed\n");
  else {
   FUNC_4(&VAR_7->pdev->dev, "IOP reset succeeded\n");
   goto set_startup;
  }
 }

 if (!VAR_7->sa_firmware) {
  FUNC_3(&VAR_7->pdev->dev, "ARC Reset attempt failed\n");
  VAR_11 = -VAR_0;
  goto out;
 }

 if (VAR_9 & VAR_2) {
  FUNC_4(&VAR_7->pdev->dev, "Issuing SOFT reset\n");
  FUNC_1(VAR_7);
  VAR_7->msi_enabled = 0;

  VAR_10 = FUNC_0(VAR_7);
  if (!VAR_10) {
   FUNC_3(&VAR_7->pdev->dev, "SOFT reset failed\n");
   VAR_11 = -VAR_0;
   goto out;
  } else
   FUNC_4(&VAR_7->pdev->dev, "SOFT reset succeeded\n");
 }

set_startup:
 if (VAR_6 < 300)
  VAR_6 = 300;

out:
 return VAR_11;

invalid_out:
 if (FUNC_5(VAR_7, VAR_4.OMR) & VAR_3)
  VAR_11 = -VAR_0;
goto out;
}
