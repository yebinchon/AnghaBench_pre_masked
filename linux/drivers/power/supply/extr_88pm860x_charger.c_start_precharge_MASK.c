
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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (struct pm860x_charger_info*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct pm860x_charger_info *VAR_16)
{
 int VAR_17;

 FUNC_0(VAR_16->dev, "Start Pre-charging!\n");
 FUNC_3(VAR_16, 0, 0);

 VAR_17 = FUNC_1(VAR_16->i2c_8606, VAR_9,
          VAR_14 | VAR_15);
 if (VAR_17 < 0)
  goto out;

 VAR_17 = FUNC_2(VAR_16->i2c, VAR_10, 3,
         VAR_0);
 if (VAR_17 < 0)
  goto out;

 VAR_17 = FUNC_2(VAR_16->i2c, VAR_11, (0xf << 4),
         VAR_2);
 if (VAR_17 < 0)
  goto out;

 VAR_17 = FUNC_1(VAR_16->i2c, VAR_12,
          VAR_5 | VAR_6 |
          VAR_4 | VAR_3);
 if (VAR_17 < 0)
  goto out;
 VAR_17 = FUNC_2(VAR_16->i2c, VAR_13,
         VAR_7 | VAR_8,
         VAR_7 | VAR_8);
 if (VAR_17 < 0)
  goto out;

 VAR_17 = FUNC_2(VAR_16->i2c, VAR_10, 3,
         VAR_1);
out:
 return VAR_17;
}
