
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpmc_device {int nirqs; int dev; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 int VAR_7, VAR_8;
 u32 VAR_9, VAR_10;
 struct gpmc_device *VAR_11 = VAR_6;

 VAR_9 = FUNC_3(VAR_0);
 VAR_10 = VAR_9;

 if (!VAR_9)
  return VAR_3;

 for (VAR_7 = 0; VAR_7 < VAR_11->nirqs; VAR_7++) {

  if (VAR_7 == VAR_1)
   VAR_10 >>= 8 - VAR_1;

  if (VAR_10 & FUNC_0(VAR_7)) {
   VAR_8 = FUNC_5(VAR_4, VAR_7);
   if (!VAR_8) {
    FUNC_1(VAR_11->dev,
      "spurious irq detected hwirq %d, virq %d\n",
      VAR_7, VAR_8);
   }

   FUNC_2(VAR_8);
  }
 }

 FUNC_4(VAR_0, VAR_9);

 return VAR_2;
}
