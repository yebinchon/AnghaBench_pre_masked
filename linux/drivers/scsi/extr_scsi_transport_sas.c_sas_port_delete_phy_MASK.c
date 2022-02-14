
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_port {int phy_list_mutex; int num_phys; } ;
struct sas_phy {int port_siblings; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sas_port*,struct sas_phy*) ;

void FUNC_4(struct sas_port *VAR_0, struct sas_phy *VAR_1)
{
 FUNC_1(&VAR_0->phy_list_mutex);
 FUNC_3(VAR_0, VAR_1);
 FUNC_0(&VAR_1->port_siblings);
 VAR_0->num_phys--;
 FUNC_2(&VAR_0->phy_list_mutex);
}
