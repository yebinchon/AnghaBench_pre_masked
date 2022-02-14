
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int clock_ns; int routing_tables; } ;
struct ni_board_struct {int ao_speed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct ni_private* private; struct ni_board_struct* board_ptr; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; unsigned int start_arg; unsigned int scan_begin_arg; unsigned int convert_arg; unsigned int scan_end_arg; unsigned int stop_arg; int flags; int chanlist_len; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned int*,int ) ;
 int FUNC_2 (unsigned int*,int) ;
 int FUNC_3 (unsigned int*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ,int *,int) ;
 int FUNC_8 (struct comedi_device*,unsigned int,int ) ;
 unsigned int FUNC_9 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_6, struct comedi_subdevice *VAR_7,
    struct comedi_cmd *VAR_8)
{
 const struct ni_board_struct *VAR_9 = VAR_6->board_ptr;
 struct ni_private *VAR_10 = VAR_6->private;
 int VAR_11 = 0;
 unsigned int VAR_12;



 VAR_11 |= FUNC_5(&VAR_8->start_src, 128 | 129);
 VAR_11 |= FUNC_5(&VAR_8->scan_begin_src,
     VAR_5 | 129);
 VAR_11 |= FUNC_5(&VAR_8->convert_src, VAR_4);
 VAR_11 |= FUNC_5(&VAR_8->scan_end_src, VAR_2);
 VAR_11 |= FUNC_5(&VAR_8->stop_src, VAR_2 | VAR_3);

 if (VAR_11)
  return 1;



 VAR_11 |= FUNC_4(VAR_8->start_src);
 VAR_11 |= FUNC_4(VAR_8->scan_begin_src);
 VAR_11 |= FUNC_4(VAR_8->stop_src);



 if (VAR_11)
  return 2;



 switch (VAR_8->start_src) {
 case 128:
  VAR_11 |= FUNC_1(&VAR_8->start_arg, 0);
  break;
 case 129:
  VAR_11 |= FUNC_7(FUNC_0(VAR_8->start_arg),
        VAR_1,
        &VAR_10->routing_tables, 1);
  break;
 }

 if (VAR_8->scan_begin_src == VAR_5) {
  VAR_11 |= FUNC_3(&VAR_8->scan_begin_arg,
          VAR_9->ao_speed);
  VAR_11 |= FUNC_2(&VAR_8->scan_begin_arg,
          VAR_10->clock_ns *
          0xffffff);
 } else {
  VAR_11 |= FUNC_6(FUNC_0(VAR_8->scan_begin_arg),
         VAR_0,
         &VAR_10->routing_tables);
 }

 VAR_11 |= FUNC_1(&VAR_8->convert_arg, 0);
 VAR_11 |= FUNC_1(&VAR_8->scan_end_arg,
        VAR_8->chanlist_len);
 VAR_11 |= FUNC_2(&VAR_8->stop_arg, 0x00ffffff);

 if (VAR_11)
  return 3;


 if (VAR_8->scan_begin_src == VAR_5) {
  VAR_12 = VAR_8->scan_begin_arg;
  VAR_8->scan_begin_arg =
      FUNC_9(VAR_6, FUNC_8(VAR_6,
             VAR_8->scan_begin_arg,
             VAR_8->flags));
  if (VAR_12 != VAR_8->scan_begin_arg)
   VAR_11++;
 }
 if (VAR_11)
  return 4;

 return 0;
}
