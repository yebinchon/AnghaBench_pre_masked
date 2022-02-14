
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_channel {scalar_t__ dir; } ;
struct comedi_subdevice {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mite_channel*,struct comedi_subdevice*) ;
 int FUNC_1 (struct mite_channel*,struct comedi_subdevice*) ;

void FUNC_2(struct mite_channel *VAR_1, struct comedi_subdevice *VAR_2)
{
 if (VAR_1->dir == VAR_0)
  FUNC_0(VAR_1, VAR_2);
 else
  FUNC_1(VAR_1, VAR_2);
}
