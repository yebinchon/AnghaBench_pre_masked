
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; unsigned int start_arg; int chanlist_len; unsigned int scan_begin_arg; unsigned int convert_arg; unsigned int scan_end_arg; unsigned int stop_arg; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (unsigned int*,unsigned int) ;
 int FUNC_1 (unsigned int*,int) ;
 int FUNC_2 (unsigned int*,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (unsigned int*,int ) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_12,
     struct comedi_subdevice *VAR_13, struct comedi_cmd *VAR_14)
{
 int VAR_15 = 0;
 unsigned int VAR_16;



 VAR_15 |= FUNC_4(&VAR_14->start_src, VAR_10);
 VAR_15 |= FUNC_4(&VAR_14->scan_begin_src,
     VAR_11 | VAR_8);
 VAR_15 |= FUNC_4(&VAR_14->convert_src,
     VAR_11 | VAR_8);
 VAR_15 |= FUNC_4(&VAR_14->scan_end_src, VAR_7);
 VAR_15 |= FUNC_4(&VAR_14->stop_src, VAR_7 | VAR_9);

 if (VAR_15)
  return 1;



 VAR_15 |= FUNC_3(VAR_14->scan_begin_src);
 VAR_15 |= FUNC_3(VAR_14->convert_src);
 VAR_15 |= FUNC_3(VAR_14->stop_src);



 if (VAR_15)
  return 2;



 VAR_15 |= FUNC_0(&VAR_14->start_arg, 0);

 if (VAR_14->scan_begin_src == VAR_11) {

  if (VAR_14->chanlist_len == 1) {
   if (FUNC_2(&VAR_14->scan_begin_arg,
        VAR_4)) {
    FUNC_5(&VAR_14->scan_begin_arg,
      VAR_1);
    VAR_15 |= -VAR_2;
   }
   if (FUNC_1(&VAR_14->scan_begin_arg,
        VAR_6)) {
    FUNC_5(&VAR_14->scan_begin_arg,
      VAR_0);
    VAR_15 |= -VAR_2;
   }
  } else {
   if (FUNC_2(&VAR_14->scan_begin_arg,
        VAR_3)) {
    FUNC_5(&VAR_14->scan_begin_arg,
      VAR_1);
    VAR_15 |= -VAR_2;
   }
   if (FUNC_1(&VAR_14->scan_begin_arg,
        VAR_5)) {
    FUNC_5(&VAR_14->scan_begin_arg,
      VAR_0);
    VAR_15 |= -VAR_2;
   }
  }
 } else {



  VAR_15 |= FUNC_1(&VAR_14->scan_begin_arg, 9);
 }

 if (VAR_14->convert_src == VAR_11) {
  if (VAR_14->chanlist_len == 1) {
   if (FUNC_2(&VAR_14->convert_arg,
        VAR_4)) {
    FUNC_5(&VAR_14->convert_arg,
      VAR_1);
    VAR_15 |= -VAR_2;
   }
   if (FUNC_1(&VAR_14->convert_arg,
        VAR_6)) {
    FUNC_5(&VAR_14->convert_arg,
      VAR_0);
    VAR_15 |= -VAR_2;
   }
  } else {
   if (FUNC_2(&VAR_14->convert_arg,
        VAR_3)) {
    FUNC_5(&VAR_14->convert_arg,
      VAR_1);
    VAR_15 |= -VAR_2;
   }
   if (FUNC_1(&VAR_14->convert_arg,
        VAR_5)) {
    FUNC_5(&VAR_14->convert_arg,
      VAR_0);
    VAR_15 |= -VAR_2;
   }
  }
 } else {


  VAR_15 |= FUNC_1(&VAR_14->convert_arg, 9);
 }

 VAR_15 |= FUNC_0(&VAR_14->scan_end_arg,
        VAR_14->chanlist_len);

 if (VAR_14->stop_src == VAR_7)
  VAR_15 |= FUNC_2(&VAR_14->stop_arg, 1);
 else
  VAR_15 |= FUNC_0(&VAR_14->stop_arg, 0);

 if (VAR_15)
  return 3;



 if (VAR_14->scan_begin_src == VAR_11) {
  VAR_16 = VAR_14->scan_begin_arg;
  FUNC_5(&VAR_16, VAR_14->flags);
  VAR_15 |= FUNC_0(&VAR_14->scan_begin_arg, VAR_16);
 }

 if (VAR_14->convert_src == VAR_11) {
  VAR_16 = VAR_14->convert_arg;
  FUNC_5(&VAR_16, VAR_14->flags);
  VAR_15 |= FUNC_0(&VAR_14->convert_arg, VAR_16);

  if (VAR_14->scan_begin_src == VAR_11) {
   VAR_16 = VAR_14->convert_arg * VAR_14->scan_end_arg;
   VAR_15 |= FUNC_2(&VAR_14->
           scan_begin_arg,
           VAR_16);
  }
 }

 if (VAR_15)
  return 4;

 return 0;
}
