
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_vrefbuf {int dev; scalar_t__ base; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 (int,unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct stm32_vrefbuf* FUNC_5 (struct regulator_dev*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct regulator_dev *VAR_2,
      unsigned VAR_3)
{
 struct stm32_vrefbuf *VAR_4 = FUNC_5(VAR_2);
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4->dev);
 if (VAR_6 < 0) {
  FUNC_4(VAR_4->dev);
  return VAR_6;
 }

 VAR_5 = FUNC_6(VAR_4->base + VAR_0);
 VAR_5 = (VAR_5 & ~VAR_1) | FUNC_0(VAR_1, VAR_3);
 FUNC_7(VAR_5, VAR_4->base + VAR_0);

 FUNC_2(VAR_4->dev);
 FUNC_3(VAR_4->dev);

 return 0;
}
