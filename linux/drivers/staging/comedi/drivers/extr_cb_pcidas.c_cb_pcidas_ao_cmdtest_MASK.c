
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct cb_pcidas_private* private; struct cb_pcidas_board* board_ptr; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; unsigned int start_arg; unsigned int scan_begin_arg; unsigned int scan_end_arg; unsigned int chanlist_len; unsigned int stop_arg; scalar_t__ chanlist; int flags; } ;
struct cb_pcidas_private {int ao_pacer; } ;
struct cb_pcidas_board {int ao_scan_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;
 int FUNC_1 (int ,unsigned int*,int ) ;
 int FUNC_2 (unsigned int*,unsigned int) ;
 int FUNC_3 (unsigned int*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_6,
    struct comedi_subdevice *VAR_7,
    struct comedi_cmd *VAR_8)
{
 const struct cb_pcidas_board *VAR_9 = VAR_6->board_ptr;
 struct cb_pcidas_private *VAR_10 = VAR_6->private;
 int VAR_11 = 0;



 VAR_11 |= FUNC_5(&VAR_8->start_src, VAR_2);
 VAR_11 |= FUNC_5(&VAR_8->scan_begin_src,
     VAR_5 | VAR_1);
 VAR_11 |= FUNC_5(&VAR_8->convert_src, VAR_4);
 VAR_11 |= FUNC_5(&VAR_8->scan_end_src, VAR_0);
 VAR_11 |= FUNC_5(&VAR_8->stop_src, VAR_0 | VAR_3);

 if (VAR_11)
  return 1;



 VAR_11 |= FUNC_4(VAR_8->scan_begin_src);
 VAR_11 |= FUNC_4(VAR_8->stop_src);



 if (VAR_11)
  return 2;



 VAR_11 |= FUNC_2(&VAR_8->start_arg, 0);

 if (VAR_8->scan_begin_src == VAR_5) {
  VAR_11 |= FUNC_3(&VAR_8->scan_begin_arg,
          VAR_9->ao_scan_speed);
 }

 VAR_11 |= FUNC_2(&VAR_8->scan_end_arg,
        VAR_8->chanlist_len);

 if (VAR_8->stop_src == VAR_0)
  VAR_11 |= FUNC_3(&VAR_8->stop_arg, 1);
 else
  VAR_11 |= FUNC_2(&VAR_8->stop_arg, 0);

 if (VAR_11)
  return 3;



 if (VAR_8->scan_begin_src == VAR_5) {
  unsigned int VAR_12 = VAR_8->scan_begin_arg;

  FUNC_1(VAR_10->ao_pacer,
      &VAR_12, VAR_8->flags);
  VAR_11 |= FUNC_2(&VAR_8->scan_begin_arg, VAR_12);
 }

 if (VAR_11)
  return 4;


 if (VAR_8->chanlist && VAR_8->chanlist_len > 0)
  VAR_11 |= FUNC_0(VAR_6, VAR_7, VAR_8);

 if (VAR_11)
  return 5;

 return 0;
}
