
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt3k_boardtype {unsigned int ai_speed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct dt3k_boardtype* board_ptr; } ;
struct comedi_cmd {scalar_t__ start_src; scalar_t__ scan_begin_src; scalar_t__ convert_src; scalar_t__ scan_end_src; scalar_t__ stop_src; unsigned int start_arg; unsigned int scan_begin_arg; unsigned int convert_arg; unsigned int scan_end_arg; unsigned int chanlist_len; unsigned int stop_arg; int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned int*,unsigned int) ;
 int FUNC_1 (unsigned int*,int) ;
 int FUNC_2 (unsigned int*,unsigned int) ;
 int FUNC_3 (scalar_t__*,scalar_t__) ;
 int FUNC_4 (int,unsigned int*,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_3,
      struct comedi_subdevice *VAR_4, struct comedi_cmd *VAR_5)
{
 const struct dt3k_boardtype *VAR_6 = VAR_3->board_ptr;
 int VAR_7 = 0;
 unsigned int VAR_8;



 VAR_7 |= FUNC_3(&VAR_5->start_src, VAR_1);
 VAR_7 |= FUNC_3(&VAR_5->scan_begin_src, VAR_2);
 VAR_7 |= FUNC_3(&VAR_5->convert_src, VAR_2);
 VAR_7 |= FUNC_3(&VAR_5->scan_end_src, VAR_0);
 VAR_7 |= FUNC_3(&VAR_5->stop_src, VAR_0);

 if (VAR_7)
  return 1;






 VAR_7 |= FUNC_0(&VAR_5->start_arg, 0);

 if (VAR_5->scan_begin_src == VAR_2) {
  VAR_7 |= FUNC_2(&VAR_5->scan_begin_arg,
          VAR_6->ai_speed);
  VAR_7 |= FUNC_1(&VAR_5->scan_begin_arg,
          100 * 16 * 65535);
 }

 if (VAR_5->convert_src == VAR_2) {
  VAR_7 |= FUNC_2(&VAR_5->convert_arg,
          VAR_6->ai_speed);
  VAR_7 |= FUNC_1(&VAR_5->convert_arg,
          50 * 16 * 65535);
 }

 VAR_7 |= FUNC_0(&VAR_5->scan_end_arg,
        VAR_5->chanlist_len);

 if (VAR_5->stop_src == VAR_0)
  VAR_7 |= FUNC_1(&VAR_5->stop_arg, 0x00ffffff);
 else
  VAR_7 |= FUNC_0(&VAR_5->stop_arg, 0);

 if (VAR_7)
  return 3;



 if (VAR_5->scan_begin_src == VAR_2) {
  VAR_8 = VAR_5->scan_begin_arg;
  FUNC_4(100, &VAR_8, VAR_5->flags);
  VAR_7 |= FUNC_0(&VAR_5->scan_begin_arg, VAR_8);
 }

 if (VAR_5->convert_src == VAR_2) {
  VAR_8 = VAR_5->convert_arg;
  FUNC_4(50, &VAR_8, VAR_5->flags);
  VAR_7 |= FUNC_0(&VAR_5->convert_arg, VAR_8);

  if (VAR_5->scan_begin_src == VAR_2) {
   VAR_8 = VAR_5->convert_arg * VAR_5->scan_end_arg;
   VAR_7 |= FUNC_2(&VAR_5->
           scan_begin_arg,
           VAR_8);
  }
 }

 if (VAR_7)
  return 4;

 return 0;
}
