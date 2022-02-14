
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci230_private {scalar_t__ hwver; } ;
struct pci230_board {scalar_t__ min_hwver; scalar_t__ have_dio; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct pci230_private* private; struct pci230_board* board_ptr; } ;
struct comedi_cmd {unsigned int start_src; unsigned int scan_begin_src; unsigned int convert_src; unsigned int scan_end_src; unsigned int stop_src; int start_arg; scalar_t__ chanlist_len; int convert_arg; int scan_end_arg; int stop_arg; int scan_begin_arg; int * chanlist; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int FUNC_2 (int*,scalar_t__) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int*,unsigned int) ;
 int FUNC_7 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;
 int FUNC_8 (struct comedi_cmd*) ;
 int FUNC_9 (unsigned int*,int ) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_17,
        struct comedi_subdevice *VAR_18, struct comedi_cmd *VAR_19)
{
 const struct pci230_board *VAR_20 = VAR_17->board_ptr;
 struct pci230_private *VAR_21 = VAR_17->private;
 int VAR_22 = 0;
 unsigned int VAR_23;



 VAR_22 |= FUNC_6(&VAR_19->start_src, VAR_15 | VAR_13);

 VAR_23 = VAR_12 | VAR_16 | VAR_13;
 if (VAR_20->have_dio || VAR_20->min_hwver > 0) {






  VAR_23 |= VAR_11;
 }
 VAR_22 |= FUNC_6(&VAR_19->scan_begin_src, VAR_23);
 VAR_22 |= FUNC_6(&VAR_19->convert_src,
     VAR_16 | VAR_13 | VAR_11);
 VAR_22 |= FUNC_6(&VAR_19->scan_end_src, VAR_10);
 VAR_22 |= FUNC_6(&VAR_19->stop_src, VAR_10 | VAR_14);

 if (VAR_22)
  return 1;



 VAR_22 |= FUNC_5(VAR_19->start_src);
 VAR_22 |= FUNC_5(VAR_19->scan_begin_src);
 VAR_22 |= FUNC_5(VAR_19->convert_src);
 VAR_22 |= FUNC_5(VAR_19->stop_src);







 if (VAR_19->scan_begin_src != VAR_12 &&
     VAR_19->convert_src != VAR_16)
  VAR_22 |= -VAR_5;

 if (VAR_22)
  return 2;



 VAR_22 |= FUNC_2(&VAR_19->start_arg, 0);
 if (VAR_19->convert_src == VAR_16) {
  unsigned int VAR_24;

  if (VAR_21->hwver == 0) {




   if (VAR_19->chanlist && VAR_19->chanlist_len > 0) {

    if (FUNC_1(VAR_19->chanlist[0]) == VAR_0)
     VAR_24 = 8000;
    else
     VAR_24 = 3200;

   } else {

    VAR_24 = 3200;
   }
  } else {

   VAR_24 = 4000;
  }

  VAR_22 |= FUNC_4(&VAR_19->convert_arg,
          VAR_24);
  VAR_22 |= FUNC_3(&VAR_19->convert_arg,
          4294967295u);
 } else if (VAR_19->convert_src == VAR_11) {
  if (VAR_19->convert_arg & VAR_3) {

   if (VAR_19->convert_arg & ~VAR_3) {
    VAR_19->convert_arg = FUNC_0(VAR_19->convert_arg, 0,
          ~VAR_3);
    VAR_22 |= -VAR_5;
   }




   if ((VAR_19->convert_arg & VAR_3 & ~VAR_4) !=
       VAR_2) {

    VAR_19->convert_arg =
        FUNC_0(VAR_19->start_arg, VAR_2 | 0,
         VAR_3 & ~VAR_4);
    VAR_22 |= -VAR_5;
   }
  } else {





   VAR_22 |= FUNC_3(&VAR_19->convert_arg,
           1);
  }
 } else {
  VAR_22 |= FUNC_2(&VAR_19->convert_arg, 0);
 }

 VAR_22 |= FUNC_2(&VAR_19->scan_end_arg,
        VAR_19->chanlist_len);

 if (VAR_19->stop_src == VAR_10)
  VAR_22 |= FUNC_4(&VAR_19->stop_arg, 1);
 else
  VAR_22 |= FUNC_2(&VAR_19->stop_arg, 0);

 if (VAR_19->scan_begin_src == VAR_11) {





  if (VAR_19->scan_begin_arg & ~VAR_3) {
   VAR_19->scan_begin_arg = FUNC_0(VAR_19->scan_begin_arg, 0,
            ~VAR_3);
   VAR_22 |= -VAR_5;
  }

  if (VAR_19->scan_begin_arg & VAR_3 & ~VAR_2) {
   VAR_19->scan_begin_arg = FUNC_0(VAR_19->scan_begin_arg, 0,
            VAR_3 & ~VAR_2);
   VAR_22 |= -VAR_5;
  }
 } else if (VAR_19->scan_begin_src == VAR_16) {

  if (!FUNC_8(VAR_19))
   VAR_22 |= -VAR_5;

 } else {
  VAR_22 |= FUNC_2(&VAR_19->scan_begin_arg, 0);
 }

 if (VAR_22)
  return 3;



 if (VAR_19->convert_src == VAR_16) {
  VAR_23 = VAR_19->convert_arg;
  FUNC_9(&VAR_19->convert_arg, VAR_19->flags);
  if (VAR_23 != VAR_19->convert_arg)
   VAR_22++;
 }

 if (VAR_19->scan_begin_src == VAR_16) {

  VAR_23 = VAR_19->scan_begin_arg;
  FUNC_9(&VAR_19->scan_begin_arg, VAR_19->flags);
  if (!FUNC_8(VAR_19)) {

   FUNC_9(&VAR_19->scan_begin_arg,
        VAR_1);
   FUNC_8(VAR_19);
  }
  if (VAR_23 != VAR_19->scan_begin_arg)
   VAR_22++;
 }

 if (VAR_22)
  return 4;


 if (VAR_19->chanlist && VAR_19->chanlist_len > 0)
  VAR_22 |= FUNC_7(VAR_17, VAR_18, VAR_19);

 if (VAR_22)
  return 5;

 return 0;
}
