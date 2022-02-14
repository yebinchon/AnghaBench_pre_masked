
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0)
{
 if ((FUNC_0(VAR_0->mmio + 8) & 0x80000) == 0x80000)
  return 1;

 return 0;
}
