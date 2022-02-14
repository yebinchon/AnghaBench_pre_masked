
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {int dummy; } ;
struct asd_sas_port {int id; int dev_list_lock; struct sas_ha_struct* ha; int phy_list; int phy_list_lock; int sas_port_del_list; int destroy_list; int disco_list; int dev_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct asd_sas_port*,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct asd_sas_port *VAR_0,
     struct sas_ha_struct *VAR_1, int VAR_2)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->id = VAR_2;
 FUNC_0(&VAR_0->dev_list);
 FUNC_0(&VAR_0->disco_list);
 FUNC_0(&VAR_0->destroy_list);
 FUNC_0(&VAR_0->sas_port_del_list);
 FUNC_2(&VAR_0->phy_list_lock);
 FUNC_0(&VAR_0->phy_list);
 VAR_0->ha = VAR_1;

 FUNC_2(&VAR_0->dev_list_lock);
}
