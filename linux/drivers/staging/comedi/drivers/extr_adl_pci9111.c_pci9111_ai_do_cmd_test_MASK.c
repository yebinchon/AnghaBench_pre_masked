
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int pacer; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; unsigned int start_arg; unsigned int convert_arg; unsigned int scan_begin_arg; unsigned int scan_end_arg; unsigned int chanlist_len; unsigned int stop_arg; scalar_t__ chanlist; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,unsigned int*,int ) ;
 int FUNC_1 (unsigned int*,unsigned int) ;
 int FUNC_2 (unsigned int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_8,
      struct comedi_subdevice *VAR_9,
      struct comedi_cmd *VAR_10)
{
 int VAR_11 = 0;
 unsigned int VAR_12;



 VAR_11 |= FUNC_4(&VAR_10->start_src, VAR_6);
 VAR_11 |= FUNC_4(&VAR_10->scan_begin_src,
     VAR_7 | VAR_4 | VAR_3);
 VAR_11 |= FUNC_4(&VAR_10->convert_src,
     VAR_7 | VAR_3);
 VAR_11 |= FUNC_4(&VAR_10->scan_end_src, VAR_2);
 VAR_11 |= FUNC_4(&VAR_10->stop_src,
     VAR_2 | VAR_5);

 if (VAR_11)
  return 1;



 VAR_11 |= FUNC_3(VAR_10->scan_begin_src);
 VAR_11 |= FUNC_3(VAR_10->convert_src);
 VAR_11 |= FUNC_3(VAR_10->stop_src);



 if (VAR_10->scan_begin_src != VAR_4) {
  if (VAR_10->scan_begin_src != VAR_10->convert_src)
   VAR_11 |= -VAR_0;
 }

 if (VAR_11)
  return 2;



 VAR_11 |= FUNC_1(&VAR_10->start_arg, 0);

 if (VAR_10->convert_src == VAR_7) {
  VAR_11 |= FUNC_2(&VAR_10->convert_arg,
     VAR_1);
 } else {
  VAR_11 |= FUNC_1(&VAR_10->convert_arg, 0);
 }

 if (VAR_10->scan_begin_src == VAR_7) {
  VAR_11 |= FUNC_2(&VAR_10->scan_begin_arg,
     VAR_1);
 } else {
  VAR_11 |= FUNC_1(&VAR_10->scan_begin_arg, 0);
 }

 VAR_11 |= FUNC_1(&VAR_10->scan_end_arg,
        VAR_10->chanlist_len);

 if (VAR_10->stop_src == VAR_2)
  VAR_11 |= FUNC_2(&VAR_10->stop_arg, 1);
 else
  VAR_11 |= FUNC_1(&VAR_10->stop_arg, 0);

 if (VAR_11)
  return 3;



 if (VAR_10->convert_src == VAR_7) {
  VAR_12 = VAR_10->convert_arg;
  FUNC_0(VAR_8->pacer, &VAR_12, VAR_10->flags);
  VAR_11 |= FUNC_1(&VAR_10->convert_arg, VAR_12);
 }





 if (VAR_10->scan_begin_src == VAR_7) {
  VAR_12 = VAR_10->chanlist_len * VAR_10->convert_arg;

  if (VAR_12 < VAR_10->scan_begin_arg)
   VAR_12 *= (VAR_10->scan_begin_arg / VAR_12);

  VAR_11 |= FUNC_1(&VAR_10->scan_begin_arg, VAR_12);
 }

 if (VAR_11)
  return 4;


 if (VAR_10->chanlist && VAR_10->chanlist_len > 0)
  VAR_11 |= FUNC_5(VAR_8, VAR_9, VAR_10);

 if (VAR_11)
  return 5;

 return 0;
}
