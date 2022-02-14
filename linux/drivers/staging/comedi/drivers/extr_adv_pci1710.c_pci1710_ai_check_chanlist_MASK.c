
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci1710_private {int saved_seglen; } ;
struct comedi_subdevice {unsigned int n_chan; } ;
struct comedi_device {int class_dev; struct pci1710_private* private; } ;
struct comedi_cmd {unsigned int* chanlist; int chanlist_len; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2,
         struct comedi_subdevice *VAR_3,
         struct comedi_cmd *VAR_4)
{
 struct pci1710_private *VAR_5 = VAR_2->private;
 unsigned int VAR_6 = FUNC_1(VAR_4->chanlist[0]);
 unsigned int VAR_7 = FUNC_0(VAR_4->chanlist[0]);
 unsigned int VAR_8 = (VAR_6 + 1) % VAR_3->n_chan;
 unsigned int VAR_9[32];
 unsigned int VAR_10;
 int VAR_11;

 if (VAR_4->chanlist_len == 1) {
  VAR_5->saved_seglen = VAR_4->chanlist_len;
  return 0;
 }


 VAR_9[0] = VAR_4->chanlist[0];

 for (VAR_11 = 1; VAR_11 < VAR_4->chanlist_len; VAR_11++) {
  unsigned int VAR_12 = FUNC_1(VAR_4->chanlist[VAR_11]);
  unsigned int VAR_13 = FUNC_0(VAR_4->chanlist[VAR_11]);

  if (VAR_4->chanlist[0] == VAR_4->chanlist[VAR_11])
   break;

  if (VAR_13 == VAR_0 && (VAR_12 & 1)) {
   FUNC_3(VAR_2->class_dev,
    "Odd channel cannot be differential input!\n");
   return -VAR_1;
  }

  if (VAR_7 == VAR_0)
   VAR_8 = (VAR_8 + 1) % VAR_3->n_chan;
  if (VAR_12 != VAR_8) {
   FUNC_3(VAR_2->class_dev,
    "channel list must be continuous! chanlist[%i]=%d but must be %d or %d!\n",
    VAR_11, VAR_12, VAR_8, VAR_6);
   return -VAR_1;
  }


  VAR_9[VAR_11] = VAR_4->chanlist[VAR_11];
  VAR_7 = VAR_13;
 }
 VAR_10 = VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_4->chanlist_len; VAR_11++) {
  if (VAR_4->chanlist[VAR_11] != VAR_9[VAR_11 % VAR_10]) {
   FUNC_3(VAR_2->class_dev,
    "bad channel, reference or range number! chanlist[%i]=%d,%d,%d and not %d,%d,%d!\n",
    VAR_11, FUNC_1(VAR_9[VAR_11]),
    FUNC_2(VAR_9[VAR_11]),
    FUNC_0(VAR_9[VAR_11]),
    FUNC_1(VAR_4->chanlist[VAR_11 % VAR_10]),
    FUNC_2(VAR_4->chanlist[VAR_11 % VAR_10]),
    FUNC_0(VAR_9[VAR_11 % VAR_10]));
   return -VAR_1;
  }
 }
 VAR_5->saved_seglen = VAR_10;

 return 0;
}
