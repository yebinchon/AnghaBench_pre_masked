
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_board {scalar_t__ has_clk_gat_sce; scalar_t__ is_pcie; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; scalar_t__ mmio; struct dio200_board* board_ptr; } ;
struct comedi_8254 {int insn_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct comedi_8254* FUNC_0 (scalar_t__,int ,int ,unsigned int) ;
 struct comedi_8254* FUNC_1 (scalar_t__,int ,int ,unsigned int) ;
 int FUNC_2 (struct comedi_subdevice*,struct comedi_8254*) ;
 int FUNC_3 (struct comedi_subdevice*) ;
 int VAR_2 ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,int,int ) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_3,
       struct comedi_subdevice *VAR_4,
       unsigned int VAR_5)
{
 const struct dio200_board *VAR_6 = VAR_3->board_ptr;
 struct comedi_8254 *VAR_7;
 unsigned int VAR_8;
 int VAR_9;





 if (VAR_6->is_pcie) {
  VAR_5 <<= 3;
  VAR_8 = 3;
 } else {
  VAR_8 = 0;
 }

 if (VAR_3->mmio) {
  VAR_7 = FUNC_1(VAR_3->mmio + VAR_5,
         0, VAR_1, VAR_8);
 } else {
  VAR_7 = FUNC_0(VAR_3->iobase + VAR_5,
      0, VAR_1, VAR_8);
 }
 if (!VAR_7)
  return -VAR_0;

 FUNC_2(VAR_4, VAR_7);

 VAR_7->insn_config = VAR_2;
 FUNC_3(VAR_4);


 if (VAR_6->has_clk_gat_sce) {
  for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {

   FUNC_5(VAR_3, VAR_4, VAR_9, 0);

   FUNC_4(VAR_3, VAR_4, VAR_9, 0);
  }
 }

 return 0;
}
