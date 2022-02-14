
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int irq; scalar_t__ mmio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_0)
{
 unsigned int VAR_1;
 int VAR_2;


 FUNC_0(VAR_0->irq);


 FUNC_3(0, VAR_0->mmio + 8);


 VAR_1 = FUNC_2(VAR_0->mmio + 16);
 FUNC_3(VAR_1, VAR_0->mmio + 16);


 FUNC_2(VAR_0->mmio + 20);


 for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
  VAR_1 = FUNC_2(VAR_0->mmio + 28);


 FUNC_1(VAR_0->irq);

 return 0;
}
