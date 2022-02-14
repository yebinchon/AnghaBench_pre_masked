
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65217 {int irq_domain; int dev; } ;
typedef int irqreturn_t ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct tps65217*,int ,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct tps65217 *VAR_6 = VAR_5;
 unsigned int VAR_7;
 bool VAR_8 = 0;
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_6, VAR_3, &VAR_7);
 if (VAR_10 < 0) {
  FUNC_1(VAR_6->dev, "Failed to read IRQ status: %d\n",
   VAR_10);
  return VAR_1;
 }

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if (VAR_7 & FUNC_0(VAR_9)) {
   FUNC_2(FUNC_3(VAR_6->irq_domain, VAR_9));
   VAR_8 = 1;
  }
 }

 if (VAR_8)
  return VAR_0;

 return VAR_1;
}
