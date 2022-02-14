
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_phy {int dummy; } ;
struct hpsa_sas_port {int next_phy_index; TYPE_1__* parent_node; } ;
struct hpsa_sas_phy {struct hpsa_sas_port* parent_port; struct sas_phy* phy; } ;
struct TYPE_2__ {int parent_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct hpsa_sas_phy*) ;
 struct hpsa_sas_phy* FUNC_1 (int,int ) ;
 struct sas_phy* FUNC_2 (int ,int ) ;

__attribute__((used)) static struct hpsa_sas_phy *FUNC_3(
    struct hpsa_sas_port *VAR_1)
{
 struct hpsa_sas_phy *VAR_2;
 struct sas_phy *VAR_3;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_1->parent_node->parent_dev,
  VAR_1->next_phy_index);
 if (!VAR_3) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 VAR_1->next_phy_index++;
 VAR_2->phy = VAR_3;
 VAR_2->parent_port = VAR_1;

 return VAR_2;
}
