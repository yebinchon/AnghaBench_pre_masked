
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int pm2xxx_i2c; } ;
struct pm2xxx_charger {int dev; TYPE_1__ config; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct pm2xxx_charger *VAR_0, int VAR_1, u8 VAR_2)
{
 int VAR_3;


 FUNC_2(VAR_0->dev);

 VAR_3 = FUNC_1(VAR_0->config.pm2xxx_i2c, VAR_1,
    1, &VAR_2);
 if (VAR_3 < 0)
  FUNC_0(VAR_0->dev, "Error writing register at 0x%x\n", VAR_1);
 else
  VAR_3 = 0;

 FUNC_3(VAR_0->dev);

 return VAR_3;
}
