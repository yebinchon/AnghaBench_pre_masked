
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_client {int dev; } ;
struct bh1770_chip {int prox_coef; int prox_const; int chipname; int lux_cf; scalar_t__ revision; struct i2c_client* client; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (int ,int,char*) ;

__attribute__((used)) static int FUNC_3(struct bh1770_chip *VAR_11)
{
 struct i2c_client *VAR_12 = VAR_11->client;
 s32 VAR_13;
 u8 VAR_14, VAR_15;

 VAR_13 = FUNC_1(VAR_12, VAR_1);
 if (VAR_13 < 0)
  goto error;
 VAR_14 = (u8)VAR_13;

 VAR_13 = FUNC_1(VAR_12, VAR_6);
 if (VAR_13 < 0)
  goto error;
 VAR_15 = (u8)VAR_13;

 VAR_11->revision = (VAR_15 & VAR_8) >> VAR_9;
 VAR_11->prox_coef = VAR_0;
 VAR_11->prox_const = 0;
 VAR_11->lux_cf = VAR_4;

 if ((VAR_14 == VAR_3) &&
     ((VAR_15 & VAR_7) == VAR_5)) {
  FUNC_2(VAR_11->chipname, sizeof(VAR_11->chipname), "BH1770GLC");
  return 0;
 }

 if ((VAR_14 == VAR_2) &&
     ((VAR_15 & VAR_7) == VAR_5)) {
  FUNC_2(VAR_11->chipname, sizeof(VAR_11->chipname), "SFH7770");

  VAR_11->prox_coef = 819;
  VAR_11->prox_const = 40;
  return 0;
 }

 VAR_13 = -VAR_10;
error:
 FUNC_0(&VAR_12->dev, "BH1770 or SFH7770 not found\n");

 return VAR_13;
}
