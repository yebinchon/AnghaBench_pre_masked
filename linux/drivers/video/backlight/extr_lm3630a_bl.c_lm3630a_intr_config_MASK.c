
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3630a_chip {int irqthread; int dev; int irq; int work; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct lm3630a_chip*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int,char*,struct lm3630a_chip*) ;

__attribute__((used)) static int FUNC_6(struct lm3630a_chip *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_4(VAR_6, VAR_3, 0x87);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(&VAR_6->work, VAR_4);
 VAR_6->irqthread = FUNC_1("lm3630a-irqthd");
 if (!VAR_6->irqthread) {
  FUNC_3(VAR_6->dev, "create irq thread fail\n");
  return -VAR_0;
 }
 if (FUNC_5
     (VAR_6->irq, ((void*)0), VAR_5,
      VAR_2 | VAR_1, "lm3630a_irq", VAR_6)) {
  FUNC_3(VAR_6->dev, "request threaded irq fail\n");
  FUNC_2(VAR_6->irqthread);
  return -VAR_0;
 }
 return VAR_7;
}
