
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ralink_usb_phy {TYPE_1__* phy; int sysctl; scalar_t__ base; int rstdev; int rsthost; int clk; } ;
struct phy {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int) ;
 struct ralink_usb_phy* FUNC_2 (struct phy*) ;
 int FUNC_3 (struct ralink_usb_phy*) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct phy *VAR_6)
{
 struct ralink_usb_phy *VAR_7 = FUNC_2(VAR_6);
 u32 VAR_8;


 FUNC_5(VAR_7->sysctl, VAR_1,
      VAR_7->clk, VAR_7->clk);


 FUNC_5(VAR_7->sysctl, VAR_2,
      VAR_0,
      VAR_0);


 FUNC_6(VAR_7->rsthost);
 FUNC_6(VAR_7->rstdev);





 FUNC_1(10);

 if (VAR_7->base)
  FUNC_3(VAR_7);


 FUNC_4(VAR_7->sysctl, VAR_3, &VAR_8);
 FUNC_0(&VAR_7->phy->dev, "remote usb device wakeup %s\n",
  (VAR_8 & VAR_4) ? ("enabled") : ("disabled"));
 if (VAR_8 & VAR_5)
  FUNC_0(&VAR_7->phy->dev, "UTMI 8bit 60MHz\n");
 else
  FUNC_0(&VAR_7->phy->dev, "UTMI 16bit 30MHz\n");

 return 0;
}
