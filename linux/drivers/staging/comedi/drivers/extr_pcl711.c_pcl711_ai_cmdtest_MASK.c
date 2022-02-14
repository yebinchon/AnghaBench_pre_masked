
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int pacer; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; unsigned int start_arg; unsigned int scan_begin_arg; unsigned int convert_arg; unsigned int scan_end_arg; unsigned int chanlist_len; unsigned int stop_arg; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,unsigned int*,int ) ;
 int FUNC_1 (unsigned int*,unsigned int) ;
 int FUNC_2 (unsigned int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_6,
        struct comedi_subdevice *VAR_7, struct comedi_cmd *VAR_8)
{
 int VAR_9 = 0;



 VAR_9 |= FUNC_4(&VAR_8->start_src, VAR_4);
 VAR_9 |= FUNC_4(&VAR_8->scan_begin_src,
     VAR_5 | VAR_2);
 VAR_9 |= FUNC_4(&VAR_8->convert_src, VAR_4);
 VAR_9 |= FUNC_4(&VAR_8->scan_end_src, VAR_1);
 VAR_9 |= FUNC_4(&VAR_8->stop_src, VAR_1 | VAR_3);

 if (VAR_9)
  return 1;



 VAR_9 |= FUNC_3(VAR_8->scan_begin_src);
 VAR_9 |= FUNC_3(VAR_8->stop_src);



 if (VAR_9)
  return 2;



 VAR_9 |= FUNC_1(&VAR_8->start_arg, 0);

 if (VAR_8->scan_begin_src == VAR_2) {
  VAR_9 |= FUNC_1(&VAR_8->scan_begin_arg, 0);
 } else {

  VAR_9 |= FUNC_2(&VAR_8->scan_begin_arg,
          1000);
 }

 VAR_9 |= FUNC_1(&VAR_8->convert_arg, 0);
 VAR_9 |= FUNC_1(&VAR_8->scan_end_arg,
        VAR_8->chanlist_len);

 if (VAR_8->stop_src == VAR_1)
  VAR_9 |= FUNC_2(&VAR_8->stop_arg, 1);
 else
  VAR_9 |= FUNC_1(&VAR_8->stop_arg, 0);

 if (VAR_9)
  return 3;



 if (VAR_8->scan_begin_src == VAR_5) {
  unsigned int VAR_10 = VAR_8->scan_begin_arg;

  FUNC_0(VAR_6->pacer, &VAR_10, VAR_8->flags);
  VAR_9 |= FUNC_1(&VAR_8->scan_begin_arg, VAR_10);
 }

 if (VAR_9)
  return 4;

 return 0;
}
