
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2,
      struct comedi_cmd *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->chanlist_len; ++VAR_4) {
  unsigned int VAR_5 = FUNC_0(VAR_3->chanlist[VAR_4]);

  if (VAR_5 != VAR_4)
   return -VAR_0;
 }

 return 0;
}
