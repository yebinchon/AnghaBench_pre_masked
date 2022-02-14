
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mdiobb_ctrl {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_mdio_dir ) (struct mdiobb_ctrl*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mdiobb_ctrl*,int ,int,unsigned int) ;
 int FUNC_1 (struct mdiobb_ctrl*) ;
 int FUNC_2 (struct mdiobb_ctrl*,int) ;
 int FUNC_3 (struct mdiobb_ctrl*,unsigned int,int) ;
 int FUNC_4 (struct mdiobb_ctrl*,int ) ;

__attribute__((used)) static int FUNC_5(struct mdiobb_ctrl *VAR_1, int VAR_2, u32 VAR_3)
{
 unsigned int VAR_4 = (VAR_3 >> 16) & 0x1F;
 unsigned int VAR_5 = VAR_3 & 0xFFFF;
 FUNC_0(VAR_1, VAR_0, VAR_2, VAR_4);


 FUNC_2(VAR_1, 1);
 FUNC_2(VAR_1, 0);

 FUNC_3(VAR_1, VAR_5, 16);

 VAR_1->ops->set_mdio_dir(VAR_1, 0);
 FUNC_1(VAR_1);

 return VAR_4;
}
