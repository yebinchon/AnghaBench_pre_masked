
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stih_cec {int irq_status; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stih_cec*,int) ;
 int FUNC_1 (struct stih_cec*,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct stih_cec *VAR_5 = VAR_4;

 if (VAR_5->irq_status & VAR_1)
  FUNC_1(VAR_5, VAR_5->irq_status);

 if (VAR_5->irq_status & VAR_0)
  FUNC_0(VAR_5, VAR_5->irq_status);

 VAR_5->irq_status = 0;

 return VAR_2;
}
