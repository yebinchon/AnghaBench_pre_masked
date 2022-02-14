
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pm2xxx_charger {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct pm2xxx_charger*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct pm2xxx_charger *VAR_3, u8 *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_4);

 if (VAR_5 < 0) {
  FUNC_0(VAR_3->dev, "Charger detection failed\n");
  goto out;
 }

 *VAR_4 &= (VAR_0 | VAR_1);

out:
 return VAR_5;
}
