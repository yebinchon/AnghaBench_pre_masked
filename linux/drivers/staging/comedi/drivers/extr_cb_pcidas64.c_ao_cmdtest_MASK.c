
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_board {int ao_scan_speed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct pcidas64_board* board_ptr; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ scan_begin_arg; scalar_t__ chanlist_len; scalar_t__ chanlist; int flags; int scan_end_arg; int start_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int,int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_9, struct comedi_subdevice *VAR_10,
        struct comedi_cmd *VAR_11)
{
 const struct pcidas64_board *VAR_12 = VAR_9->board_ptr;
 int VAR_13 = 0;
 unsigned int VAR_14;



 VAR_13 |= FUNC_4(&VAR_11->start_src, VAR_4 | VAR_3);
 VAR_13 |= FUNC_4(&VAR_11->scan_begin_src,
     VAR_7 | VAR_3);
 VAR_13 |= FUNC_4(&VAR_11->convert_src, VAR_6);
 VAR_13 |= FUNC_4(&VAR_11->scan_end_src, VAR_2);
 VAR_13 |= FUNC_4(&VAR_11->stop_src, VAR_5);

 if (VAR_13)
  return 1;



 VAR_13 |= FUNC_3(VAR_11->start_src);
 VAR_13 |= FUNC_3(VAR_11->scan_begin_src);



 if (VAR_11->convert_src == VAR_3 && VAR_11->scan_begin_src == VAR_7)
  VAR_13 |= -VAR_0;
 if (VAR_11->stop_src != VAR_2 &&
     VAR_11->stop_src != VAR_5 && VAR_11->stop_src != VAR_3)
  VAR_13 |= -VAR_0;

 if (VAR_13)
  return 2;



 VAR_13 |= FUNC_1(&VAR_11->start_arg, 0);

 if (VAR_11->scan_begin_src == VAR_7) {
  VAR_13 |= FUNC_2(&VAR_11->scan_begin_arg,
          VAR_12->ao_scan_speed);
  if (FUNC_5(VAR_11->scan_begin_arg, VAR_11->flags) >
      VAR_8) {
   VAR_11->scan_begin_arg = (VAR_8 + 2) *
           VAR_1;
   VAR_13 |= -VAR_0;
  }
 }

 VAR_13 |= FUNC_2(&VAR_11->chanlist_len, 1);
 VAR_13 |= FUNC_1(&VAR_11->scan_end_arg,
        VAR_11->chanlist_len);

 if (VAR_13)
  return 3;



 if (VAR_11->scan_begin_src == VAR_7) {
  VAR_14 = VAR_11->scan_begin_arg;
  VAR_11->scan_begin_arg = FUNC_6(VAR_11->scan_begin_arg,
        VAR_11->flags) * VAR_1;
  if (VAR_14 != VAR_11->scan_begin_arg)
   VAR_13++;
 }

 if (VAR_13)
  return 4;


 if (VAR_11->chanlist && VAR_11->chanlist_len > 0)
  VAR_13 |= FUNC_0(VAR_9, VAR_10, VAR_11);

 if (VAR_13)
  return 5;

 return 0;
}
