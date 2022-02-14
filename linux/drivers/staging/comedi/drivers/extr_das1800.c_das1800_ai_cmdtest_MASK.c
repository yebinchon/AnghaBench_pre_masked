
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das1800_board {int ai_speed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct das1800_board* board_ptr; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; int start_arg; scalar_t__ stop_arg; scalar_t__ convert_arg; scalar_t__ chanlist_len; int scan_end_arg; scalar_t__ chanlist; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,scalar_t__) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_6 (struct comedi_device*,struct comedi_cmd*) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_5,
         struct comedi_subdevice *VAR_6,
         struct comedi_cmd *VAR_7)
{
 const struct das1800_board *VAR_8 = VAR_5->board_ptr;
 int VAR_9 = 0;



 VAR_9 |= FUNC_3(&VAR_7->start_src, VAR_3 | VAR_1);
 VAR_9 |= FUNC_3(&VAR_7->scan_begin_src,
     VAR_2 | VAR_4 | VAR_1);
 VAR_9 |= FUNC_3(&VAR_7->convert_src,
     VAR_4 | VAR_1);
 VAR_9 |= FUNC_3(&VAR_7->scan_end_src, 129);
 VAR_9 |= FUNC_3(&VAR_7->stop_src,
     129 | VAR_1 | 128);

 if (VAR_9)
  return 1;



 VAR_9 |= FUNC_2(VAR_7->start_src);
 VAR_9 |= FUNC_2(VAR_7->scan_begin_src);
 VAR_9 |= FUNC_2(VAR_7->convert_src);
 VAR_9 |= FUNC_2(VAR_7->stop_src);




 if (VAR_7->scan_begin_src != VAR_2 &&
     VAR_7->convert_src != VAR_4)
  VAR_9 |= -VAR_0;


 if (VAR_7->start_src == VAR_1 && VAR_7->stop_src == VAR_1)
  VAR_9 |= FUNC_0(&VAR_7->start_arg,
         VAR_7->stop_arg);

 if (VAR_9)
  return 2;



 if (VAR_7->start_arg == VAR_3)
  VAR_9 |= FUNC_0(&VAR_7->start_arg, 0);

 if (VAR_7->convert_src == VAR_4) {
  VAR_9 |= FUNC_1(&VAR_7->convert_arg,
          VAR_8->ai_speed);
 }

 VAR_9 |= FUNC_1(&VAR_7->chanlist_len, 1);
 VAR_9 |= FUNC_0(&VAR_7->scan_end_arg,
        VAR_7->chanlist_len);

 switch (VAR_7->stop_src) {
 case 129:
  VAR_9 |= FUNC_1(&VAR_7->stop_arg, 1);
  break;
 case 128:
  VAR_9 |= FUNC_0(&VAR_7->stop_arg, 0);
  break;
 default:
  break;
 }

 if (VAR_9)
  return 3;



 if (VAR_7->convert_src == VAR_4) {
  if (VAR_7->scan_begin_src == VAR_2)
   VAR_9 |= FUNC_6(VAR_5, VAR_7);
  else
   VAR_9 |= FUNC_5(VAR_5, VAR_7);
 }

 if (VAR_9)
  return 4;


 if (VAR_7->chanlist && VAR_7->chanlist_len > 0)
  VAR_9 |= FUNC_4(VAR_5, VAR_6, VAR_7);

 if (VAR_9)
  return 5;

 return 0;
}
