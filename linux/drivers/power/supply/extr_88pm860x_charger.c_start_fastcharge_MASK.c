
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_charger_info {int i2c; int i2c_8606; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (struct pm860x_charger_info*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct pm860x_charger_info *VAR_24)
{
 int VAR_25;

 FUNC_0(VAR_24->dev, "Start Fast-charging!\n");


 VAR_25 = FUNC_1(VAR_24->i2c, VAR_14,
          VAR_2 | VAR_0 |
          VAR_3);
 if (VAR_25 < 0)
  goto out;
 VAR_25 = FUNC_1(VAR_24->i2c_8606, VAR_13,
          VAR_20 | VAR_21);
 if (VAR_25 < 0)
  goto out;
 VAR_25 = FUNC_2(VAR_24->i2c, VAR_15, 0x1f,
         VAR_4);
 if (VAR_25 < 0)
  goto out;

 VAR_25 = FUNC_2(VAR_24->i2c, VAR_16, (0xf << 4),
         VAR_5);
 if (VAR_25 < 0)
  goto out;

 VAR_25 = FUNC_2(VAR_24->i2c, VAR_17,
         VAR_7 | VAR_6,
         VAR_7 | VAR_6);
 if (VAR_25 < 0)
  goto out;
 VAR_25 = FUNC_2(VAR_24->i2c, VAR_18,
         VAR_8 | VAR_9 |
         VAR_10,
         VAR_8 | VAR_9 |
         VAR_10);
 if (VAR_25 < 0)
  goto out;
 VAR_25 = FUNC_2(VAR_24->i2c, VAR_19,
         VAR_11 | VAR_12,
         VAR_11 | VAR_12);
 if (VAR_25 < 0)
  goto out;

 VAR_25 = FUNC_2(VAR_24->i2c, VAR_14, 3,
         VAR_1);

 FUNC_3(VAR_24, VAR_23, VAR_22);
out:
 return VAR_25;
}
