
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_tm_dev {int tz_dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct uniphier_tm_dev *VAR_4 = VAR_3;

 FUNC_0(VAR_4->tz_dev, VAR_1);

 return VAR_0;
}
