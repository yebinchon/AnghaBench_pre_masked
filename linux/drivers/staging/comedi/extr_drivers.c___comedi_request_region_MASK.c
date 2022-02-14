
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int board_name; int class_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (unsigned long,unsigned long,int ) ;

int FUNC_2(struct comedi_device *VAR_2,
       unsigned long VAR_3, unsigned long VAR_4)
{
 if (!VAR_3) {
  FUNC_0(VAR_2->class_dev,
    "%s: a I/O base address must be specified\n",
    VAR_2->board_name);
  return -VAR_0;
 }

 if (!FUNC_1(VAR_3, VAR_4, VAR_2->board_name)) {
  FUNC_0(VAR_2->class_dev, "%s: I/O port conflict (%#lx,%lu)\n",
    VAR_2->board_name, VAR_3, VAR_4);
  return -VAR_1;
 }

 return 0;
}
