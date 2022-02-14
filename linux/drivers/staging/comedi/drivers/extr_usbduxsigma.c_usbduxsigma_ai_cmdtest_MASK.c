
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsigma_private {int high_speed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct usbduxsigma_private* private; } ;
struct comedi_cmd {unsigned int chanlist_len; int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; int scan_begin_arg; int stop_arg; int scan_end_arg; int start_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int) ;
 unsigned int FUNC_4 (int ,int) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_5,
      struct comedi_subdevice *VAR_6,
      struct comedi_cmd *VAR_7)
{
 struct usbduxsigma_private *VAR_8 = VAR_5->private;
 int VAR_9 = VAR_8->high_speed;
 int VAR_10 = FUNC_5(VAR_7->chanlist_len);
 unsigned int VAR_11;
 int VAR_12 = 0;



 VAR_12 |= FUNC_3(&VAR_7->start_src, VAR_3 | VAR_1);
 VAR_12 |= FUNC_3(&VAR_7->scan_begin_src, VAR_4);
 VAR_12 |= FUNC_3(&VAR_7->convert_src, VAR_3);
 VAR_12 |= FUNC_3(&VAR_7->scan_end_src, VAR_0);
 VAR_12 |= FUNC_3(&VAR_7->stop_src, VAR_0 | VAR_2);

 if (VAR_12)
  return 1;



 VAR_12 |= FUNC_2(VAR_7->start_src);
 VAR_12 |= FUNC_2(VAR_7->stop_src);



 if (VAR_12)
  return 2;



 VAR_12 |= FUNC_0(&VAR_7->start_arg, 0);

 if (VAR_9) {






  VAR_12 |= FUNC_1(&VAR_7->scan_begin_arg,
          (125000 * VAR_10));
 } else {


  VAR_12 |= FUNC_1(&VAR_7->scan_begin_arg,
          1000000);
 }

 VAR_12 |= FUNC_0(&VAR_7->scan_end_arg,
        VAR_7->chanlist_len);

 if (VAR_7->stop_src == VAR_0)
  VAR_12 |= FUNC_1(&VAR_7->stop_arg, 1);
 else
  VAR_12 |= FUNC_0(&VAR_7->stop_arg, 0);

 if (VAR_12)
  return 3;



 VAR_11 = FUNC_4(VAR_7->scan_begin_arg, VAR_9 ? 125000 : 1000000);
 VAR_12 |= FUNC_0(&VAR_7->scan_begin_arg, VAR_11);

 if (VAR_12)
  return 4;

 return 0;
}
