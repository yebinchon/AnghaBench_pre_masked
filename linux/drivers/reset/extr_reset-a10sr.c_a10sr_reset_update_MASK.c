
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct reset_controller_dev {int dummy; } ;
struct a10sr_reset {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,int,int ,int ) ;
 struct a10sr_reset* FUNC_4 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_5(struct reset_controller_dev *VAR_1,
         unsigned long VAR_2, bool VAR_3)
{
 struct a10sr_reset *VAR_4 = FUNC_4(VAR_1);
 int VAR_5 = FUNC_2(VAR_2);
 u8 VAR_6 = FUNC_0(VAR_5);
 int VAR_7 = VAR_0 + FUNC_1(VAR_5);

 return FUNC_3(VAR_4->regmap, VAR_7, VAR_6, VAR_3 ? 0 : VAR_6);
}
