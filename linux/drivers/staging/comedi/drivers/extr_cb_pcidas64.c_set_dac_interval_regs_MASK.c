
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {scalar_t__ main_iobase; } ;
struct comedi_device {int class_dev; struct pcidas64_private* private; } ;
struct comedi_cmd {scalar_t__ scan_begin_src; int flags; int scan_begin_arg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (int ,int ) ;
 unsigned int VAR_3 ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_4,
      const struct comedi_cmd *VAR_5)
{
 struct pcidas64_private *VAR_6 = VAR_4->private;
 unsigned int VAR_7;

 if (VAR_5->scan_begin_src != VAR_2)
  return;

 VAR_7 = FUNC_1(VAR_5->scan_begin_arg, VAR_5->flags);
 if (VAR_7 > VAR_3) {
  FUNC_0(VAR_4->class_dev, "bug! ao divisor too big\n");
  VAR_7 = VAR_3;
 }
 FUNC_2(VAR_7 & 0xffff,
        VAR_6->main_iobase + VAR_0);
 FUNC_2((VAR_7 >> 16) & 0xff,
        VAR_6->main_iobase + VAR_1);
}
