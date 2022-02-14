
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; unsigned int scan_begin_arg; unsigned int convert_arg; unsigned int chanlist_len; unsigned int scan_end_arg; unsigned int stop_arg; } ;


 int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (unsigned int*,unsigned int) ;
 int FUNC_2 (unsigned int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int) ;
 unsigned int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_7,
          struct comedi_subdevice *VAR_8,
          struct comedi_cmd *VAR_9)
{
 int VAR_10 = 0;
 unsigned int VAR_11;



 VAR_10 |= FUNC_4(&VAR_9->start_src, VAR_2);
 VAR_10 |= FUNC_4(&VAR_9->scan_begin_src, VAR_5);
 VAR_10 |= FUNC_4(&VAR_9->convert_src, VAR_4);
 VAR_10 |= FUNC_4(&VAR_9->scan_end_src, VAR_1);
 VAR_10 |= FUNC_4(&VAR_9->stop_src, VAR_1 | VAR_3);

 if (VAR_10)
  return 1;



 VAR_10 |= FUNC_3(VAR_9->stop_src);



 if (VAR_10)
  return 2;



 VAR_10 |= FUNC_2(&VAR_9->scan_begin_arg,
         VAR_0);
 VAR_10 |= FUNC_1(&VAR_9->convert_arg, 0);
 VAR_10 |= FUNC_2(&VAR_9->chanlist_len, 1);
 VAR_10 |= FUNC_1(&VAR_9->scan_end_arg,
        VAR_9->chanlist_len);
 if (VAR_9->stop_src == VAR_1)
  VAR_10 |= FUNC_2(&VAR_9->stop_arg, 1);
 else
  VAR_10 |= FUNC_1(&VAR_9->stop_arg, 0);

 if (VAR_10)
  return 3;




 VAR_11 = VAR_9->scan_begin_arg;
 VAR_11 = FUNC_5(VAR_11, FUNC_6(VAR_6, (unsigned int)VAR_0));
 VAR_11 = VAR_0 * FUNC_0(VAR_11, VAR_0);
 VAR_10 |= FUNC_1(&VAR_9->scan_begin_arg, VAR_11);

 if (VAR_10)
  return 4;

 return 0;
}
