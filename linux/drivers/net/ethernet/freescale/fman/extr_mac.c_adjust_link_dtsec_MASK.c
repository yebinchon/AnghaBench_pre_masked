
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int speed; int link; } ;
struct mac_device {TYPE_1__* priv; struct fman_mac* fman_mac; struct phy_device* phy_dev; } ;
struct fman_mac {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct fman_mac*,int ) ;
 int FUNC_2 (struct fman_mac*) ;
 int FUNC_3 (struct mac_device*,int*,int*) ;
 int FUNC_4 (struct mac_device*,int,int) ;

__attribute__((used)) static void FUNC_5(struct mac_device *VAR_0)
{
 struct phy_device *VAR_1 = VAR_0->phy_dev;
 struct fman_mac *VAR_2;
 bool VAR_3, VAR_4;
 int VAR_5;

 VAR_2 = VAR_0->fman_mac;
 if (!VAR_1->link) {
  FUNC_2(VAR_2);

  return;
 }

 FUNC_1(VAR_2, VAR_1->speed);
 FUNC_3(VAR_0, &VAR_3, &VAR_4);
 VAR_5 = FUNC_4(VAR_0, VAR_3, VAR_4);
 if (VAR_5 < 0)
  FUNC_0(VAR_0->priv->dev, "fman_set_mac_active_pause() = %d\n",
   VAR_5);
}
