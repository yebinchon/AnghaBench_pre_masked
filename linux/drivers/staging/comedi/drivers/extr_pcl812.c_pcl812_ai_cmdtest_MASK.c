
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl812_private {scalar_t__ use_ext_trg; } ;
struct pcl812_board {int ai_ns_min; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int pacer; struct pcl812_private* private; struct pcl812_board* board_ptr; } ;
struct comedi_cmd {unsigned int start_src; unsigned int scan_begin_src; unsigned int convert_src; unsigned int scan_end_src; unsigned int stop_src; unsigned int start_arg; unsigned int scan_begin_arg; unsigned int convert_arg; unsigned int chanlist_len; unsigned int scan_end_arg; unsigned int stop_arg; int flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,unsigned int*,int ) ;
 int FUNC_1 (unsigned int*,unsigned int) ;
 int FUNC_2 (unsigned int*,int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_6,
        struct comedi_subdevice *VAR_7, struct comedi_cmd *VAR_8)
{
 const struct pcl812_board *VAR_9 = VAR_6->board_ptr;
 struct pcl812_private *VAR_10 = VAR_6->private;
 int VAR_11 = 0;
 unsigned int VAR_12;



 VAR_11 |= FUNC_4(&VAR_8->start_src, VAR_4);
 VAR_11 |= FUNC_4(&VAR_8->scan_begin_src, VAR_2);

 if (VAR_10->use_ext_trg)
  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_5;
 VAR_11 |= FUNC_4(&VAR_8->convert_src, VAR_12);

 VAR_11 |= FUNC_4(&VAR_8->scan_end_src, VAR_0);
 VAR_11 |= FUNC_4(&VAR_8->stop_src, VAR_0 | VAR_3);

 if (VAR_11)
  return 1;



 VAR_11 |= FUNC_3(VAR_8->stop_src);



 if (VAR_11)
  return 2;



 VAR_11 |= FUNC_1(&VAR_8->start_arg, 0);
 VAR_11 |= FUNC_1(&VAR_8->scan_begin_arg, 0);

 if (VAR_8->convert_src == VAR_5) {
  VAR_11 |= FUNC_2(&VAR_8->convert_arg,
          VAR_9->ai_ns_min);
 } else {
  VAR_11 |= FUNC_1(&VAR_8->convert_arg, 0);
 }

 VAR_11 |= FUNC_2(&VAR_8->chanlist_len, 1);
 VAR_11 |= FUNC_1(&VAR_8->scan_end_arg,
        VAR_8->chanlist_len);

 if (VAR_8->stop_src == VAR_0)
  VAR_11 |= FUNC_2(&VAR_8->stop_arg, 1);
 else
  VAR_11 |= FUNC_1(&VAR_8->stop_arg, 0);

 if (VAR_11)
  return 3;



 if (VAR_8->convert_src == VAR_5) {
  unsigned int VAR_13 = VAR_8->convert_arg;

  FUNC_0(VAR_6->pacer, &VAR_13, VAR_8->flags);
  VAR_11 |= FUNC_1(&VAR_8->convert_arg, VAR_13);
 }

 if (VAR_11)
  return 4;

 return 0;
}
