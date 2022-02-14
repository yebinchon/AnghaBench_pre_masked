
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; struct boardtype* board_ptr; } ;
struct boardtype {scalar_t__ has_ao; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_5)
{
 const struct boardtype *VAR_6 = VAR_5->board_ptr;





 FUNC_2(0, VAR_5->iobase + VAR_2);


 FUNC_1(0, VAR_5->iobase + VAR_0);
 FUNC_1(0, VAR_5->iobase + VAR_1);

 if (VAR_6->has_ao) {

  FUNC_1(0, VAR_5->iobase + VAR_3);
  FUNC_2(0, VAR_5->iobase + FUNC_0(0));
  FUNC_2(0, VAR_5->iobase + FUNC_0(1));
 }


 FUNC_2(0, VAR_5->iobase + VAR_4);
}
