
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pn533_i2c_phy {struct i2c_client* i2c_dev; } ;
struct pn533 {struct pn533_i2c_phy* phy; } ;
struct i2c_client {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct i2c_client*,int const*,int) ;

__attribute__((used)) static int FUNC_1(struct pn533 *VAR_0, gfp_t VAR_1)
{
 struct pn533_i2c_phy *VAR_2 = VAR_0->phy;
 struct i2c_client *VAR_3 = VAR_2->i2c_dev;
 static const u8 VAR_4[6] = {0x00, 0x00, 0xff, 0x00, 0xff, 0x00};

 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_4, 6);

 return VAR_5;
}
