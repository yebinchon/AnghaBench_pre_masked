
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phylink {TYPE_2__* phydev; } ;
struct mii_ioctl_data {int val_out; int val_in; int reg_num; int phy_id; } ;
struct ifreq {int dummy; } ;
struct TYPE_3__ {int addr; } ;
struct TYPE_4__ {TYPE_1__ mdio; } ;


 int FUNC_0 () ;
 int VAR_0 ;



 struct mii_ioctl_data* FUNC_1 (struct ifreq*) ;
 int FUNC_2 (TYPE_2__*,struct ifreq*,int) ;
 int FUNC_3 (struct phylink*,int ,int ) ;
 int FUNC_4 (struct phylink*,int ,int ,int ) ;
 int FUNC_5 (struct phylink*,int ,int ) ;
 int FUNC_6 (struct phylink*,int ,int ,int ) ;

int FUNC_7(struct phylink *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct mii_ioctl_data *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 FUNC_0();

 if (VAR_1->phydev) {

  switch (VAR_3) {
  case 130:
   VAR_4->phy_id = VAR_1->phydev->mdio.addr;


  case 129:
   VAR_5 = FUNC_5(VAR_1, VAR_4->phy_id, VAR_4->reg_num);
   if (VAR_5 >= 0) {
    VAR_4->val_out = VAR_5;
    VAR_5 = 0;
   }
   break;

  case 128:
   VAR_5 = FUNC_6(VAR_1, VAR_4->phy_id, VAR_4->reg_num,
      VAR_4->val_in);
   break;

  default:
   VAR_5 = FUNC_2(VAR_1->phydev, VAR_2, VAR_3);
   break;
  }
 } else {
  switch (VAR_3) {
  case 130:
   VAR_4->phy_id = 0;


  case 129:
   VAR_5 = FUNC_3(VAR_1, VAR_4->phy_id, VAR_4->reg_num);
   if (VAR_5 >= 0) {
    VAR_4->val_out = VAR_5;
    VAR_5 = 0;
   }
   break;

  case 128:
   VAR_5 = FUNC_4(VAR_1, VAR_4->phy_id, VAR_4->reg_num,
      VAR_4->val_in);
   break;

  default:
   VAR_5 = -VAR_0;
   break;
  }
 }

 return VAR_5;
}
