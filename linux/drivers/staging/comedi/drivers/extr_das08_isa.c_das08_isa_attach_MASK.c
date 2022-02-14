
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das08_private_struct {int dummy; } ;
struct das08_board_struct {int iosize; } ;
struct comedi_device {int iobase; struct das08_board_struct* board_ptr; } ;
struct comedi_devconfig {int * options; } ;


 int VAR_0 ;
 struct das08_private_struct* FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int ,int ) ;
 int FUNC_2 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
       struct comedi_devconfig *VAR_2)
{
 const struct das08_board_struct *VAR_3 = VAR_1->board_ptr;
 struct das08_private_struct *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_1, sizeof(*VAR_4));
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_1, VAR_2->options[0], VAR_3->iosize);
 if (VAR_5)
  return VAR_5;

 return FUNC_2(VAR_1, VAR_1->iobase);
}
