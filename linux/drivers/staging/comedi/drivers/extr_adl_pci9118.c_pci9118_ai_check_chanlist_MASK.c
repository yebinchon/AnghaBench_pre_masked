
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci9118_private {int usemux; } ;
struct comedi_subdevice {int n_chan; } ;
struct comedi_device {int class_dev; struct pci9118_private* private; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_2,
         struct comedi_subdevice *VAR_3,
         struct comedi_cmd *VAR_4)
{
 struct pci9118_private *VAR_5 = VAR_2->private;
 unsigned int VAR_6 = FUNC_2(VAR_4->chanlist[0]);
 unsigned int VAR_7 = FUNC_0(VAR_4->chanlist[0]);
 int VAR_8;


 if (VAR_4->chanlist_len == 1)
  return 0;

 for (VAR_8 = 1; VAR_8 < VAR_4->chanlist_len; VAR_8++) {
  unsigned int VAR_9 = FUNC_1(VAR_4->chanlist[VAR_8]);
  unsigned int VAR_10 = FUNC_2(VAR_4->chanlist[VAR_8]);
  unsigned int VAR_11 = FUNC_0(VAR_4->chanlist[VAR_8]);

  if (VAR_11 != VAR_7) {
   FUNC_4(VAR_2->class_dev,
    "Differential and single ended inputs can't be mixed!\n");
   return -VAR_1;
  }
  if (FUNC_3(VAR_3, VAR_10) !=
      FUNC_3(VAR_3, VAR_6)) {
   FUNC_4(VAR_2->class_dev,
    "Bipolar and unipolar ranges can't be mixed!\n");
   return -VAR_1;
  }
  if (!VAR_5->usemux && VAR_11 == VAR_0 &&
      (VAR_9 >= (VAR_3->n_chan / 2))) {
   FUNC_4(VAR_2->class_dev,
    "AREF_DIFF is only available for the first 8 channels!\n");
   return -VAR_1;
  }
 }

 return 0;
}
