
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int pacer; struct cb_pcidas_board* board_ptr; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; unsigned int start_arg; unsigned int scan_begin_arg; int chanlist_len; unsigned int convert_arg; unsigned int scan_end_arg; unsigned int stop_arg; scalar_t__ chanlist; int flags; } ;
struct cb_pcidas_board {int ai_speed; int is_1602; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;
 int FUNC_1 (int ,unsigned int*,int ) ;
 int FUNC_2 (unsigned int*,unsigned int) ;
 int FUNC_3 (unsigned int*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_8,
    struct comedi_subdevice *VAR_9,
    struct comedi_cmd *VAR_10)
{
 const struct cb_pcidas_board *VAR_11 = VAR_8->board_ptr;
 int VAR_12 = 0;
 unsigned int VAR_13;



 VAR_12 |= FUNC_5(&VAR_10->start_src, 128 | 129);
 VAR_12 |= FUNC_5(&VAR_10->scan_begin_src,
     VAR_5 | VAR_7 | 129);
 VAR_12 |= FUNC_5(&VAR_10->convert_src,
     VAR_7 | 128 | 129);
 VAR_12 |= FUNC_5(&VAR_10->scan_end_src, VAR_4);
 VAR_12 |= FUNC_5(&VAR_10->stop_src, VAR_4 | VAR_6);

 if (VAR_12)
  return 1;



 VAR_12 |= FUNC_4(VAR_10->start_src);
 VAR_12 |= FUNC_4(VAR_10->scan_begin_src);
 VAR_12 |= FUNC_4(VAR_10->convert_src);
 VAR_12 |= FUNC_4(VAR_10->stop_src);



 if (VAR_10->scan_begin_src == VAR_5 && VAR_10->convert_src == 128)
  VAR_12 |= -VAR_3;
 if (VAR_10->scan_begin_src != VAR_5 && VAR_10->convert_src != 128)
  VAR_12 |= -VAR_3;
 if (VAR_10->start_src == 129 &&
     (VAR_10->convert_src == 129 || VAR_10->scan_begin_src == 129))
  VAR_12 |= -VAR_3;

 if (VAR_12)
  return 2;



 switch (VAR_10->start_src) {
 case 128:
  VAR_12 |= FUNC_2(&VAR_10->start_arg, 0);
  break;
 case 129:

  if ((VAR_10->start_arg
       & (VAR_1 & ~(VAR_0 | VAR_2))) != 0) {
   VAR_10->start_arg &= ~(VAR_1 &
      ~(VAR_0 | VAR_2));
   VAR_12 |= -VAR_3;
  }
  if (!VAR_11->is_1602 && (VAR_10->start_arg & VAR_2)) {
   VAR_10->start_arg &= (VAR_1 & ~VAR_2);
   VAR_12 |= -VAR_3;
  }
  break;
 }

 if (VAR_10->scan_begin_src == VAR_7) {
  VAR_12 |= FUNC_3(&VAR_10->scan_begin_arg,
          VAR_11->ai_speed *
          VAR_10->chanlist_len);
 }

 if (VAR_10->convert_src == VAR_7) {
  VAR_12 |= FUNC_3(&VAR_10->convert_arg,
          VAR_11->ai_speed);
 }

 VAR_12 |= FUNC_2(&VAR_10->scan_end_arg,
        VAR_10->chanlist_len);

 if (VAR_10->stop_src == VAR_4)
  VAR_12 |= FUNC_3(&VAR_10->stop_arg, 1);
 else
  VAR_12 |= FUNC_2(&VAR_10->stop_arg, 0);

 if (VAR_12)
  return 3;



 if (VAR_10->scan_begin_src == VAR_7) {
  VAR_13 = VAR_10->scan_begin_arg;
  FUNC_1(VAR_8->pacer, &VAR_13, VAR_10->flags);
  VAR_12 |= FUNC_2(&VAR_10->scan_begin_arg, VAR_13);
 }
 if (VAR_10->convert_src == VAR_7) {
  VAR_13 = VAR_10->convert_arg;
  FUNC_1(VAR_8->pacer, &VAR_13, VAR_10->flags);
  VAR_12 |= FUNC_2(&VAR_10->convert_arg, VAR_13);
 }

 if (VAR_12)
  return 4;


 if (VAR_10->chanlist && VAR_10->chanlist_len > 0)
  VAR_12 |= FUNC_0(VAR_8, VAR_9, VAR_10);

 if (VAR_12)
  return 5;

 return 0;
}
