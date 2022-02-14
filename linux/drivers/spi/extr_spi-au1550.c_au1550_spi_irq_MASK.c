
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au1550_spi {int (* irq_callback ) (struct au1550_spi*) ;} ;
typedef int irqreturn_t ;


 int FUNC_0 (struct au1550_spi*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_0, void *VAR_1)
{
 struct au1550_spi *VAR_2 = VAR_1;
 return VAR_2->irq_callback(VAR_2);
}
