
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_phy {int dummy; } ;
struct hpsa_sas_phy {int phy_list_entry; scalar_t__ added_to_port; TYPE_1__* parent_port; struct sas_phy* phy; } ;
struct TYPE_2__ {int port; } ;


 int FUNC_0 (struct hpsa_sas_phy*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sas_phy*) ;
 int FUNC_3 (int ,struct sas_phy*) ;

__attribute__((used)) static void FUNC_4(struct hpsa_sas_phy *VAR_0)
{
 struct sas_phy *VAR_1 = VAR_0->phy;

 FUNC_3(VAR_0->parent_port->port, VAR_1);
 if (VAR_0->added_to_port)
  FUNC_1(&VAR_0->phy_list_entry);
 FUNC_2(VAR_1);
 FUNC_0(VAR_0);
}
