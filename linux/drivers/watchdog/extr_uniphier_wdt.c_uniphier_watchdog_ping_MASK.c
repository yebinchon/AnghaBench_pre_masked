
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct uniphier_wdt_dev {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct uniphier_wdt_dev* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_4)
{
 struct uniphier_wdt_dev *VAR_5 = FUNC_2(VAR_4);
 unsigned int VAR_6;
 int VAR_7;


 VAR_7 = FUNC_1(VAR_5->regmap, VAR_0,
    VAR_1, VAR_1);
 if (!VAR_7)




  VAR_7 = FUNC_0(VAR_5->regmap, VAR_0, VAR_6,
            (VAR_6 & VAR_2),
            0, VAR_3);

 return VAR_7;
}
