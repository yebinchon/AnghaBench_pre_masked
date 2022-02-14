
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcr20a_local {int irq_msg; int spi; int * irq_header; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct mcr20a_local *VAR_5 = VAR_4;
 int VAR_6;

 FUNC_1(VAR_3);

 VAR_5->irq_header[0] = FUNC_0(VAR_0);

 VAR_6 = FUNC_3(VAR_5->spi, &VAR_5->irq_msg);
 if (VAR_6) {
  FUNC_2(VAR_3);
  return VAR_2;
 }

 return VAR_1;
}
