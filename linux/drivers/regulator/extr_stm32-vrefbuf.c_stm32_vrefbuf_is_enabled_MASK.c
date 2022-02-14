
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_vrefbuf {int dev; scalar_t__ base; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct stm32_vrefbuf* FUNC_4 (struct regulator_dev*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_2)
{
 struct stm32_vrefbuf *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->dev);
 if (VAR_4 < 0) {
  FUNC_3(VAR_3->dev);
  return VAR_4;
 }

 VAR_4 = FUNC_5(VAR_3->base + VAR_1) & VAR_0;

 FUNC_1(VAR_3->dev);
 FUNC_2(VAR_3->dev);

 return VAR_4;
}
