
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77650_charger_data {int dev; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct max77650_charger_data *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->map,
    VAR_2,
    VAR_0,
    VAR_1);
 if (VAR_4)
  FUNC_0(VAR_3->dev, "unable to enable the charger: %d\n", VAR_4);

 return VAR_4;
}
