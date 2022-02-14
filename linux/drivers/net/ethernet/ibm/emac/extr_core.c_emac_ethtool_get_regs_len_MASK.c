
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct emac_instance {int tah_dev; int rgmii_dev; int zmii_dev; int mal; } ;
struct emac_ethtool_regs_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct emac_instance*) ;
 scalar_t__ FUNC_1 (struct emac_instance*,int ) ;
 int FUNC_2 (int ) ;
 struct emac_instance* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3)
{
 struct emac_instance *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 VAR_5 = sizeof(struct emac_ethtool_regs_hdr) +
  FUNC_0(VAR_4) + FUNC_2(VAR_4->mal);
 if (FUNC_1(VAR_4, VAR_2))
  VAR_5 += FUNC_6(VAR_4->zmii_dev);
 if (FUNC_1(VAR_4, VAR_0))
  VAR_5 += FUNC_4(VAR_4->rgmii_dev);
 if (FUNC_1(VAR_4, VAR_1))
  VAR_5 += FUNC_5(VAR_4->tah_dev);

 return VAR_5;
}
