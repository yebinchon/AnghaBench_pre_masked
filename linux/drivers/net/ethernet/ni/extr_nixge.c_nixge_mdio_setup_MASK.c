
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nixge_priv {struct mii_bus* mii_bus; int dev; } ;
struct mii_bus {char* name; int parent; int write; int read; struct nixge_priv* priv; int id; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 struct mii_bus* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct mii_bus*,struct device_node*) ;
 int FUNC_3 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct nixge_priv *VAR_4, struct device_node *VAR_5)
{
 struct mii_bus *VAR_6;

 VAR_6 = FUNC_1(VAR_4->dev);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(VAR_6->id, VAR_1, "%s-mii", FUNC_0(VAR_4->dev));
 VAR_6->priv = VAR_4;
 VAR_6->name = "nixge_mii_bus";
 VAR_6->read = VAR_2;
 VAR_6->write = VAR_3;
 VAR_6->parent = VAR_4->dev;

 VAR_4->mii_bus = VAR_6;

 return FUNC_2(VAR_6, VAR_5);
}
