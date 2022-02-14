
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci224_board {int ao_bits; int* ao_hwrange; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct pci224_board* board_ptr; } ;
struct comedi_cmd {int * chanlist; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
  void *VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
 const struct pci224_board *VAR_7 = VAR_2->board_ptr;
 struct comedi_cmd *VAR_8 = &VAR_3->async->cmd;
 unsigned short *VAR_9 = VAR_4;
 unsigned int VAR_10 = VAR_5 / sizeof(*VAR_9);
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;


 VAR_12 = 16 - VAR_7->ao_bits;

 if ((VAR_7->ao_hwrange[FUNC_0(VAR_8->chanlist[0])] &
      VAR_0) == VAR_1) {

  VAR_11 = 0;
 } else {

  VAR_11 = 32768;
 }

 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
  VAR_9[VAR_13] = (VAR_9[VAR_13] << VAR_12) - VAR_11;
}
