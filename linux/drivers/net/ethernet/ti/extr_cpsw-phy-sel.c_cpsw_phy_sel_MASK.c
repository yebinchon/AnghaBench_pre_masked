
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {int of_node; } ;
struct cpsw_phy_sel_priv {int (* cpsw_phy_sel ) (struct cpsw_phy_sel_priv*,int ,int) ;} ;
typedef int phy_interface_t ;


 struct device* FUNC_0 (int *,int *,struct device_node*,int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct cpsw_phy_sel_priv* FUNC_2 (struct device*) ;
 int VAR_0 ;
 struct device_node* FUNC_3 (int ,char*) ;
 int FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct cpsw_phy_sel_priv*,int ,int) ;

void FUNC_8(struct device *VAR_2, phy_interface_t VAR_3, int VAR_4)
{
 struct device_node *VAR_5;
 struct cpsw_phy_sel_priv *VAR_6;

 VAR_5 = FUNC_5(VAR_2->of_node, "cpsw-phy-sel", 0);
 if (!VAR_5) {
  VAR_5 = FUNC_3(VAR_2->of_node, "cpsw-phy-sel");
  if (!VAR_5) {
   FUNC_1(VAR_2, "Phy mode driver DT not found\n");
   return;
  }
 }

 VAR_2 = FUNC_0(&VAR_1, ((void*)0), VAR_5, VAR_0);
 if (!VAR_2) {
  FUNC_1(VAR_2, "unable to find platform device for %pOF\n", VAR_5);
  goto out;
 }

 VAR_6 = FUNC_2(VAR_2);

 VAR_6->cpsw_phy_sel(VAR_6, VAR_3, VAR_4);

 FUNC_6(VAR_2);
out:
 FUNC_4(VAR_5);
}
