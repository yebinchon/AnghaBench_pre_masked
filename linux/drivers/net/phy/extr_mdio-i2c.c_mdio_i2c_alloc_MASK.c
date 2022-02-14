
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {struct i2c_adapter* priv; int write; int read; struct device* parent; int id; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mii_bus* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct mii_bus* FUNC_3 () ;
 int FUNC_4 (int ,int ,char*,char*) ;

struct mii_bus *FUNC_5(struct device *VAR_6, struct i2c_adapter *VAR_7)
{
 struct mii_bus *VAR_8;

 if (!FUNC_2(VAR_7, VAR_2))
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_3();
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 FUNC_4(VAR_8->id, VAR_3, "i2c:%s", FUNC_1(VAR_6));
 VAR_8->parent = VAR_6;
 VAR_8->read = VAR_4;
 VAR_8->write = VAR_5;
 VAR_8->priv = VAR_7;

 return VAR_8;
}
