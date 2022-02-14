
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_private {int routing_tables; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct ni_private* private; } ;
struct comedi_cmd {scalar_t__ chanlist_len; scalar_t__ chanlist; int stop_arg; int scan_end_arg; int convert_arg; int scan_begin_arg; int start_arg; int stop_src; int scan_end_src; int convert_src; int scan_begin_src; int start_src; } ;
struct TYPE_2__ {unsigned int prealloc_bufsz; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_3 (struct comedi_subdevice*,struct comedi_cmd*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;
 int FUNC_8 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_7,
      struct comedi_subdevice *VAR_8, struct comedi_cmd *VAR_9)
{
 struct ni_private *VAR_10 = VAR_7->private;
 unsigned int VAR_11;
 int VAR_12 = 0;



 VAR_12 |= FUNC_6(&VAR_9->start_src, VAR_4);
 VAR_12 |= FUNC_6(&VAR_9->scan_begin_src, VAR_3);
 VAR_12 |= FUNC_6(&VAR_9->convert_src, VAR_6);
 VAR_12 |= FUNC_6(&VAR_9->scan_end_src, VAR_2);
 VAR_12 |= FUNC_6(&VAR_9->stop_src, VAR_5);

 if (VAR_12)
  return 1;






 VAR_12 |= FUNC_4(&VAR_9->start_arg, 0);





 VAR_12 |= FUNC_8(FUNC_1(VAR_9->scan_begin_arg),
        VAR_1,
        &VAR_10->routing_tables);
 if (FUNC_2(VAR_9->scan_begin_arg) != 0 ||
     FUNC_0(VAR_9->scan_begin_arg) != 0)
  VAR_12 |= -VAR_0;

 VAR_12 |= FUNC_4(&VAR_9->convert_arg, 0);
 VAR_12 |= FUNC_4(&VAR_9->scan_end_arg,
        VAR_9->chanlist_len);
 VAR_11 = FUNC_3(VAR_8, VAR_9);
 if (VAR_11) {
  VAR_12 |= FUNC_5(&VAR_9->stop_arg,
          VAR_8->async->prealloc_bufsz /
          VAR_11);
 }

 if (VAR_12)
  return 3;





 if (VAR_9->chanlist && VAR_9->chanlist_len > 0)
  VAR_12 |= FUNC_7(VAR_7, VAR_8, VAR_9);

 if (VAR_12)
  return 5;

 return 0;
}
