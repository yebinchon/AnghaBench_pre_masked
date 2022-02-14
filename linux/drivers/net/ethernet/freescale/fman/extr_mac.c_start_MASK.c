
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct mac_priv_s {int (* enable ) (int ,int ) ;} ;
struct mac_device {int fman_mac; struct mac_priv_s* priv; struct phy_device* phy_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mac_device *VAR_1)
{
 int VAR_2;
 struct phy_device *VAR_3 = VAR_1->phy_dev;
 struct mac_priv_s *VAR_4 = VAR_1->priv;

 VAR_2 = VAR_4->enable(VAR_1->fman_mac, VAR_0);
 if (!VAR_2 && VAR_3)
  FUNC_0(VAR_3);

 return VAR_2;
}
