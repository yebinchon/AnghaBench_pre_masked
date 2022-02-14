
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u32 ;
struct tps6586x {int irq_en; int irq_domain; int dev; } ;
typedef int irqreturn_t ;
typedef int acks ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int,int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct tps6586x *VAR_5 = VAR_4;
 u32 VAR_6;
 int VAR_7 = 0;

 VAR_7 = FUNC_5(VAR_5->dev, VAR_2,
        sizeof(VAR_6), (uint8_t *)&VAR_6);

 if (VAR_7 < 0) {
  FUNC_1(VAR_5->dev, "failed to read interrupt status\n");
  return VAR_1;
 }

 VAR_6 = FUNC_4(VAR_6);

 while (VAR_6) {
  int VAR_8 = FUNC_0(VAR_6);

  if (VAR_5->irq_en & (1 << VAR_8))
   FUNC_2(
    FUNC_3(VAR_5->irq_domain, VAR_8));

  VAR_6 &= ~(1 << VAR_8);
 }

 return VAR_0;
}
