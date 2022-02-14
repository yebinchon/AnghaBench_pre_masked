
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_65xx_board {unsigned int num_dio_ports; unsigned int num_di_ports; unsigned int num_do_ports; } ;
struct comedi_device {struct ni_65xx_board* board_ptr; } ;



__attribute__((used)) static unsigned int FUNC_0(struct comedi_device *VAR_0)
{
 const struct ni_65xx_board *VAR_1 = VAR_0->board_ptr;

 return VAR_1->num_dio_ports + VAR_1->num_di_ports + VAR_1->num_do_ports;
}
