
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_if_info {int phy_id_mask; int reg_num_mask; scalar_t__ phy_id; int mdio_write; int mdio_read; struct net_device* dev; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mii_if_info*,int ,int,int *) ;
 int FUNC_1 (struct ifreq*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct mii_if_info VAR_5;

 VAR_5.dev = VAR_2;
 VAR_5.mdio_read = VAR_0;
 VAR_5.mdio_write = VAR_1;
 VAR_5.phy_id = 0;
 VAR_5.phy_id_mask = 0x3f;
 VAR_5.reg_num_mask = 0x1f;
 return FUNC_0(&VAR_5, FUNC_1(VAR_3), VAR_4, ((void*)0));

}
