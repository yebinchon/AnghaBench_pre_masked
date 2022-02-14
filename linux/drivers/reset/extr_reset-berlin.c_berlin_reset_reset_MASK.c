
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int dummy; } ;
struct berlin_reset_priv {int regmap; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int,int) ;
 struct berlin_reset_priv* FUNC_2 (struct reset_controller_dev*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct reset_controller_dev *VAR_0,
         unsigned long VAR_1)
{
 struct berlin_reset_priv *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = VAR_1 >> 8;
 int VAR_4 = FUNC_0(VAR_1 & 0x1f);

 FUNC_1(VAR_2->regmap, VAR_3, VAR_4);


 FUNC_3(10);

 return 0;
}
