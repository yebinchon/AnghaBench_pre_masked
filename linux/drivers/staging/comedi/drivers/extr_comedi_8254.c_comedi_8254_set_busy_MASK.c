
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_8254 {int* busy; } ;



void FUNC_0(struct comedi_8254 *VAR_0,
     unsigned int VAR_1, bool VAR_2)
{
 if (VAR_1 < 3)
  VAR_0->busy[VAR_1] = VAR_2;
}
