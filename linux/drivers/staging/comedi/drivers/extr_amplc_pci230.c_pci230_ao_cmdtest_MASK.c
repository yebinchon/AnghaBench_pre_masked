
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci230_private {int hwver; } ;
struct pci230_board {scalar_t__ min_hwver; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct pci230_private* private; struct pci230_board* board_ptr; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; int start_arg; int scan_begin_arg; int scan_end_arg; scalar_t__ chanlist_len; int stop_arg; scalar_t__ chanlist; int flags; } ;


 void* FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;

 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;

 int FUNC_1 (int*,scalar_t__) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,unsigned int) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;
 int FUNC_7 (unsigned int*,int ) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_10,
        struct comedi_subdevice *VAR_11, struct comedi_cmd *VAR_12)
{
 const struct pci230_board *VAR_13 = VAR_10->board_ptr;
 struct pci230_private *VAR_14 = VAR_10->private;
 int VAR_15 = 0;
 unsigned int VAR_16;



 VAR_15 |= FUNC_5(&VAR_12->start_src, VAR_7);

 VAR_16 = 128 | VAR_7;
 if (VAR_13->min_hwver > 0 && VAR_14->hwver >= 2) {
  VAR_16 |= 129;
 }
 VAR_15 |= FUNC_5(&VAR_12->scan_begin_src, VAR_16);

 VAR_15 |= FUNC_5(&VAR_12->convert_src, VAR_9);
 VAR_15 |= FUNC_5(&VAR_12->scan_end_src, VAR_6);
 VAR_15 |= FUNC_5(&VAR_12->stop_src, VAR_6 | VAR_8);

 if (VAR_15)
  return 1;



 VAR_15 |= FUNC_4(VAR_12->scan_begin_src);
 VAR_15 |= FUNC_4(VAR_12->stop_src);



 if (VAR_15)
  return 2;



 VAR_15 |= FUNC_1(&VAR_12->start_arg, 0);
 switch (VAR_12->scan_begin_src) {
 case 128:
  VAR_15 |= FUNC_3(&VAR_12->scan_begin_arg,
          8000);
  VAR_15 |= FUNC_2(&VAR_12->scan_begin_arg,
          4294967295u);
  break;
 case 129:




  if (VAR_12->scan_begin_arg & ~VAR_1) {
   VAR_12->scan_begin_arg = FUNC_0(VAR_12->scan_begin_arg, 0,
            ~VAR_1);
   VAR_15 |= -VAR_3;
  }




  if (VAR_12->scan_begin_arg & VAR_1 &
      ~(VAR_0 | VAR_2)) {
   VAR_12->scan_begin_arg =
       FUNC_0(VAR_12->scan_begin_arg, 0,
        VAR_1 & ~(VAR_0 | VAR_2));
   VAR_15 |= -VAR_3;
  }
  break;
 default:
  VAR_15 |= FUNC_1(&VAR_12->scan_begin_arg, 0);
  break;
 }

 VAR_15 |= FUNC_1(&VAR_12->scan_end_arg,
        VAR_12->chanlist_len);

 if (VAR_12->stop_src == VAR_6)
  VAR_15 |= FUNC_3(&VAR_12->stop_arg, 1);
 else
  VAR_15 |= FUNC_1(&VAR_12->stop_arg, 0);

 if (VAR_15)
  return 3;



 if (VAR_12->scan_begin_src == 128) {
  VAR_16 = VAR_12->scan_begin_arg;
  FUNC_7(&VAR_12->scan_begin_arg, VAR_12->flags);
  if (VAR_16 != VAR_12->scan_begin_arg)
   VAR_15++;
 }

 if (VAR_15)
  return 4;


 if (VAR_12->chanlist && VAR_12->chanlist_len > 0)
  VAR_15 |= FUNC_6(VAR_10, VAR_11, VAR_12);

 if (VAR_15)
  return 5;

 return 0;
}
