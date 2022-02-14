
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_vrefbuf {int dev; scalar_t__ base; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct stm32_vrefbuf* FUNC_4 (struct regulator_dev*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct regulator_dev *VAR_3)
{
 struct stm32_vrefbuf *VAR_4 = FUNC_4(VAR_3);
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4->dev);
 if (VAR_6 < 0) {
  FUNC_3(VAR_4->dev);
  return VAR_6;
 }

 VAR_5 = FUNC_5(VAR_4->base + VAR_2);
 VAR_5 = (VAR_5 & ~VAR_0) | VAR_1;
 FUNC_6(VAR_5, VAR_4->base + VAR_2);

 FUNC_1(VAR_4->dev);
 FUNC_2(VAR_4->dev);

 return 0;
}
