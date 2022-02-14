
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das800_private {int do_bits; } ;
struct das800_board {int resolution; } ;
struct comedi_device {int spinlock; scalar_t__ iobase; struct das800_private* private; struct das800_board* board_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct comedi_device*,int,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_6)
{
 const struct das800_board *VAR_7 = VAR_6->board_ptr;
 struct das800_private *VAR_8 = VAR_6->private;
 unsigned long VAR_9;

 FUNC_2(&VAR_6->spinlock, VAR_9);

 if (VAR_7->resolution == 16)
  FUNC_1(VAR_0, VAR_6->iobase + VAR_5);

 FUNC_0(VAR_6, VAR_4, VAR_3);

 FUNC_0(VAR_6, VAR_2 | VAR_8->do_bits, VAR_1);
 FUNC_3(&VAR_6->spinlock, VAR_9);
}
