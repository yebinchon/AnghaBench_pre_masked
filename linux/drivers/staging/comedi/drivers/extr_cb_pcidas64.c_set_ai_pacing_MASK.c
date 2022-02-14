
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcidas64_private {scalar_t__ main_iobase; } ;
struct pcidas64_board {scalar_t__ layout; } ;
struct comedi_device {struct pcidas64_private* private; struct pcidas64_board* board_ptr; } ;
struct comedi_cmd {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_4 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_5, struct comedi_cmd *VAR_6)
{
 const struct pcidas64_board *VAR_7 = VAR_5->board_ptr;
 struct pcidas64_private *VAR_8 = VAR_5->private;
 u32 VAR_9 = 0, VAR_10 = 0;

 FUNC_3(VAR_5, VAR_6);

 FUNC_4(VAR_5, VAR_6);

 if (VAR_7->layout == VAR_4) {
  VAR_9 = FUNC_0(VAR_5, VAR_6);
 } else {
  VAR_9 = FUNC_1(VAR_5, VAR_6);
  VAR_10 = FUNC_2(VAR_5, VAR_6);
 }


 FUNC_5(VAR_9 & 0xffff,
        VAR_8->main_iobase + VAR_2);

 FUNC_5((VAR_9 >> 16) & 0xff,
        VAR_8->main_iobase + VAR_3);

 FUNC_5(VAR_10 & 0xffff,
        VAR_8->main_iobase + VAR_0);

 FUNC_5((VAR_10 >> 16) & 0xff,
        VAR_8->main_iobase + VAR_1);
}
