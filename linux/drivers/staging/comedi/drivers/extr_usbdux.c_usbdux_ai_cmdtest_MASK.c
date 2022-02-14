
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdux_private {scalar_t__ high_speed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct usbdux_private* private; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; unsigned int start_arg; unsigned int scan_begin_arg; int chanlist_len; unsigned int scan_end_arg; unsigned int stop_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int*,unsigned int) ;
 int FUNC_1 (unsigned int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_6,
        struct comedi_subdevice *VAR_7, struct comedi_cmd *VAR_8)
{
 struct usbdux_private *VAR_9 = VAR_6->private;
 int VAR_10 = 0;



 VAR_10 |= FUNC_3(&VAR_8->start_src, VAR_4 | VAR_2);
 VAR_10 |= FUNC_3(&VAR_8->scan_begin_src, VAR_5);
 VAR_10 |= FUNC_3(&VAR_8->convert_src, VAR_4);
 VAR_10 |= FUNC_3(&VAR_8->scan_end_src, VAR_0);
 VAR_10 |= FUNC_3(&VAR_8->stop_src, VAR_0 | VAR_3);

 if (VAR_10)
  return 1;



 VAR_10 |= FUNC_2(VAR_8->start_src);
 VAR_10 |= FUNC_2(VAR_8->stop_src);



 if (VAR_10)
  return 2;



 VAR_10 |= FUNC_0(&VAR_8->start_arg, 0);

 if (VAR_8->scan_begin_src == VAR_1)
  VAR_10 |= FUNC_0(&VAR_8->scan_begin_arg, 0);

 if (VAR_8->scan_begin_src == VAR_5) {

  unsigned int VAR_11 = 1000000;
  unsigned int VAR_12 = VAR_11;

  if (VAR_9->high_speed) {






   int VAR_13 = 1;


   while (VAR_13 < VAR_8->chanlist_len)
    VAR_13 = VAR_13 * 2;

   VAR_11 /= 8;
   VAR_12 = VAR_11 * VAR_13;
  }
  VAR_10 |= FUNC_1(&VAR_8->scan_begin_arg,
          VAR_12);

  VAR_11 = (VAR_8->scan_begin_arg / VAR_11) * VAR_11;
  VAR_10 |= FUNC_0(&VAR_8->scan_begin_arg, VAR_11);
 }

 VAR_10 |= FUNC_0(&VAR_8->scan_end_arg,
        VAR_8->chanlist_len);

 if (VAR_8->stop_src == VAR_0)
  VAR_10 |= FUNC_1(&VAR_8->stop_arg, 1);
 else
  VAR_10 |= FUNC_0(&VAR_8->stop_arg, 0);

 if (VAR_10)
  return 3;

 return 0;
}
