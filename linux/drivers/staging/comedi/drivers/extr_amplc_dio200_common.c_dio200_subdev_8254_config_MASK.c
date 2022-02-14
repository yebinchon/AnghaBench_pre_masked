
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_board {int has_clk_gat_sce; scalar_t__ is_pcie; } ;
struct comedi_subdevice {struct comedi_8254* private; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct dio200_board* board_ptr; } ;
struct comedi_8254 {unsigned int* gate_src; unsigned int* clock_src; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;




 unsigned int* VAR_1 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,unsigned int,unsigned int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
         struct comedi_subdevice *VAR_3,
         struct comedi_insn *VAR_4,
         unsigned int *VAR_5)
{
 const struct dio200_board *VAR_6 = VAR_2->board_ptr;
 struct comedi_8254 *VAR_7 = VAR_3->private;
 unsigned int VAR_8 = FUNC_0(VAR_4->chanspec);
 unsigned int VAR_9 = VAR_6->is_pcie ? 31 : 7;
 unsigned int VAR_10;

 if (!VAR_6->has_clk_gat_sce)
  return -VAR_0;

 switch (VAR_5[0]) {
 case 128:
  VAR_10 = VAR_5[2];
  if (VAR_10 > VAR_9)
   return -VAR_0;

  FUNC_2(VAR_2, VAR_3, VAR_8, VAR_10);
  VAR_7->gate_src[VAR_8] = VAR_10;
  break;
 case 130:
  VAR_5[2] = VAR_7->gate_src[VAR_8];
  break;
 case 129:
  VAR_10 = VAR_5[1];
  if (VAR_10 > VAR_9)
   return -VAR_0;

  FUNC_1(VAR_2, VAR_3, VAR_8, VAR_10);
  VAR_7->clock_src[VAR_8] = VAR_10;
  break;
 case 131:
  VAR_5[1] = VAR_7->clock_src[VAR_8];
  VAR_5[2] = VAR_1[VAR_7->clock_src[VAR_8]];
  break;
 default:
  return -VAR_0;
 }

 return VAR_4->n;
}
