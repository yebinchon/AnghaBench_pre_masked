
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp {struct mii_bus* i2c_mii; int dev; int write; int read; struct i2c_adapter* i2c; } ;
struct mii_bus {char* name; int phy_mask; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mii_bus*) ;
 int FUNC_1 (struct mii_bus*) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;
 struct mii_bus* FUNC_3 (int ,struct i2c_adapter*) ;
 int FUNC_4 (struct mii_bus*) ;
 int FUNC_5 (struct mii_bus*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct sfp *VAR_4, struct i2c_adapter *VAR_5)
{
 struct mii_bus *VAR_6;
 int VAR_7;

 if (!FUNC_2(VAR_5, VAR_1))
  return -VAR_0;

 VAR_4->i2c = VAR_5;
 VAR_4->read = VAR_2;
 VAR_4->write = VAR_3;

 VAR_6 = FUNC_3(VAR_4->dev, VAR_5);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_6->name = "SFP I2C Bus";
 VAR_6->phy_mask = ~0;

 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7 < 0) {
  FUNC_4(VAR_6);
  return VAR_7;
 }

 VAR_4->i2c_mii = VAR_6;

 return 0;
}
