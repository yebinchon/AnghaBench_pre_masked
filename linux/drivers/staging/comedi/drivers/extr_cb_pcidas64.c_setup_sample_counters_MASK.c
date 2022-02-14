
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {scalar_t__ main_iobase; } ;
struct comedi_device {struct pcidas64_private* private; } ;
struct comedi_cmd {int stop_arg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct comedi_cmd*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_2,
      struct comedi_cmd *VAR_3)
{
 struct pcidas64_private *VAR_4 = VAR_2->private;


 if (FUNC_0(VAR_3)) {
  FUNC_1(VAR_3->stop_arg & 0xffff,
         VAR_4->main_iobase + VAR_0);
  FUNC_1((VAR_3->stop_arg >> 16) & 0xff,
         VAR_4->main_iobase + VAR_1);
 } else {
  FUNC_1(1, VAR_4->main_iobase + VAR_0);
 }
}
