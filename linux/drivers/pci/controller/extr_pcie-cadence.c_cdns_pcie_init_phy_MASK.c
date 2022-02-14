
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dev; } ;
struct device_node {int dummy; } ;
struct device_link {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct cdns_pcie {int phy_count; struct device_link** link; struct phy** phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (struct cdns_pcie*) ;
 int FUNC_3 (struct device*,char*) ;
 struct device_link* FUNC_4 (struct device*,int *,int ) ;
 int FUNC_5 (struct device_link*) ;
 void* FUNC_6 (struct device*,int,int,int ) ;
 struct phy* FUNC_7 (struct device*,char const*) ;
 int FUNC_8 (struct device*,struct phy*) ;
 int FUNC_9 (struct device_node*,char*) ;
 int FUNC_10 (struct device_node*,char*,int,char const**) ;

int FUNC_11(struct device *VAR_4, struct cdns_pcie *VAR_5)
{
 struct device_node *VAR_6 = VAR_4->of_node;
 int VAR_7;
 struct phy **VAR_8;
 struct device_link **VAR_9;
 int VAR_10;
 int VAR_11;
 const char *VAR_12;

 VAR_7 = FUNC_9(VAR_6, "phy-names");
 if (VAR_7 < 1) {
  FUNC_3(VAR_4, "no phy-names.  PHY will not be initialized\n");
  VAR_5->phy_count = 0;
  return 0;
 }

 VAR_8 = FUNC_6(VAR_4, VAR_7, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_9 = FUNC_6(VAR_4, VAR_7, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  FUNC_10(VAR_6, "phy-names", VAR_10, &VAR_12);
  VAR_8[VAR_10] = FUNC_7(VAR_4, VAR_12);
  if (FUNC_0(VAR_8[VAR_10])) {
   VAR_11 = FUNC_1(VAR_8[VAR_10]);
   goto err_phy;
  }
  VAR_9[VAR_10] = FUNC_4(VAR_4, &VAR_8[VAR_10]->dev, VAR_0);
  if (!VAR_9[VAR_10]) {
   FUNC_8(VAR_4, VAR_8[VAR_10]);
   VAR_11 = -VAR_1;
   goto err_phy;
  }
 }

 VAR_5->phy_count = VAR_7;
 VAR_5->phy = VAR_8;
 VAR_5->link = VAR_9;

 VAR_11 = FUNC_2(VAR_5);
 if (VAR_11)
  goto err_phy;

 return 0;

err_phy:
 while (--VAR_10 >= 0) {
  FUNC_5(VAR_9[VAR_10]);
  FUNC_8(VAR_4, VAR_8[VAR_10]);
 }

 return VAR_11;
}
