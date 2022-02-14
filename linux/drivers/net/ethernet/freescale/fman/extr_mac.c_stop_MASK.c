
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_priv_s {int (* disable ) (int ,int ) ;} ;
struct mac_device {int fman_mac; scalar_t__ phy_dev; struct mac_priv_s* priv; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mac_device *VAR_1)
{
 struct mac_priv_s *VAR_2 = VAR_1->priv;

 if (VAR_1->phy_dev)
  FUNC_0(VAR_1->phy_dev);

 return VAR_2->disable(VAR_1->fman_mac, VAR_0);
}
