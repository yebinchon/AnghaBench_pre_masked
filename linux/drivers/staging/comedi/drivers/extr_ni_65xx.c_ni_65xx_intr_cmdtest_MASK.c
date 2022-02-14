
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int stop_arg; int chanlist_len; int scan_end_arg; int convert_arg; int scan_begin_arg; int start_arg; int stop_src; int scan_end_src; int convert_src; int scan_begin_src; int start_src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
    struct comedi_subdevice *VAR_5,
    struct comedi_cmd *VAR_6)
{
 int VAR_7 = 0;



 VAR_7 |= FUNC_1(&VAR_6->start_src, VAR_2);
 VAR_7 |= FUNC_1(&VAR_6->scan_begin_src, VAR_3);
 VAR_7 |= FUNC_1(&VAR_6->convert_src, VAR_1);
 VAR_7 |= FUNC_1(&VAR_6->scan_end_src, VAR_0);
 VAR_7 |= FUNC_1(&VAR_6->stop_src, VAR_0);

 if (VAR_7)
  return 1;






 VAR_7 |= FUNC_0(&VAR_6->start_arg, 0);
 VAR_7 |= FUNC_0(&VAR_6->scan_begin_arg, 0);
 VAR_7 |= FUNC_0(&VAR_6->convert_arg, 0);
 VAR_7 |= FUNC_0(&VAR_6->scan_end_arg,
        VAR_6->chanlist_len);
 VAR_7 |= FUNC_0(&VAR_6->stop_arg, 0);

 if (VAR_7)
  return 3;





 return 0;
}
