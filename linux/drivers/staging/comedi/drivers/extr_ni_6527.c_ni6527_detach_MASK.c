
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0)
{
 if (VAR_0->mmio)
  FUNC_1(VAR_0);
 FUNC_0(VAR_0);
}
