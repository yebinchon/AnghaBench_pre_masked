
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6060_priv {int sw_addr; int bus; } ;
struct device {int dummy; } ;
struct mdio_device {int addr; int bus; struct device dev; } ;
struct dsa_switch {int * ops; struct device* dev; struct mv88e6060_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,char const*) ;
 int FUNC_1 (struct device*,struct dsa_switch*) ;
 struct mv88e6060_priv* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct dsa_switch*) ;
 struct dsa_switch* FUNC_4 (struct device*,int ) ;
 char* FUNC_5 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct mdio_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct mv88e6060_priv *VAR_7;
 struct dsa_switch *VAR_8;
 const char *VAR_9;

 VAR_7 = FUNC_2(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->bus = VAR_5->bus;
 VAR_7->sw_addr = VAR_5->addr;

 VAR_9 = FUNC_5(VAR_7->bus, VAR_7->sw_addr);
 if (!VAR_9)
  return -VAR_0;

 FUNC_0(VAR_6, "switch %s detected\n", VAR_9);

 VAR_8 = FUNC_4(VAR_6, VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->priv = VAR_7;
 VAR_8->dev = VAR_6;
 VAR_8->ops = &VAR_4;

 FUNC_1(VAR_6, VAR_8);

 return FUNC_3(VAR_8);
}
