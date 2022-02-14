
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_ioa_cfg {int saved_pcix_cmd_reg; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_3(struct ipr_ioa_cfg *VAR_6)
{
 int VAR_7 = FUNC_1(VAR_6->pdev, VAR_2);

 if (VAR_7 == 0)
  return 0;

 if (FUNC_2(VAR_6->pdev, VAR_7 + VAR_3,
     &VAR_6->saved_pcix_cmd_reg) != VAR_1) {
  FUNC_0(&VAR_6->pdev->dev, "Failed to save PCI-X command register\n");
  return -VAR_0;
 }

 VAR_6->saved_pcix_cmd_reg |= VAR_4 | VAR_5;
 return 0;
}
