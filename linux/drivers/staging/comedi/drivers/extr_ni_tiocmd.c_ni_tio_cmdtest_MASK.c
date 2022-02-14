
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_route_tables {int dummy; } ;
struct ni_gpct {unsigned int counter_index; TYPE_1__* counter_dev; } ;
struct comedi_subdevice {struct ni_gpct* private; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {unsigned int start_src; unsigned int scan_begin_src; unsigned int convert_src; unsigned int scan_end_src; unsigned int stop_src; int stop_arg; int chanlist_len; int scan_end_arg; int convert_arg; int scan_begin_arg; int start_arg; } ;
struct TYPE_2__ {struct ni_route_tables* routing_tables; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_1 ;

 unsigned int VAR_2 ;

 unsigned int VAR_3 ;


 int FUNC_2 (int *,int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int*,unsigned int) ;
 int FUNC_5 (int ,int ,struct ni_route_tables const*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

int FUNC_7(struct comedi_device *VAR_4,
     struct comedi_subdevice *VAR_5,
     struct comedi_cmd *VAR_6)
{
 struct ni_gpct *VAR_7 = VAR_5->private;
 unsigned int VAR_8 = VAR_7->counter_index;
 const struct ni_route_tables *VAR_9 =
  VAR_7->counter_dev->routing_tables;
 int VAR_10 = 0;
 unsigned int VAR_11;



 VAR_11 = 129 | 130 | 128;
 if (FUNC_6(VAR_7->counter_dev))
  VAR_11 |= 131;
 VAR_10 |= FUNC_4(&VAR_6->start_src, VAR_11);

 VAR_10 |= FUNC_4(&VAR_6->scan_begin_src,
     VAR_2 | 131 | 128);
 VAR_10 |= FUNC_4(&VAR_6->convert_src,
     129 | 131 | 128);
 VAR_10 |= FUNC_4(&VAR_6->scan_end_src, VAR_1);
 VAR_10 |= FUNC_4(&VAR_6->stop_src, VAR_3);

 if (VAR_10)
  return 1;



 VAR_10 |= FUNC_3(VAR_6->start_src);
 VAR_10 |= FUNC_3(VAR_6->scan_begin_src);
 VAR_10 |= FUNC_3(VAR_6->convert_src);



 if (VAR_6->convert_src != 129 && VAR_6->scan_begin_src != VAR_2)
  VAR_10 |= -VAR_0;

 if (VAR_10)
  return 2;



 switch (VAR_6->start_src) {
 case 129:
 case 130:
 case 128:
  VAR_10 |= FUNC_2(&VAR_6->start_arg, 0);
  break;
 case 131:
  break;
 }






 if (VAR_6->scan_begin_src != 131)
  VAR_10 |= FUNC_2(&VAR_6->scan_begin_arg, 0);
 else
  VAR_10 |= FUNC_5(FUNC_0(VAR_6->scan_begin_arg),
         FUNC_1(VAR_8), VAR_9);

 if (VAR_6->convert_src != 131)
  VAR_10 |= FUNC_2(&VAR_6->convert_arg, 0);
 else
  VAR_10 |= FUNC_5(FUNC_0(VAR_6->convert_arg),
         FUNC_1(VAR_8), VAR_9);

 VAR_10 |= FUNC_2(&VAR_6->scan_end_arg,
        VAR_6->chanlist_len);
 VAR_10 |= FUNC_2(&VAR_6->stop_arg, 0);

 if (VAR_10)
  return 3;





 return 0;
}
