
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int mmds; int prtad; } ;
struct ef4_nic {int mac_lock; TYPE_1__ mdio; int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ef4_nic*,int ) ;
 int FUNC_2 (struct ef4_nic*,int,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ef4_nic*,int ,int ,char*,int ) ;

int FUNC_6(struct ef4_nic *VAR_4)
{
 int VAR_5;
 int VAR_6 = FUNC_0(VAR_4->mdio.mmds);
 u16 VAR_7, VAR_8;

 FUNC_3(&VAR_4->mac_lock);

 VAR_7 = FUNC_2(VAR_4, VAR_6, VAR_1);
 VAR_8 = FUNC_2(VAR_4, VAR_6, VAR_2);

 if ((VAR_7 == 0x0000) || (VAR_7 == 0xffff) ||
     (VAR_8 == 0x0000) || (VAR_8 == 0xffff)) {
  FUNC_5(VAR_4, VAR_3, VAR_4->net_dev,
     "no MDIO PHY present with ID %d\n", VAR_4->mdio.prtad);
  VAR_5 = -VAR_0;
 } else {
  VAR_5 = FUNC_1(VAR_4, VAR_4->mdio.mmds);
 }

 FUNC_4(&VAR_4->mac_lock);
 return VAR_5;
}
