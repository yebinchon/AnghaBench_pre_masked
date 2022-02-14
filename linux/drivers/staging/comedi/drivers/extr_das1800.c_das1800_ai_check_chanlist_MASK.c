
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int class_dev; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
         struct comedi_subdevice *VAR_2,
         struct comedi_cmd *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_3->chanlist[0]);
 bool VAR_5 = FUNC_1(VAR_2, VAR_4);
 int VAR_6;

 for (VAR_6 = 1; VAR_6 < VAR_3->chanlist_len; VAR_6++) {
  VAR_4 = FUNC_0(VAR_3->chanlist[VAR_6]);

  if (VAR_5 != FUNC_1(VAR_2, VAR_4)) {
   FUNC_2(VAR_1->class_dev,
    "unipolar and bipolar ranges cannot be mixed in the chanlist\n");
   return -VAR_0;
  }
 }

 return 0;
}
