
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int runflags; } ;



__attribute__((used)) static void FUNC_0(struct comedi_subdevice *VAR_0,
         unsigned int VAR_1)
{
 VAR_0->runflags |= VAR_1;
}
