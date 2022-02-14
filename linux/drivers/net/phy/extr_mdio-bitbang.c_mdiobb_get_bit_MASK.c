
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdiobb_ops {int (* get_mdio_data ) (struct mdiobb_ctrl*) ;int (* set_mdc ) (struct mdiobb_ctrl*,int) ;} ;
struct mdiobb_ctrl {struct mdiobb_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mdiobb_ctrl*,int) ;
 int FUNC_2 (struct mdiobb_ctrl*,int) ;
 int FUNC_3 (struct mdiobb_ctrl*) ;

__attribute__((used)) static int FUNC_4(struct mdiobb_ctrl *VAR_2)
{
 const struct mdiobb_ops *VAR_3 = VAR_2->ops;

 FUNC_0(VAR_0);
 VAR_3->set_mdc(VAR_2, 1);
 FUNC_0(VAR_1);
 VAR_3->set_mdc(VAR_2, 0);

 return VAR_3->get_mdio_data(VAR_2);
}
