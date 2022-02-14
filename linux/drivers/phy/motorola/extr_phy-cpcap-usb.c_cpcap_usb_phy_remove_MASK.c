
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct cpcap_phy_ddata {int vusb; int refclk; int detect_work; int phy; int dev; int active; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cpcap_phy_ddata*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 struct cpcap_phy_ddata* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct cpcap_phy_ddata *VAR_2 = FUNC_6(VAR_1);
 int VAR_3;

 FUNC_0(&VAR_2->active, 0);
 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  FUNC_4(VAR_2->dev, "could not set UART mode\n");

 VAR_3 = FUNC_5(VAR_0);
 if (VAR_3)
  FUNC_4(VAR_2->dev, "could not set mailbox\n");

 FUNC_8(&VAR_2->phy);
 FUNC_1(&VAR_2->detect_work);
 FUNC_2(VAR_2->refclk);
 FUNC_7(VAR_2->vusb);

 return 0;
}
