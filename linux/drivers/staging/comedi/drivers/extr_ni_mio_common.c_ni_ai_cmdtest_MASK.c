
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int clock_ns; scalar_t__ is_6143; scalar_t__ is_611x; int routing_tables; } ;
struct ni_board_struct {int ai_speed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct ni_private* private; struct ni_board_struct* board_ptr; } ;
struct comedi_cmd {unsigned int start_src; unsigned int scan_begin_src; unsigned int convert_src; unsigned int scan_end_src; unsigned int stop_src; unsigned int start_arg; unsigned int scan_begin_arg; unsigned int convert_arg; unsigned int scan_end_arg; unsigned int stop_arg; int flags; int chanlist_len; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;


 unsigned int VAR_4 ;

 unsigned int VAR_5 ;
 int FUNC_1 (unsigned int*,int ) ;
 int FUNC_2 (unsigned int*,unsigned int) ;
 int FUNC_3 (unsigned int*,int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int*,unsigned int) ;
 int FUNC_6 (int ,int ,int *,int) ;
 int FUNC_7 (struct comedi_device*,int ) ;
 int FUNC_8 (struct comedi_device*,unsigned int,int ) ;
 void* FUNC_9 (struct comedi_device*,int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_7, struct comedi_subdevice *VAR_8,
    struct comedi_cmd *VAR_9)
{
 const struct ni_board_struct *VAR_10 = VAR_7->board_ptr;
 struct ni_private *VAR_11 = VAR_7->private;
 int VAR_12 = 0;
 unsigned int VAR_13;



 VAR_12 |= FUNC_5(&VAR_9->start_src,
     128 | 129 | 130);
 VAR_12 |= FUNC_5(&VAR_9->scan_begin_src,
     VAR_5 | 130);

 VAR_13 = VAR_5 | 130;
 if (VAR_11->is_611x || VAR_11->is_6143)
  VAR_13 |= 128;
 VAR_12 |= FUNC_5(&VAR_9->convert_src, VAR_13);

 VAR_12 |= FUNC_5(&VAR_9->scan_end_src, VAR_3);
 VAR_12 |= FUNC_5(&VAR_9->stop_src, VAR_3 | VAR_4);

 if (VAR_12)
  return 1;



 VAR_12 |= FUNC_4(VAR_9->start_src);
 VAR_12 |= FUNC_4(VAR_9->scan_begin_src);
 VAR_12 |= FUNC_4(VAR_9->convert_src);
 VAR_12 |= FUNC_4(VAR_9->stop_src);



 if (VAR_12)
  return 2;



 switch (VAR_9->start_src) {
 case 128:
 case 129:
  VAR_12 |= FUNC_1(&VAR_9->start_arg, 0);
  break;
 case 130:
  VAR_12 |= FUNC_6(FUNC_0(VAR_9->start_arg),
        VAR_2,
        &VAR_11->routing_tables, 1);
  break;
 }

 if (VAR_9->scan_begin_src == VAR_5) {
  VAR_12 |= FUNC_3(&VAR_9->scan_begin_arg,
   FUNC_7(VAR_7, VAR_9->chanlist_len));
  VAR_12 |= FUNC_2(&VAR_9->scan_begin_arg,
          VAR_11->clock_ns *
          0xffffff);
 } else if (VAR_9->scan_begin_src == 130) {

  VAR_12 |= FUNC_6(FUNC_0(VAR_9->scan_begin_arg),
        VAR_1,
        &VAR_11->routing_tables, 1);
 } else {
  VAR_12 |= FUNC_1(&VAR_9->scan_begin_arg, 0);
 }

 if (VAR_9->convert_src == VAR_5) {
  if (VAR_11->is_611x || VAR_11->is_6143) {
   VAR_12 |= FUNC_1(&VAR_9->convert_arg,
          0);
  } else {
   VAR_12 |= FUNC_3(&VAR_9->convert_arg,
           VAR_10->ai_speed);
   VAR_12 |= FUNC_2(&VAR_9->convert_arg,
           VAR_11->clock_ns *
           0xffff);
  }
 } else if (VAR_9->convert_src == 130) {

  VAR_12 |= FUNC_6(FUNC_0(VAR_9->convert_arg),
        VAR_0,
        &VAR_11->routing_tables, 1);
 } else if (VAR_9->convert_src == 128) {
  VAR_12 |= FUNC_1(&VAR_9->convert_arg, 0);
 }

 VAR_12 |= FUNC_1(&VAR_9->scan_end_arg,
        VAR_9->chanlist_len);

 if (VAR_9->stop_src == VAR_3) {
  unsigned int VAR_14 = 0x01000000;

  if (VAR_11->is_611x)
   VAR_14 -= VAR_6;
  VAR_12 |= FUNC_2(&VAR_9->stop_arg, VAR_14);
  VAR_12 |= FUNC_3(&VAR_9->stop_arg, 1);
 } else {

  VAR_12 |= FUNC_1(&VAR_9->stop_arg, 0);
 }

 if (VAR_12)
  return 3;



 if (VAR_9->scan_begin_src == VAR_5) {
  unsigned int VAR_15 = VAR_9->scan_begin_arg;

  VAR_9->scan_begin_arg =
      FUNC_9(VAR_7, FUNC_8(VAR_7,
             VAR_9->scan_begin_arg,
             VAR_9->flags));
  if (VAR_15 != VAR_9->scan_begin_arg)
   VAR_12++;
 }
 if (VAR_9->convert_src == VAR_5) {
  if (!VAR_11->is_611x && !VAR_11->is_6143) {
   unsigned int VAR_16 = VAR_9->convert_arg;

   VAR_9->convert_arg =
       FUNC_9(VAR_7, FUNC_8(VAR_7,
              VAR_9->convert_arg,
              VAR_9->flags));
   if (VAR_16 != VAR_9->convert_arg)
    VAR_12++;
   if (VAR_9->scan_begin_src == VAR_5 &&
       VAR_9->scan_begin_arg <
       VAR_9->convert_arg * VAR_9->scan_end_arg) {
    VAR_9->scan_begin_arg =
        VAR_9->convert_arg * VAR_9->scan_end_arg;
    VAR_12++;
   }
  }
 }

 if (VAR_12)
  return 4;

 return 0;
}
