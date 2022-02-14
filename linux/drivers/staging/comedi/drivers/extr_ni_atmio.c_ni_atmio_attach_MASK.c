
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int dev; } ;
struct ni_board_struct {int name; } ;
struct comedi_device {unsigned int irq; int board_name; struct ni_board_struct const* board_ptr; } ;
struct comedi_devconfig {unsigned long* options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,unsigned long,int) ;
 int FUNC_1 (struct comedi_device*,int *) ;
 int FUNC_2 (struct comedi_device*,int,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct comedi_device*) ;
 struct ni_board_struct* FUNC_4 (struct comedi_device*) ;
 int* VAR_3 ;
 int FUNC_5 (struct pnp_dev**) ;
 unsigned int FUNC_6 (struct pnp_dev*,int ) ;
 unsigned long FUNC_7 (struct pnp_dev*,int ) ;
 int FUNC_8 (unsigned int,int ,int ,int ,struct comedi_device*) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_4,
      struct comedi_devconfig *VAR_5)
{
 const struct ni_board_struct *VAR_6;
 struct pnp_dev *VAR_7;
 int VAR_8;
 unsigned long VAR_9;
 unsigned int VAR_10;

 VAR_8 = FUNC_3(VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_9 = VAR_5->options[0];
 VAR_10 = VAR_5->options[1];
 VAR_7 = ((void*)0);
 if (VAR_9 == 0) {
  VAR_8 = FUNC_5(&VAR_7);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_9 = FUNC_7(VAR_7, 0);
  VAR_10 = FUNC_6(VAR_7, 0);
  FUNC_1(VAR_4, &VAR_7->dev);
 }

 VAR_8 = FUNC_0(VAR_4, VAR_9, 0x20);
 if (VAR_8)
  return VAR_8;

 VAR_6 = FUNC_4(VAR_4);
 if (!VAR_6)
  return -VAR_1;
 VAR_4->board_ptr = VAR_6;
 VAR_4->board_name = VAR_6->name;



 if (VAR_10 != 0) {
  if (VAR_10 > 15 || VAR_3[VAR_10] == -1)
   return -VAR_0;
  VAR_8 = FUNC_8(VAR_10, VAR_2, 0,
      VAR_4->board_name, VAR_4);
  if (VAR_8 < 0)
   return -VAR_0;
  VAR_4->irq = VAR_10;
 }



 VAR_8 = FUNC_2(VAR_4, VAR_3[VAR_4->irq], 0);
 if (VAR_8 < 0)
  return VAR_8;

 return 0;
}
