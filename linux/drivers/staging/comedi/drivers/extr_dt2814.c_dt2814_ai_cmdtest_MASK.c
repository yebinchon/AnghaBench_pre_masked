
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; unsigned int start_arg; unsigned int scan_begin_arg; unsigned int scan_end_arg; unsigned int chanlist_len; unsigned int stop_arg; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int*,unsigned int) ;
 int FUNC_1 (unsigned int*,int) ;
 int FUNC_2 (unsigned int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (unsigned int*,int ) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_5,
        struct comedi_subdevice *VAR_6, struct comedi_cmd *VAR_7)
{
 int VAR_8 = 0;
 unsigned int VAR_9;



 VAR_8 |= FUNC_4(&VAR_7->start_src, VAR_3);
 VAR_8 |= FUNC_4(&VAR_7->scan_begin_src, VAR_4);
 VAR_8 |= FUNC_4(&VAR_7->convert_src, VAR_3);
 VAR_8 |= FUNC_4(&VAR_7->scan_end_src, VAR_1);
 VAR_8 |= FUNC_4(&VAR_7->stop_src, VAR_1 | VAR_2);

 if (VAR_8)
  return 1;



 VAR_8 |= FUNC_3(VAR_7->stop_src);



 if (VAR_8)
  return 2;



 VAR_8 |= FUNC_0(&VAR_7->start_arg, 0);

 VAR_8 |= FUNC_1(&VAR_7->scan_begin_arg, 1000000000);
 VAR_8 |= FUNC_2(&VAR_7->scan_begin_arg,
         VAR_0);

 VAR_8 |= FUNC_0(&VAR_7->scan_end_arg,
        VAR_7->chanlist_len);

 if (VAR_7->stop_src == VAR_1)
  VAR_8 |= FUNC_2(&VAR_7->stop_arg, 2);
 else
  VAR_8 |= FUNC_0(&VAR_7->stop_arg, 0);

 if (VAR_8)
  return 3;



 VAR_9 = VAR_7->scan_begin_arg;
 FUNC_5(&VAR_9, VAR_7->flags);
 VAR_8 |= FUNC_0(&VAR_7->scan_begin_arg, VAR_9);

 if (VAR_8)
  return 4;

 return 0;
}
