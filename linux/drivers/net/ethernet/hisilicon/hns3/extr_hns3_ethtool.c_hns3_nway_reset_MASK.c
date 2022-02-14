
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct hnae3_handle {TYPE_1__* pdev; TYPE_2__* ae_algo; } ;
struct hnae3_ae_ops {int (* get_autoneg ) (struct hnae3_handle*) ;int (* restart_autoneg ) (struct hnae3_handle*) ;} ;
struct TYPE_4__ {struct hnae3_ae_ops* ops; } ;
struct TYPE_3__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct phy_device*) ;
 struct hnae3_handle* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct hnae3_handle*,int ,struct net_device*,char*,char*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct hnae3_handle*) ;
 int FUNC_7 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_5)
{
 struct hnae3_handle *VAR_6 = FUNC_1(VAR_5);
 const struct hnae3_ae_ops *VAR_7 = VAR_6->ae_algo->ops;
 struct phy_device *VAR_8 = VAR_5->phydev;
 int VAR_9;

 if (!FUNC_5(VAR_5))
  return 0;

 if (FUNC_2(VAR_5)) {
  FUNC_3(VAR_5, "dev resetting!");
  return -VAR_1;
 }

 if (!VAR_7->get_autoneg || !VAR_7->restart_autoneg)
  return -VAR_3;

 VAR_9 = VAR_7->get_autoneg(VAR_6);
 if (VAR_9 != VAR_0) {
  FUNC_3(VAR_5,
      "Autoneg is off, don't support to restart it\n");
  return -VAR_2;
 }

 FUNC_4(VAR_6, VAR_4, VAR_5,
    "nway reset (using %s)\n", VAR_8 ? "phy" : "mac");

 if (VAR_8)
  return FUNC_0(VAR_8);

 if (VAR_6->pdev->revision == 0x20)
  return -VAR_3;

 return VAR_7->restart_autoneg(VAR_6);
}
