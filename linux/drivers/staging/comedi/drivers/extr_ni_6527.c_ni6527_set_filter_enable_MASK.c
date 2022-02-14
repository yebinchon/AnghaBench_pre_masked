
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0,
         unsigned int VAR_1)
{
 FUNC_1(VAR_1 & 0xff, VAR_0->mmio + FUNC_0(0));
 FUNC_1((VAR_1 >> 8) & 0xff, VAR_0->mmio + FUNC_0(1));
 FUNC_1((VAR_1 >> 16) & 0xff, VAR_0->mmio + FUNC_0(2));
}
