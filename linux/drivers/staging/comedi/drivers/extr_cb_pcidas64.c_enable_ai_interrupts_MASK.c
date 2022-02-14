
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcidas64_private {int intr_enable_bits; scalar_t__ main_iobase; } ;
struct pcidas64_board {scalar_t__ layout; } ;
struct comedi_device {int spinlock; struct pcidas64_private* private; struct pcidas64_board* board_ptr; } ;
struct comedi_cmd {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_9,
     const struct comedi_cmd *VAR_10)
{
 const struct pcidas64_board *VAR_11 = VAR_9->board_ptr;
 struct pcidas64_private *VAR_12 = VAR_9->private;
 u32 VAR_13;
 unsigned long VAR_14;

 VAR_13 = VAR_5 | VAR_3 |
        VAR_2 | VAR_6;




 if (VAR_10->flags & VAR_1) {

  if (VAR_11->layout != VAR_8)
   VAR_13 |= VAR_0 | VAR_4;
 }
 FUNC_0(&VAR_9->spinlock, VAR_14);
 VAR_12->intr_enable_bits |= VAR_13;
 FUNC_2(VAR_12->intr_enable_bits,
        VAR_12->main_iobase + VAR_7);
 FUNC_1(&VAR_9->spinlock, VAR_14);
}
