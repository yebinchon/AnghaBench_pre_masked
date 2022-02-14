
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int n_chan; TYPE_2__** range_table_list; TYPE_1__* range_table; struct comedi_device* device; } ;
struct comedi_device {int class_dev; } ;
struct TYPE_4__ {int length; } ;
struct TYPE_3__ {int length; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int,unsigned int,int,int) ;

int FUNC_3(struct comedi_subdevice *VAR_1, int VAR_2,
     unsigned int *VAR_3)
{
 struct comedi_device *VAR_4 = VAR_1->device;
 unsigned int VAR_5;
 int VAR_6, VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_5 = VAR_3[VAR_8];
  VAR_6 = FUNC_0(VAR_5);
  if (VAR_1->range_table)
   VAR_7 = VAR_1->range_table->length;
  else if (VAR_1->range_table_list && VAR_6 < VAR_1->n_chan)
   VAR_7 = VAR_1->range_table_list[VAR_6]->length;
  else
   VAR_7 = 0;
  if (VAR_6 >= VAR_1->n_chan ||
      FUNC_1(VAR_5) >= VAR_7) {
   FUNC_2(VAR_4->class_dev,
     "bad chanlist[%d]=0x%08x chan=%d range length=%d\n",
     VAR_8, VAR_5, VAR_6, VAR_7);
   return -VAR_0;
  }
 }
 return 0;
}
