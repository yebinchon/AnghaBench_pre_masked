
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nidio_board {unsigned int dio_speed; } ;
struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ mmio; struct nidio_board* board_ptr; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
     struct comedi_subdevice *VAR_2,
     struct comedi_insn *VAR_3,
     unsigned int *VAR_4)
{
 int VAR_5;

 if (VAR_4[0] == VAR_0) {
  const struct nidio_board *VAR_6 = VAR_1->board_ptr;


  VAR_4[1] = VAR_6->dio_speed;
  VAR_4[2] = 0;
  return 0;
 }

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, 0);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_2->io_bits, VAR_1->mmio + FUNC_0(0));

 return VAR_3->n;
}
