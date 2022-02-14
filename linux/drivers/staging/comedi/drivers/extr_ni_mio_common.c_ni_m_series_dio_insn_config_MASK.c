
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_board_struct {unsigned int dio_speed; } ;
struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct ni_board_struct* board_ptr; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,int ) ;
 int FUNC_1 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
           struct comedi_subdevice *VAR_3,
           struct comedi_insn *VAR_4,
           unsigned int *VAR_5)
{
 int VAR_6;

 if (VAR_5[0] == VAR_0) {
  const struct ni_board_struct *VAR_7 = VAR_2->board_ptr;


  VAR_5[1] = VAR_7->dio_speed;
  VAR_5[2] = 0;
  return 0;
 }

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, 0);
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_2, VAR_3->io_bits, VAR_1);

 return VAR_4->n;
}
