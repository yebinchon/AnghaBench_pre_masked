
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci224_private {unsigned int ao_enab; unsigned int* ao_scan_order; int daccon; int ao_spinlock; scalar_t__ iobase1; int intsce; } ;
struct pci224_board {int* ao_hwrange; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int pacer; scalar_t__ iobase; struct pci224_private* private; struct pci224_board* board_ptr; } ;
struct comedi_cmd {unsigned int chanlist_len; scalar_t__ scan_begin_src; scalar_t__ start_src; int * chanlist; } ;
struct TYPE_2__ {int inttrig; struct comedi_cmd cmd; } ;


 int FUNC_0 (int,int,int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int VAR_14 ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_15, struct comedi_subdevice *VAR_16)
{
 const struct pci224_board *VAR_17 = VAR_15->board_ptr;
 struct pci224_private *VAR_18 = VAR_15->private;
 struct comedi_cmd *VAR_19 = &VAR_16->async->cmd;
 int VAR_20;
 unsigned int VAR_21, VAR_22;
 unsigned int VAR_23;
 unsigned int VAR_24;
 unsigned long VAR_25;


 if (!VAR_19->chanlist || VAR_19->chanlist_len == 0)
  return -VAR_0;


 VAR_18->ao_enab = 0;

 for (VAR_21 = 0; VAR_21 < VAR_19->chanlist_len; VAR_21++) {
  VAR_23 = FUNC_1(VAR_19->chanlist[VAR_21]);
  VAR_18->ao_enab |= 1U << VAR_23;
  VAR_24 = 0;
  for (VAR_22 = 0; VAR_22 < VAR_19->chanlist_len; VAR_22++) {
   if (FUNC_1(VAR_19->chanlist[VAR_22]) < VAR_23)
    VAR_24++;
  }
  VAR_18->ao_scan_order[VAR_24] = VAR_21;
 }


 FUNC_5(VAR_18->ao_enab, VAR_15->iobase + VAR_1);


 VAR_20 = FUNC_2(VAR_19->chanlist[0]);
 VAR_18->daccon =
     FUNC_0(VAR_18->daccon,
      VAR_17->ao_hwrange[VAR_20] | VAR_8 |
      VAR_4,
      VAR_6 | VAR_9 |
      VAR_7 | VAR_3);
 FUNC_5(VAR_18->daccon | VAR_5,
      VAR_15->iobase + VAR_2);

 if (VAR_19->scan_begin_src == VAR_13) {
  FUNC_3(VAR_15->pacer);
  FUNC_6(VAR_15, VAR_16);
 }

 FUNC_7(&VAR_18->ao_spinlock, VAR_25);
 if (VAR_19->start_src == VAR_12) {
  VAR_16->async->inttrig = VAR_14;
 } else {

  VAR_18->intsce |= VAR_10;
  FUNC_4(VAR_18->intsce, VAR_18->iobase1 + VAR_11);
 }
 FUNC_8(&VAR_18->ao_spinlock, VAR_25);

 return 0;
}
