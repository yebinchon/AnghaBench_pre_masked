
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_charger_info {scalar_t__ online; int i2c; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (struct pm860x_charger_info*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct pm860x_charger_info *VAR_3, int VAR_4)
{
 FUNC_0(VAR_3->dev, "Stop charging!\n");
 FUNC_1(VAR_3->i2c, VAR_2, 3, VAR_0);
 if (VAR_4 > VAR_1 && VAR_3->online)
  FUNC_2(VAR_3, VAR_1, 0);
}
