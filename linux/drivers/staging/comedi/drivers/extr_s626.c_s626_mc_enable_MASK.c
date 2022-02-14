
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0,
      unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = (VAR_1 << 16) | VAR_1;

 FUNC_0(VAR_3, VAR_0->mmio + VAR_2);
}
