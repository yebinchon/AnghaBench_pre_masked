
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; unsigned int start_arg; unsigned int scan_begin_arg; int convert_arg; unsigned int scan_end_arg; scalar_t__ chanlist_len; unsigned int stop_arg; scalar_t__ chanlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int*,scalar_t__) ;
 int FUNC_1 (unsigned int*,int) ;
 int FUNC_2 (unsigned int*,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_4,
         struct comedi_subdevice *VAR_5,
         struct comedi_cmd *VAR_6)
{
 int VAR_7 = 0;
 unsigned int VAR_8;



 VAR_7 |= FUNC_4(&VAR_6->start_src, VAR_2);
 VAR_7 |= FUNC_4(&VAR_6->scan_begin_src, VAR_3);
 VAR_7 |= FUNC_4(&VAR_6->convert_src, VAR_3);
 VAR_7 |= FUNC_4(&VAR_6->scan_end_src, VAR_0);
 VAR_7 |= FUNC_4(&VAR_6->stop_src, VAR_0 | VAR_1);

 if (VAR_7)
  return 1;



 VAR_7 |= FUNC_3(VAR_6->stop_src);



 if (VAR_7)
  return 2;



 VAR_7 |= FUNC_0(&VAR_6->start_arg, 0);

 VAR_7 |= FUNC_2(&VAR_6->scan_begin_arg, 1000000);
 VAR_7 |= FUNC_1(&VAR_6->scan_begin_arg, 1000000000);

 if (VAR_6->convert_arg >= 17500)
  VAR_6->convert_arg = 20000;
 else if (VAR_6->convert_arg >= 12500)
  VAR_6->convert_arg = 15000;
 else if (VAR_6->convert_arg >= 7500)
  VAR_6->convert_arg = 10000;
 else
  VAR_6->convert_arg = 5000;

 VAR_7 |= FUNC_0(&VAR_6->scan_end_arg,
        VAR_6->chanlist_len);

 if (VAR_6->stop_src == VAR_0)
  VAR_7 |= FUNC_2(&VAR_6->stop_arg, 1);
 else
  VAR_7 |= FUNC_0(&VAR_6->stop_arg, 0);

 if (VAR_7)
  return 3;



 VAR_8 = VAR_6->convert_arg * VAR_6->scan_end_arg;
 VAR_7 |= FUNC_2(&VAR_6->scan_begin_arg, VAR_8);

 if (VAR_7)
  return 4;


 if (VAR_6->chanlist && VAR_6->chanlist_len > 0)
  VAR_7 |= FUNC_5(VAR_4, VAR_5, VAR_6);

 if (VAR_7)
  return 5;

 return 0;
}
