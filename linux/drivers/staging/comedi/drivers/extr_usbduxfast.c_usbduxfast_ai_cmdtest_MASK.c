
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; int start_arg; int chanlist_len; int scan_end_arg; int convert_arg; unsigned int stop_arg; scalar_t__ chanlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int*,unsigned int) ;
 int FUNC_1 (unsigned int*,int ) ;
 int FUNC_2 (unsigned int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_10,
     struct comedi_subdevice *VAR_11,
     struct comedi_cmd *VAR_12)
{
 int VAR_13 = 0;
 unsigned int VAR_14;
 unsigned int VAR_15;



 VAR_13 |= FUNC_4(&VAR_12->start_src,
     VAR_8 | VAR_4 | VAR_6);
 VAR_13 |= FUNC_4(&VAR_12->scan_begin_src, VAR_5);
 VAR_13 |= FUNC_4(&VAR_12->convert_src, VAR_9);
 VAR_13 |= FUNC_4(&VAR_12->scan_end_src, VAR_3);
 VAR_13 |= FUNC_4(&VAR_12->stop_src, VAR_3 | VAR_7);

 if (VAR_13)
  return 1;



 VAR_13 |= FUNC_3(VAR_12->start_src);
 VAR_13 |= FUNC_3(VAR_12->stop_src);



 if (VAR_13)
  return 2;



 VAR_13 |= FUNC_0(&VAR_12->start_arg, 0);

 if (!VAR_12->chanlist_len)
  VAR_13 |= -VAR_0;


 if (VAR_12->start_src == VAR_4 &&
     VAR_12->chanlist_len != 1 && VAR_12->chanlist_len != 16)
  VAR_13 |= -VAR_0;

 VAR_13 |= FUNC_0(&VAR_12->scan_end_arg,
        VAR_12->chanlist_len);
 VAR_14 = (VAR_12->convert_arg * 30) / 1000;
 if (VAR_12->chanlist_len != 1)
  VAR_13 |= FUNC_2(&VAR_14,
          VAR_2);
 VAR_13 |= FUNC_1(&VAR_14, VAR_1);
 VAR_15 = (VAR_14 * 1000) / 30;
 VAR_13 |= FUNC_0(&VAR_12->convert_arg, VAR_15);

 if (VAR_12->stop_src == VAR_3)
  VAR_13 |= FUNC_2(&VAR_12->stop_arg, 1);
 else
  VAR_13 |= FUNC_0(&VAR_12->stop_arg, 0);

 if (VAR_13)
  return 3;




 if (VAR_12->chanlist && VAR_12->chanlist_len > 0)
  VAR_13 |= FUNC_5(VAR_10, VAR_11, VAR_12);
 if (VAR_13)
  return 5;

 return 0;
}
