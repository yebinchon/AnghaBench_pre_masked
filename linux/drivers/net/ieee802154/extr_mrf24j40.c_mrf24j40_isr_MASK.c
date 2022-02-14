
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrf24j40 {int irq_msg; int spi; scalar_t__* irq_buf; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct mrf24j40 *VAR_5 = VAR_4;
 int VAR_6;

 FUNC_1(VAR_3);

 VAR_5->irq_buf[0] = FUNC_0(VAR_2);
 VAR_5->irq_buf[1] = 0;


 VAR_6 = FUNC_3(VAR_5->spi, &VAR_5->irq_msg);
 if (VAR_6) {
  FUNC_2(VAR_3);
  return VAR_1;
 }

 return VAR_0;
}
