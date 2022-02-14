
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_bus {char* name; TYPE_1__* parent; int write; int read; struct axienet_local* priv; int id; } ;
struct device_node {int dummy; } ;
struct axienet_local {struct mii_bus* mii_bus; TYPE_1__* dev; scalar_t__ regs_start; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct axienet_local*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct mii_bus* FUNC_1 () ;
 int FUNC_2 (struct mii_bus*) ;
 struct device_node* FUNC_3 (int ,char*) ;
 int FUNC_4 (struct mii_bus*,struct device_node*) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (int ,int ,char*,unsigned long long) ;

int FUNC_7(struct axienet_local *VAR_4)
{
 struct device_node *VAR_5;
 struct mii_bus *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = FUNC_1();
 if (!VAR_6)
  return -VAR_0;

 FUNC_6(VAR_6->id, VAR_1, "axienet-%.8llx",
   (unsigned long long)VAR_4->regs_start);

 VAR_6->priv = VAR_4;
 VAR_6->name = "Xilinx Axi Ethernet MDIO";
 VAR_6->read = VAR_2;
 VAR_6->write = VAR_3;
 VAR_6->parent = VAR_4->dev;
 VAR_4->mii_bus = VAR_6;

 VAR_5 = FUNC_3(VAR_4->dev->of_node, "mdio");
 VAR_7 = FUNC_4(VAR_6, VAR_5);
 FUNC_5(VAR_5);
 if (VAR_7) {
  FUNC_2(VAR_6);
  VAR_4->mii_bus = ((void*)0);
  return VAR_7;
 }
 return 0;
}
