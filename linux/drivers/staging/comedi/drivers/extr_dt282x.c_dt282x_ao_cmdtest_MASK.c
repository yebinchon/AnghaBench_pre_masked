
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt282x_private {int divisor; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct dt282x_private* private; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; unsigned int start_arg; unsigned int scan_begin_arg; unsigned int convert_arg; unsigned int scan_end_arg; unsigned int chanlist_len; unsigned int stop_arg; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int*,unsigned int) ;
 int FUNC_1 (unsigned int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (unsigned int*,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_5,
        struct comedi_subdevice *VAR_6,
        struct comedi_cmd *VAR_7)
{
 struct dt282x_private *VAR_8 = VAR_5->private;
 int VAR_9 = 0;
 unsigned int VAR_10;



 VAR_9 |= FUNC_3(&VAR_7->start_src, VAR_1);
 VAR_9 |= FUNC_3(&VAR_7->scan_begin_src, VAR_4);
 VAR_9 |= FUNC_3(&VAR_7->convert_src, VAR_3);
 VAR_9 |= FUNC_3(&VAR_7->scan_end_src, VAR_0);
 VAR_9 |= FUNC_3(&VAR_7->stop_src, VAR_0 | VAR_2);

 if (VAR_9)
  return 1;



 VAR_9 |= FUNC_2(VAR_7->stop_src);



 if (VAR_9)
  return 2;



 VAR_9 |= FUNC_0(&VAR_7->start_arg, 0);
 VAR_9 |= FUNC_1(&VAR_7->scan_begin_arg, 5000);
 VAR_9 |= FUNC_0(&VAR_7->convert_arg, 0);
 VAR_9 |= FUNC_0(&VAR_7->scan_end_arg,
        VAR_7->chanlist_len);

 if (VAR_7->stop_src == VAR_0)
  VAR_9 |= FUNC_1(&VAR_7->stop_arg, 1);
 else
  VAR_9 |= FUNC_0(&VAR_7->stop_arg, 0);

 if (VAR_9)
  return 3;



 VAR_10 = VAR_7->scan_begin_arg;
 VAR_8->divisor = FUNC_4(&VAR_10, VAR_7->flags);
 VAR_9 |= FUNC_0(&VAR_7->scan_begin_arg, VAR_10);

 if (VAR_9)
  return 4;

 return 0;
}
