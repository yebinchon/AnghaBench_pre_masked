
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mmds; } ;
struct ef4_nic {int link_advertising; TYPE_1__* phy_op; TYPE_2__ mdio; } ;
struct TYPE_3__ {int (* set_npage_adv ) (struct ef4_nic*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ef4_nic*,int ,int ) ;
 int FUNC_2 (struct ef4_nic*,int ,int ,int) ;
 int FUNC_3 (struct ef4_nic*,int) ;

void FUNC_4(struct ef4_nic *VAR_13)
{
 int VAR_14;

 FUNC_0(!(VAR_13->mdio.mmds & VAR_11));


 VAR_14 = VAR_2 | VAR_5;
 if (VAR_13->link_advertising & VAR_1)
  VAR_14 |= VAR_4;
 if (VAR_13->link_advertising & VAR_0)
  VAR_14 |= VAR_3;
 FUNC_2(VAR_13, VAR_12, VAR_6, VAR_14);


 VAR_13->phy_op->set_npage_adv(VAR_13, VAR_13->link_advertising);


 VAR_14 = FUNC_1(VAR_13, VAR_12, VAR_10);
 VAR_14 |= VAR_7 | VAR_8 | VAR_9;
 FUNC_2(VAR_13, VAR_12, VAR_10, VAR_14);
}
