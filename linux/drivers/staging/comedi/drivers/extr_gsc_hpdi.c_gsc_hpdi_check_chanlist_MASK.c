
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int class_dev; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2,
       struct comedi_cmd *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->chanlist_len; VAR_4++) {
  unsigned int VAR_5 = FUNC_0(VAR_3->chanlist[VAR_4]);

  if (VAR_5 != VAR_4) {
   FUNC_1(VAR_1->class_dev,
    "chanlist must be ch 0 to 31 in order\n");
   return -VAR_0;
  }
 }

 return 0;
}
