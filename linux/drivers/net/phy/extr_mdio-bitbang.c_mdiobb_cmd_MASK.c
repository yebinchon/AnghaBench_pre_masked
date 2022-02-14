
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mdiobb_ops {int (* set_mdio_dir ) (struct mdiobb_ctrl*,int) ;} ;
struct mdiobb_ctrl {struct mdiobb_ops* ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct mdiobb_ctrl*,int) ;
 int FUNC_1 (struct mdiobb_ctrl*,int ,int) ;
 int FUNC_2 (struct mdiobb_ctrl*,int) ;

__attribute__((used)) static void FUNC_3(struct mdiobb_ctrl *VAR_1, int VAR_2, u8 VAR_3, u8 VAR_4)
{
 const struct mdiobb_ops *VAR_5 = VAR_1->ops;
 int VAR_6;

 VAR_5->set_mdio_dir(VAR_1, 1);
 for (VAR_6 = 0; VAR_6 < 32; VAR_6++)
  FUNC_0(VAR_1, 1);




 FUNC_0(VAR_1, 0);
 if (VAR_2 & VAR_0)
  FUNC_0(VAR_1, 0);
 else
  FUNC_0(VAR_1, 1);
 FUNC_0(VAR_1, (VAR_2 >> 1) & 1);
 FUNC_0(VAR_1, (VAR_2 >> 0) & 1);

 FUNC_1(VAR_1, VAR_3, 5);
 FUNC_1(VAR_1, VAR_4, 5);
}
