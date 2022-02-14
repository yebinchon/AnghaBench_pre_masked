
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_boardinfo {int ai_speed; scalar_t__ is_labpc1200; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct labpc_boardinfo* board_ptr; } ;
struct comedi_cmd {unsigned int start_src; unsigned int scan_begin_src; unsigned int convert_src; unsigned int scan_end_src; unsigned int stop_src; int start_arg; int chanlist_len; int scan_end_arg; int convert_arg; int scan_begin_arg; int stop_arg; scalar_t__ chanlist; } ;
typedef enum scan_mode { ____Placeholder_scan_mode } scan_mode ;


 int VAR_0 ;


 unsigned int VAR_1 ;


 unsigned int VAR_2 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int*,unsigned int) ;
 int FUNC_4 (struct comedi_device*,struct comedi_cmd*,int) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;
 int FUNC_6 (struct comedi_cmd*) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_3,
       struct comedi_subdevice *VAR_4, struct comedi_cmd *VAR_5)
{
 const struct labpc_boardinfo *VAR_6 = VAR_3->board_ptr;
 int VAR_7 = 0;
 int VAR_8, VAR_9;
 unsigned int VAR_10;
 enum scan_mode VAR_11;



 VAR_7 |= FUNC_3(&VAR_5->start_src, 128 | 130);
 VAR_7 |= FUNC_3(&VAR_5->scan_begin_src,
     VAR_2 | VAR_1 | 130);
 VAR_7 |= FUNC_3(&VAR_5->convert_src,
     VAR_2 | 130);
 VAR_7 |= FUNC_3(&VAR_5->scan_end_src, 131);

 VAR_10 = 131 | 129;
 if (VAR_6->is_labpc1200)
  VAR_10 |= 130;
 VAR_7 |= FUNC_3(&VAR_5->stop_src, VAR_10);

 if (VAR_7)
  return 1;



 VAR_7 |= FUNC_2(VAR_5->start_src);
 VAR_7 |= FUNC_2(VAR_5->scan_begin_src);
 VAR_7 |= FUNC_2(VAR_5->convert_src);
 VAR_7 |= FUNC_2(VAR_5->stop_src);




 if (VAR_5->start_src == 130 && VAR_5->stop_src == 130)
  VAR_7++;

 if (VAR_7)
  return 2;



 switch (VAR_5->start_src) {
 case 128:
  VAR_7 |= FUNC_0(&VAR_5->start_arg, 0);
  break;
 case 130:

  break;
 }

 if (!VAR_5->chanlist_len)
  VAR_7 |= -VAR_0;
 VAR_7 |= FUNC_0(&VAR_5->scan_end_arg,
        VAR_5->chanlist_len);

 if (VAR_5->convert_src == VAR_2) {
  VAR_7 |= FUNC_1(&VAR_5->convert_arg,
          VAR_6->ai_speed);
 }


 if (VAR_5->scan_begin_src == VAR_2) {
  if (VAR_5->convert_src == VAR_2) {
   VAR_7 |= FUNC_1(&VAR_5->
           scan_begin_arg,
           VAR_5->convert_arg *
           VAR_5->chanlist_len);
  }
  VAR_7 |= FUNC_1(&VAR_5->scan_begin_arg,
          VAR_6->ai_speed *
          VAR_5->chanlist_len);
 }

 switch (VAR_5->stop_src) {
 case 131:
  VAR_7 |= FUNC_1(&VAR_5->stop_arg, 1);
  break;
 case 129:
  VAR_7 |= FUNC_0(&VAR_5->stop_arg, 0);
  break;




 default:
  break;
 }

 if (VAR_7)
  return 3;



 VAR_8 = VAR_5->convert_arg;
 VAR_9 = VAR_5->scan_begin_arg;
 VAR_11 = FUNC_6(VAR_5);
 FUNC_4(VAR_3, VAR_5, VAR_11);
 if (VAR_8 != VAR_5->convert_arg || VAR_9 != VAR_5->scan_begin_arg)
  VAR_7++;

 if (VAR_7)
  return 4;


 if (VAR_5->chanlist && VAR_5->chanlist_len > 0)
  VAR_7 |= FUNC_5(VAR_3, VAR_4, VAR_5);

 if (VAR_7)
  return 5;

 return 0;
}
