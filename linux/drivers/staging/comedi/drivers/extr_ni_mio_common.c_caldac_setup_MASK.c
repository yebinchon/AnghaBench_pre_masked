
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_private {unsigned int* caldac_maxdata_list; } ;
struct ni_board_struct {int* caldac; } ;
struct comedi_subdevice {int n_chan; unsigned int* maxdata_list; int maxdata; } ;
struct comedi_device {int class_dev; struct ni_private* private; struct ni_board_struct* board_ptr; } ;
struct TYPE_2__ {int n_bits; int n_chans; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct comedi_device*,int,int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4)
{
 const struct ni_board_struct *VAR_5 = VAR_3->board_ptr;
 struct ni_private *VAR_6 = VAR_3->private;
 int VAR_7, VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;

 VAR_13 = VAR_5->caldac[0];
 if (VAR_13 == VAR_1)
  return;
 VAR_11 = VAR_2[VAR_13].n_bits;
 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  VAR_13 = VAR_5->caldac[VAR_7];
  if (VAR_13 == VAR_1)
   break;
  if (VAR_2[VAR_13].n_bits != VAR_11)
   VAR_12 = 1;
  VAR_10 += VAR_2[VAR_13].n_chans;
 }
 VAR_9 = VAR_7;
 VAR_4->n_chan = VAR_10;

 if (VAR_12) {
  unsigned int *VAR_15 = VAR_6->caldac_maxdata_list;

  if (VAR_10 > VAR_0)
   FUNC_0(VAR_3->class_dev,
    "BUG! MAX_N_CALDACS too small\n");
  VAR_4->maxdata_list = VAR_15;
  VAR_14 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
   VAR_13 = VAR_5->caldac[VAR_7];
   for (VAR_8 = 0; VAR_8 < VAR_2[VAR_13].n_chans; VAR_8++) {
    VAR_15[VAR_14] =
        (1 << VAR_2[VAR_13].n_bits) - 1;
    VAR_14++;
   }
  }

  for (VAR_14 = 0; VAR_14 < VAR_4->n_chan; VAR_14++)
   FUNC_1(VAR_3, VAR_7, VAR_4->maxdata_list[VAR_7] / 2);
 } else {
  VAR_13 = VAR_5->caldac[0];
  VAR_4->maxdata = (1 << VAR_2[VAR_13].n_bits) - 1;

  for (VAR_14 = 0; VAR_14 < VAR_4->n_chan; VAR_14++)
   FUNC_1(VAR_3, VAR_7, VAR_4->maxdata / 2);
 }
}
