
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netcp_addr {int addr; int type; } ;
struct gbe_priv {int dev; } ;
struct gbe_intf {struct gbe_priv* gbe_dev; } ;







 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct gbe_intf*,int ) ;
 int FUNC_2 (struct gbe_intf*,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, struct netcp_addr *VAR_1)
{
 struct gbe_intf *VAR_2 = VAR_0;
 struct gbe_priv *VAR_3 = VAR_2->gbe_dev;

 FUNC_0(VAR_3->dev, "ethss adding address %pM, type %d\n",
  VAR_1->addr, VAR_1->type);

 switch (VAR_1->type) {
 case 129:
 case 131:
  FUNC_1(VAR_2, VAR_1->addr);
  break;
 case 128:
 case 130:
  FUNC_2(VAR_2, VAR_1->addr);
  break;
 case 132:

 default:
  break;
 }

 return 0;
}
