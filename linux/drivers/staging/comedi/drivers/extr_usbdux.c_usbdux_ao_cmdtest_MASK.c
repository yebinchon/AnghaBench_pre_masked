
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {unsigned int start_src; unsigned int scan_begin_src; unsigned int convert_src; unsigned int scan_end_src; unsigned int stop_src; int stop_arg; int chanlist_len; int scan_end_arg; int convert_arg; int scan_begin_arg; int start_arg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_6,
        struct comedi_subdevice *VAR_7, struct comedi_cmd *VAR_8)
{
 int VAR_9 = 0;
 unsigned int VAR_10;



 VAR_9 |= FUNC_3(&VAR_8->start_src, VAR_4 | VAR_2);

 if (0) {

  VAR_10 = VAR_1;
 } else {

  VAR_10 = VAR_5;
 }
 VAR_9 |= FUNC_3(&VAR_8->scan_begin_src, VAR_10);

 if (0) {




  VAR_10 = VAR_5;
 } else {




  VAR_10 = VAR_4;
 }
 VAR_9 |= FUNC_3(&VAR_8->convert_src, VAR_10);

 VAR_9 |= FUNC_3(&VAR_8->scan_end_src, VAR_0);
 VAR_9 |= FUNC_3(&VAR_8->stop_src, VAR_0 | VAR_3);

 if (VAR_9)
  return 1;



 VAR_9 |= FUNC_2(VAR_8->start_src);
 VAR_9 |= FUNC_2(VAR_8->stop_src);



 if (VAR_9)
  return 2;



 VAR_9 |= FUNC_0(&VAR_8->start_arg, 0);

 if (VAR_8->scan_begin_src == VAR_1)
  VAR_9 |= FUNC_0(&VAR_8->scan_begin_arg, 0);

 if (VAR_8->scan_begin_src == VAR_5) {
  VAR_9 |= FUNC_1(&VAR_8->scan_begin_arg,
          1000000);
 }


 if (VAR_8->convert_src == VAR_5)
  VAR_9 |= FUNC_1(&VAR_8->convert_arg, 125000);

 VAR_9 |= FUNC_0(&VAR_8->scan_end_arg,
        VAR_8->chanlist_len);

 if (VAR_8->stop_src == VAR_0)
  VAR_9 |= FUNC_1(&VAR_8->stop_arg, 1);
 else
  VAR_9 |= FUNC_0(&VAR_8->stop_arg, 0);

 if (VAR_9)
  return 3;

 return 0;
}
