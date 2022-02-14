
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct daqp_private {void* pacer_div; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct daqp_private* private; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; unsigned int start_arg; unsigned int chanlist_len; unsigned int scan_end_arg; unsigned int scan_begin_arg; unsigned int convert_arg; unsigned int stop_arg; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int*,unsigned int) ;
 int FUNC_1 (unsigned int*,int) ;
 int FUNC_2 (unsigned int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int) ;
 void* FUNC_5 (unsigned int*,int ) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_7,
      struct comedi_subdevice *VAR_8,
      struct comedi_cmd *VAR_9)
{
 struct daqp_private *VAR_10 = VAR_7->private;
 int VAR_11 = 0;
 unsigned int VAR_12;



 VAR_11 |= FUNC_4(&VAR_9->start_src, VAR_5);
 VAR_11 |= FUNC_4(&VAR_9->scan_begin_src,
     VAR_6 | VAR_3);
 VAR_11 |= FUNC_4(&VAR_9->convert_src,
     VAR_6 | VAR_5);
 VAR_11 |= FUNC_4(&VAR_9->scan_end_src, VAR_2);
 VAR_11 |= FUNC_4(&VAR_9->stop_src, VAR_2 | VAR_4);

 if (VAR_11)
  return 1;



 VAR_11 |= FUNC_3(VAR_9->scan_begin_src);
 VAR_11 |= FUNC_3(VAR_9->convert_src);
 VAR_11 |= FUNC_3(VAR_9->stop_src);




 if (VAR_9->scan_begin_src != VAR_6 && VAR_9->convert_src != VAR_6)
  VAR_11 |= -VAR_1;

 if (VAR_11)
  return 2;



 VAR_11 |= FUNC_0(&VAR_9->start_arg, 0);

 VAR_11 |= FUNC_2(&VAR_9->chanlist_len, 1);
 VAR_11 |= FUNC_0(&VAR_9->scan_end_arg,
        VAR_9->chanlist_len);

 if (VAR_9->scan_begin_src == VAR_6)
  VAR_11 |= FUNC_2(&VAR_9->scan_begin_arg,
          VAR_0);

 if (VAR_9->convert_src == VAR_6) {
  VAR_11 |= FUNC_2(&VAR_9->convert_arg,
          VAR_0);

  if (VAR_9->scan_begin_src == VAR_6) {






   VAR_12 = VAR_9->convert_arg * VAR_9->scan_end_arg;
   VAR_11 |= FUNC_0(&VAR_9->scan_begin_arg,
          VAR_12);
  }
 }

 if (VAR_9->stop_src == VAR_2)
  VAR_11 |= FUNC_1(&VAR_9->stop_arg, 0x00ffffff);
 else
  VAR_11 |= FUNC_0(&VAR_9->stop_arg, 0);

 if (VAR_11)
  return 3;



 if (VAR_9->convert_src == VAR_6) {
  VAR_12 = VAR_9->convert_arg;
  VAR_10->pacer_div = FUNC_5(&VAR_12, VAR_9->flags);
  VAR_11 |= FUNC_0(&VAR_9->convert_arg, VAR_12);
 } else if (VAR_9->scan_begin_src == VAR_6) {
  VAR_12 = VAR_9->scan_begin_arg;
  VAR_10->pacer_div = FUNC_5(&VAR_12, VAR_9->flags);
  VAR_11 |= FUNC_0(&VAR_9->scan_begin_arg, VAR_12);
 }

 if (VAR_11)
  return 4;

 return 0;
}
