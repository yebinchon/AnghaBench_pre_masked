
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct pcidas64_private {scalar_t__ main_iobase; } ;
struct comedi_device {int class_dev; struct pcidas64_private* private; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_1,
          const struct comedi_cmd *VAR_2)
{
 struct pcidas64_private *VAR_3 = VAR_1->private;
 u16 VAR_4;
 unsigned int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_2->chanlist[0]);
 VAR_6 = FUNC_0(VAR_2->chanlist[VAR_2->chanlist_len - 1]);
 if (VAR_6 < VAR_5)
  FUNC_1(VAR_1->class_dev,
   "bug! last ao channel < first ao channel\n");

 VAR_4 = (VAR_5 & 0x7) | (VAR_6 & 0x7) << 3;

 FUNC_2(VAR_4, VAR_3->main_iobase + VAR_0);
}
