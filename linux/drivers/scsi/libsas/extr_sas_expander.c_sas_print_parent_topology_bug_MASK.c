
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ex_phy {int phy_id; } ;
struct domain_device {size_t dev_type; int sas_addr; struct domain_device* parent; } ;


 int FUNC_0 (int ) ;


 int FUNC_1 (char*,char const*,int ,int ,char const*,int ,int ,int ,int ) ;
 int FUNC_2 (struct domain_device*,struct ex_phy*) ;

__attribute__((used)) static void FUNC_3(struct domain_device *VAR_0,
       struct ex_phy *VAR_1,
       struct ex_phy *VAR_2)
{
 static const char *VAR_3[] = {
  [129] = "edge",
  [128] = "fanout",
 };
 struct domain_device *VAR_4 = VAR_0->parent;

 FUNC_1("%s ex %016llx phy%02d <--> %s ex %016llx phy%02d has %c:%c routing link!\n",
    VAR_3[VAR_4->dev_type],
    FUNC_0(VAR_4->sas_addr),
    VAR_1->phy_id,

    VAR_3[VAR_0->dev_type],
    FUNC_0(VAR_0->sas_addr),
    VAR_2->phy_id,

    FUNC_2(VAR_4, VAR_1),
    FUNC_2(VAR_0, VAR_2));
}
