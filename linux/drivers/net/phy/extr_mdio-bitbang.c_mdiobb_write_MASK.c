
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mii_bus {struct mdiobb_ctrl* priv; } ;
struct mdiobb_ctrl {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_mdio_dir ) (struct mdiobb_ctrl*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mdiobb_ctrl*,int ,int,int) ;
 int FUNC_1 (struct mdiobb_ctrl*,int,int) ;
 int FUNC_2 (struct mdiobb_ctrl*) ;
 int FUNC_3 (struct mdiobb_ctrl*,int) ;
 int FUNC_4 (struct mdiobb_ctrl*,int ,int) ;
 int FUNC_5 (struct mdiobb_ctrl*,int ) ;

__attribute__((used)) static int FUNC_6(struct mii_bus *VAR_3, int VAR_4, int VAR_5, u16 VAR_6)
{
 struct mdiobb_ctrl *VAR_7 = VAR_3->priv;

 if (VAR_5 & VAR_2) {
  VAR_5 = FUNC_1(VAR_7, VAR_4, VAR_5);
  FUNC_0(VAR_7, VAR_0, VAR_4, VAR_5);
 } else
  FUNC_0(VAR_7, VAR_1, VAR_4, VAR_5);


 FUNC_3(VAR_7, 1);
 FUNC_3(VAR_7, 0);

 FUNC_4(VAR_7, VAR_6, 16);

 VAR_7->ops->set_mdio_dir(VAR_7, 0);
 FUNC_2(VAR_7);
 return 0;
}
