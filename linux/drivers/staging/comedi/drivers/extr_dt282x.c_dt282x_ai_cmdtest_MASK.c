
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt282x_private {int divisor; } ;
struct dt282x_board {int ai_speed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct dt282x_private* private; struct dt282x_board* board_ptr; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; unsigned int start_arg; unsigned int scan_begin_arg; unsigned int convert_arg; unsigned int scan_end_arg; unsigned int chanlist_len; unsigned int stop_arg; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int*,unsigned int) ;
 int FUNC_1 (unsigned int*,int ) ;
 int FUNC_2 (unsigned int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (unsigned int*,int ) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_7,
        struct comedi_subdevice *VAR_8,
        struct comedi_cmd *VAR_9)
{
 const struct dt282x_board *VAR_10 = VAR_7->board_ptr;
 struct dt282x_private *VAR_11 = VAR_7->private;
 int VAR_12 = 0;
 unsigned int VAR_13;



 VAR_12 |= FUNC_4(&VAR_9->start_src, VAR_5);
 VAR_12 |= FUNC_4(&VAR_9->scan_begin_src,
     VAR_3 | VAR_2);
 VAR_12 |= FUNC_4(&VAR_9->convert_src, VAR_6);
 VAR_12 |= FUNC_4(&VAR_9->scan_end_src, VAR_1);
 VAR_12 |= FUNC_4(&VAR_9->stop_src, VAR_1 | VAR_4);

 if (VAR_12)
  return 1;



 VAR_12 |= FUNC_3(VAR_9->scan_begin_src);
 VAR_12 |= FUNC_3(VAR_9->stop_src);



 if (VAR_12)
  return 2;



 VAR_12 |= FUNC_0(&VAR_9->start_arg, 0);
 VAR_12 |= FUNC_0(&VAR_9->scan_begin_arg, 0);
 VAR_12 |= FUNC_1(&VAR_9->convert_arg, VAR_0);
 VAR_12 |= FUNC_2(&VAR_9->convert_arg, VAR_10->ai_speed);
 VAR_12 |= FUNC_0(&VAR_9->scan_end_arg,
        VAR_9->chanlist_len);

 if (VAR_9->stop_src == VAR_1)
  VAR_12 |= FUNC_2(&VAR_9->stop_arg, 1);
 else
  VAR_12 |= FUNC_0(&VAR_9->stop_arg, 0);

 if (VAR_12)
  return 3;



 VAR_13 = VAR_9->convert_arg;
 VAR_11->divisor = FUNC_5(&VAR_13, VAR_9->flags);
 VAR_12 |= FUNC_0(&VAR_9->convert_arg, VAR_13);

 if (VAR_12)
  return 4;

 return 0;
}
