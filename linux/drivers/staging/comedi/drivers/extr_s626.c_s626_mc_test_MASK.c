
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct comedi_device *VAR_0,
    unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_0->mmio + VAR_2);

 return (VAR_3 & VAR_1) ? 1 : 0;
}
