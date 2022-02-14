
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; unsigned int start_arg; unsigned int convert_arg; unsigned int scan_begin_arg; unsigned int chanlist_len; unsigned int scan_end_arg; unsigned int stop_arg; } ;


 int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (unsigned int*,unsigned int) ;
 int FUNC_2 (unsigned int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int) ;
 unsigned int FUNC_5 (unsigned int,int) ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;
 unsigned int FUNC_7 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_9,
          struct comedi_subdevice *VAR_10,
          struct comedi_cmd *VAR_11)
{
 int VAR_12 = 0;
 unsigned int VAR_13, VAR_14;



 VAR_12 |= FUNC_4(&VAR_11->start_src, VAR_6);
 VAR_12 |= FUNC_4(&VAR_11->scan_begin_src,
     VAR_4 | VAR_7);
 VAR_12 |= FUNC_4(&VAR_11->convert_src,
     VAR_6 | VAR_7);
 VAR_12 |= FUNC_4(&VAR_11->scan_end_src, VAR_3);
 VAR_12 |= FUNC_4(&VAR_11->stop_src, VAR_3 | VAR_5);

 if (VAR_12)
  return 1;



 VAR_12 |= FUNC_3(VAR_11->convert_src);
 VAR_12 |= FUNC_3(VAR_11->stop_src);



 if (VAR_11->scan_begin_src == VAR_4 && VAR_11->convert_src == VAR_6)
  VAR_12 |= -VAR_0;

 if (VAR_12)
  return 2;



 VAR_12 |= FUNC_1(&VAR_11->start_arg, 0);

 if (VAR_11->convert_src == VAR_6) {
  VAR_12 |= FUNC_1(&VAR_11->convert_arg, 0);
 } else {
  if (VAR_11->scan_begin_src == VAR_4) {
   VAR_12 |= FUNC_2(&VAR_11->convert_arg,
           VAR_2);
  }
 }

 if (VAR_11->scan_begin_src == VAR_4) {
  VAR_12 |= FUNC_1(&VAR_11->scan_begin_arg, 0);
 } else {
  VAR_12 |= FUNC_2(&VAR_11->scan_begin_arg,
          VAR_2);
 }

 VAR_12 |= FUNC_2(&VAR_11->chanlist_len, 1);
 VAR_12 |= FUNC_1(&VAR_11->scan_end_arg,
        VAR_11->chanlist_len);

 if (VAR_11->stop_src == VAR_3)
  VAR_12 |= FUNC_2(&VAR_11->stop_arg, 1);
 else
  VAR_12 |= FUNC_1(&VAR_11->stop_arg, 0);

 if (VAR_12)
  return 3;



 if (VAR_11->convert_src == VAR_7) {

  VAR_13 = VAR_11->convert_arg;
  VAR_13 = FUNC_6(VAR_13,
     FUNC_7(VAR_8, (unsigned int)VAR_2));
  VAR_13 = VAR_2 * FUNC_0(VAR_13, VAR_2);
  if (VAR_11->scan_begin_arg == VAR_7) {

   VAR_14 = VAR_8 / VAR_11->scan_end_arg;
   VAR_14 = FUNC_7(VAR_14, (unsigned int)VAR_1);
   VAR_13 = FUNC_6(VAR_13, VAR_14);
  }
  VAR_12 |= FUNC_1(&VAR_11->convert_arg, VAR_13);
 }

 if (VAR_11->scan_begin_src == VAR_7) {

  VAR_13 = VAR_11->scan_begin_arg;
  VAR_13 = FUNC_6(VAR_13,
     FUNC_7(VAR_8, (unsigned int)VAR_2));
  VAR_13 = VAR_2 * FUNC_0(VAR_13, VAR_2);
  if (VAR_11->convert_src == VAR_7) {

   VAR_13 = FUNC_5(VAR_13, VAR_11->convert_arg * VAR_11->scan_end_arg);
  }
  VAR_12 |= FUNC_1(&VAR_11->scan_begin_arg, VAR_13);
 }

 if (VAR_12)
  return 4;

 return 0;
}
