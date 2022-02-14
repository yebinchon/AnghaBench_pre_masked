
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_vrefbuf {int dev; scalar_t__ base; } ;
struct regulator_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct stm32_vrefbuf* FUNC_5 (struct regulator_dev*) ;
 int FUNC_6 (scalar_t__,int,int,int,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct regulator_dev *VAR_4)
{
 struct stm32_vrefbuf *VAR_5 = FUNC_5(VAR_4);
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5->dev);
 if (VAR_7 < 0) {
  FUNC_4(VAR_5->dev);
  return VAR_7;
 }

 VAR_6 = FUNC_7(VAR_5->base + VAR_2);
 VAR_6 = (VAR_6 & ~VAR_1) | VAR_0;
 FUNC_8(VAR_6, VAR_5->base + VAR_2);







 VAR_7 = FUNC_6(VAR_5->base + VAR_2, VAR_6,
     VAR_6 & VAR_3, 650, 10000);
 if (VAR_7) {
  FUNC_0(&VAR_4->dev, "stm32 vrefbuf timed out!\n");
  VAR_6 = FUNC_7(VAR_5->base + VAR_2);
  VAR_6 = (VAR_6 & ~VAR_0) | VAR_1;
  FUNC_8(VAR_6, VAR_5->base + VAR_2);
 }

 FUNC_2(VAR_5->dev);
 FUNC_3(VAR_5->dev);

 return VAR_7;
}
