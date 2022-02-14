
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das16_private_struct {scalar_t__ can_burst; } ;
struct das16_board {int ai_speed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int pacer; struct das16_private_struct* private; struct das16_board* board_ptr; } ;
struct comedi_cmd {unsigned int start_src; unsigned int scan_begin_src; unsigned int convert_src; unsigned int scan_end_src; unsigned int stop_src; unsigned int start_arg; unsigned int scan_begin_arg; unsigned int scan_end_arg; unsigned int chanlist_len; unsigned int convert_arg; unsigned int stop_arg; scalar_t__ chanlist; int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ,unsigned int*,int ) ;
 int FUNC_1 (unsigned int*,unsigned int) ;
 int FUNC_2 (unsigned int*,int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int*,unsigned int) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_7, struct comedi_subdevice *VAR_8,
     struct comedi_cmd *VAR_9)
{
 const struct das16_board *VAR_10 = VAR_7->board_ptr;
 struct das16_private_struct *VAR_11 = VAR_7->private;
 int VAR_12 = 0;
 unsigned int VAR_13;
 unsigned int VAR_14;



 VAR_12 |= FUNC_4(&VAR_9->start_src, VAR_5);

 VAR_13 = VAR_3;
 if (VAR_11->can_burst)
  VAR_13 |= VAR_6 | VAR_2;
 VAR_12 |= FUNC_4(&VAR_9->scan_begin_src, VAR_13);

 VAR_13 = VAR_6 | VAR_2;
 if (VAR_11->can_burst)
  VAR_13 |= VAR_5;
 VAR_12 |= FUNC_4(&VAR_9->convert_src, VAR_13);

 VAR_12 |= FUNC_4(&VAR_9->scan_end_src, VAR_1);
 VAR_12 |= FUNC_4(&VAR_9->stop_src, VAR_1 | VAR_4);

 if (VAR_12)
  return 1;



 VAR_12 |= FUNC_3(VAR_9->scan_begin_src);
 VAR_12 |= FUNC_3(VAR_9->convert_src);
 VAR_12 |= FUNC_3(VAR_9->stop_src);




 if (VAR_9->scan_begin_src == VAR_3 && VAR_9->convert_src == VAR_5)
  VAR_12 |= -VAR_0;
 if (VAR_9->scan_begin_src != VAR_3 && VAR_9->convert_src != VAR_5)
  VAR_12 |= -VAR_0;

 if (VAR_12)
  return 2;



 VAR_12 |= FUNC_1(&VAR_9->start_arg, 0);

 if (VAR_9->scan_begin_src == VAR_3)
  VAR_12 |= FUNC_1(&VAR_9->scan_begin_arg, 0);

 VAR_12 |= FUNC_1(&VAR_9->scan_end_arg,
        VAR_9->chanlist_len);


 if (VAR_9->scan_begin_src == VAR_6) {
  VAR_12 |= FUNC_2(&VAR_9->scan_begin_arg,
          VAR_10->ai_speed *
          VAR_9->chanlist_len);
 }

 if (VAR_9->convert_src == VAR_6) {
  VAR_12 |= FUNC_2(&VAR_9->convert_arg,
          VAR_10->ai_speed);
 }

 if (VAR_9->stop_src == VAR_1)
  VAR_12 |= FUNC_2(&VAR_9->stop_arg, 1);
 else
  VAR_12 |= FUNC_1(&VAR_9->stop_arg, 0);

 if (VAR_12)
  return 3;


 if (VAR_9->scan_begin_src == VAR_6) {
  VAR_14 = VAR_9->scan_begin_arg;
  FUNC_0(VAR_7->pacer, &VAR_14, VAR_9->flags);
  VAR_12 |= FUNC_1(&VAR_9->scan_begin_arg, VAR_14);
 }
 if (VAR_9->convert_src == VAR_6) {
  VAR_14 = VAR_9->convert_arg;
  FUNC_0(VAR_7->pacer, &VAR_14, VAR_9->flags);
  VAR_12 |= FUNC_1(&VAR_9->convert_arg, VAR_14);
 }
 if (VAR_12)
  return 4;


 if (VAR_9->chanlist && VAR_9->chanlist_len > 0)
  VAR_12 |= FUNC_5(VAR_7, VAR_8, VAR_9);

 if (VAR_12)
  return 5;

 return 0;
}
