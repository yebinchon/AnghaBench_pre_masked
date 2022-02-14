
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32_pwr_reg {scalar_t__ base; } ;
struct regulator_dev {int dev; TYPE_1__* desc; } ;
struct TYPE_2__ {int enable_mask; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct stm32_pwr_reg* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,struct regulator_dev*,int ,int,int,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_2)
{
 struct stm32_pwr_reg *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;
 u32 VAR_5;

 VAR_5 = FUNC_2(VAR_3->base + VAR_0);
 VAR_5 &= ~VAR_2->desc->enable_mask;
 FUNC_4(VAR_5, VAR_3->base + VAR_0);


 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_5, !VAR_5,
     100, 20 * 1000);
 if (VAR_4)
  FUNC_0(&VAR_2->dev, "regulator disable timed out!\n");

 return VAR_4;
}
