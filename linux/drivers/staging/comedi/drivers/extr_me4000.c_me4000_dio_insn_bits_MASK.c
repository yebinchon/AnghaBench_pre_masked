
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4,
    struct comedi_subdevice *VAR_5,
    struct comedi_insn *VAR_6,
    unsigned int *VAR_7)
{
 if (FUNC_0(VAR_5, VAR_7)) {
  FUNC_2((VAR_5->state >> 0) & 0xFF,
       VAR_4->iobase + VAR_0);
  FUNC_2((VAR_5->state >> 8) & 0xFF,
       VAR_4->iobase + VAR_1);
  FUNC_2((VAR_5->state >> 16) & 0xFF,
       VAR_4->iobase + VAR_2);
  FUNC_2((VAR_5->state >> 24) & 0xFF,
       VAR_4->iobase + VAR_3);
 }

 VAR_7[1] = ((FUNC_1(VAR_4->iobase + VAR_0) & 0xFF) << 0) |
    ((FUNC_1(VAR_4->iobase + VAR_1) & 0xFF) << 8) |
    ((FUNC_1(VAR_4->iobase + VAR_2) & 0xFF) << 16) |
    ((FUNC_1(VAR_4->iobase + VAR_3) & 0xFF) << 24);

 return VAR_6->n;
}
