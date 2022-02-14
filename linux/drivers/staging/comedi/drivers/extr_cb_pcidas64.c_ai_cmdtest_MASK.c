
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_board {scalar_t__ layout; int ai_speed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct pcidas64_board* board_ptr; } ;
struct comedi_cmd {unsigned int start_src; unsigned int scan_begin_src; unsigned int convert_src; unsigned int scan_end_src; unsigned int stop_src; int start_arg; int convert_arg; int scan_begin_arg; int chanlist_len; int scan_end_arg; int stop_arg; scalar_t__ chanlist; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 unsigned int VAR_2 ;


 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_5, struct comedi_subdevice *VAR_6,
        struct comedi_cmd *VAR_7)
{
 const struct pcidas64_board *VAR_8 = VAR_5->board_ptr;
 int VAR_9 = 0;
 unsigned int VAR_10, VAR_11;
 unsigned int VAR_12;



 VAR_9 |= FUNC_5(&VAR_7->start_src, 128 | 130);

 VAR_12 = VAR_4;
 if (VAR_8->layout == VAR_1)
  VAR_12 |= VAR_3;
 else
  VAR_12 |= VAR_2;
 VAR_9 |= FUNC_5(&VAR_7->scan_begin_src, VAR_12);

 VAR_12 = VAR_4;
 if (VAR_8->layout == VAR_1)
  VAR_12 |= 128;
 else
  VAR_12 |= 130;
 VAR_9 |= FUNC_5(&VAR_7->convert_src, VAR_12);
 VAR_9 |= FUNC_5(&VAR_7->scan_end_src, 131);
 VAR_9 |= FUNC_5(&VAR_7->stop_src,
     131 | 130 | 129);

 if (VAR_9)
  return 1;



 VAR_9 |= FUNC_4(VAR_7->start_src);
 VAR_9 |= FUNC_4(VAR_7->scan_begin_src);
 VAR_9 |= FUNC_4(VAR_7->convert_src);
 VAR_9 |= FUNC_4(VAR_7->stop_src);



 if (VAR_7->convert_src == 130 && VAR_7->scan_begin_src == VAR_4)
  VAR_9 |= -VAR_0;

 if (VAR_9)
  return 2;



 switch (VAR_7->start_src) {
 case 128:
  VAR_9 |= FUNC_2(&VAR_7->start_arg, 0);
  break;
 case 130:




  break;
 }

 if (VAR_7->convert_src == VAR_4) {
  if (VAR_8->layout == VAR_1) {
   VAR_9 |= FUNC_2(&VAR_7->convert_arg,
          0);
  } else {
   VAR_9 |= FUNC_3(&VAR_7->convert_arg,
           VAR_8->ai_speed);




   if (VAR_7->scan_begin_src == VAR_4) {
    VAR_9 |= FUNC_3(
      &VAR_7->scan_begin_arg,
      VAR_7->convert_arg *
      VAR_7->chanlist_len);
   }
  }
 }

 VAR_9 |= FUNC_3(&VAR_7->chanlist_len, 1);
 VAR_9 |= FUNC_2(&VAR_7->scan_end_arg,
        VAR_7->chanlist_len);

 switch (VAR_7->stop_src) {
 case 130:
  break;
 case 131:
  VAR_9 |= FUNC_3(&VAR_7->stop_arg, 1);
  break;
 case 129:
  VAR_9 |= FUNC_2(&VAR_7->stop_arg, 0);
  break;
 default:
  break;
 }

 if (VAR_9)
  return 3;



 if (VAR_7->convert_src == VAR_4) {
  VAR_10 = VAR_7->convert_arg;
  VAR_11 = VAR_7->scan_begin_arg;
  FUNC_1(VAR_5, VAR_7);
  if (VAR_10 != VAR_7->convert_arg)
   VAR_9++;
  if (VAR_11 != VAR_7->scan_begin_arg)
   VAR_9++;
 }

 if (VAR_9)
  return 4;


 if (VAR_7->chanlist && VAR_7->chanlist_len > 0)
  VAR_9 |= FUNC_0(VAR_5, VAR_6, VAR_7);

 if (VAR_9)
  return 5;

 return 0;
}
