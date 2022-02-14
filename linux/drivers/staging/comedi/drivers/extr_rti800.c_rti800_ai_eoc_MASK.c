
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_6,
    struct comedi_subdevice *VAR_7,
    struct comedi_insn *VAR_8,
    unsigned long VAR_9)
{
 unsigned char VAR_10;

 VAR_10 = FUNC_0(VAR_6->iobase + VAR_3);
 if (VAR_10 & VAR_5) {
  FUNC_1(0, VAR_6->iobase + VAR_2);
  return -VAR_1;
 }
 if (VAR_10 & VAR_4)
  return 0;
 return -VAR_0;
}
