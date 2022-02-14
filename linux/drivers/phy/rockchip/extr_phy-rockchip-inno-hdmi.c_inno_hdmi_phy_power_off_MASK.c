
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy {int dummy; } ;
struct inno_hdmi_phy {int dev; int phyclk; TYPE_2__* plat_data; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* power_off ) (struct inno_hdmi_phy*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 struct inno_hdmi_phy* FUNC_2 (struct phy*) ;
 int FUNC_3 (struct inno_hdmi_phy*) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_1)
{
 struct inno_hdmi_phy *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2->plat_data->ops->power_off)
  return -VAR_0;

 VAR_2->plat_data->ops->power_off(VAR_2);

 FUNC_0(VAR_2->phyclk);

 FUNC_1(VAR_2->dev, "Inno HDMI PHY Power Off\n");

 return 0;
}
