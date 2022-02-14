
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_bus {int phy_ignore_ta_mask; struct mdiobb_ctrl* priv; } ;
struct mdiobb_ctrl {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_mdio_dir ) (struct mdiobb_ctrl*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mdiobb_ctrl*,int ,int,int) ;
 int FUNC_1 (struct mdiobb_ctrl*,int,int) ;
 scalar_t__ FUNC_2 (struct mdiobb_ctrl*) ;
 int FUNC_3 (struct mdiobb_ctrl*,int) ;
 int FUNC_4 (struct mdiobb_ctrl*,int ) ;

__attribute__((used)) static int FUNC_5(struct mii_bus *VAR_3, int VAR_4, int VAR_5)
{
 struct mdiobb_ctrl *VAR_6 = VAR_3->priv;
 int VAR_7, VAR_8;

 if (VAR_5 & VAR_2) {
  VAR_5 = FUNC_1(VAR_6, VAR_4, VAR_5);
  FUNC_0(VAR_6, VAR_0, VAR_4, VAR_5);
 } else
  FUNC_0(VAR_6, VAR_1, VAR_4, VAR_5);

 VAR_6->ops->set_mdio_dir(VAR_6, 0);




 if (FUNC_2(VAR_6) != 0 &&
     !(VAR_3->phy_ignore_ta_mask & (1 << VAR_4))) {



  for (VAR_8 = 0; VAR_8 < 32; VAR_8++)
   FUNC_2(VAR_6);

  return 0xffff;
 }

 VAR_7 = FUNC_3(VAR_6, 16);
 FUNC_2(VAR_6);
 return VAR_7;
}
