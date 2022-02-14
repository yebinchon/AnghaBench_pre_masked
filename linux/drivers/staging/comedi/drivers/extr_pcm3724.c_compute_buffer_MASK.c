
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int io_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(int VAR_6, int VAR_7, struct comedi_subdevice *VAR_8)
{

 if (VAR_8->io_bits & 0x0000ff) {
  if (VAR_7 == 0)
   VAR_6 |= VAR_0;
  else
   VAR_6 |= VAR_1;
 }
 if (VAR_8->io_bits & 0x00ff00) {
  if (VAR_7 == 0)
   VAR_6 |= VAR_2;
  else
   VAR_6 |= VAR_3;
 }
 if (VAR_8->io_bits & 0xff0000) {
  if (VAR_7 == 0)
   VAR_6 |= VAR_4;
  else
   VAR_6 |= VAR_5;
 }
 return VAR_6;
}
