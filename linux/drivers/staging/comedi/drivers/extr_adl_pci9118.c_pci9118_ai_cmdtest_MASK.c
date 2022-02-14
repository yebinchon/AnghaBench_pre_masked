
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci9118_private {unsigned int ai_ns_min; scalar_t__ master; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int pacer; struct pci9118_private* private; } ;
struct comedi_cmd {unsigned int start_src; unsigned int scan_begin_src; unsigned int convert_src; unsigned int scan_end_src; unsigned int stop_src; unsigned int start_arg; unsigned int scan_begin_arg; int scan_end_arg; unsigned int convert_arg; unsigned int stop_arg; unsigned int chanlist_len; scalar_t__ chanlist; int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

 unsigned int VAR_2 ;

 unsigned int VAR_3 ;

 unsigned int VAR_4 ;
 int FUNC_0 (int ,unsigned int*,int ) ;
 int FUNC_1 (unsigned int*,unsigned int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (unsigned int*,unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int*,unsigned int) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_5,
         struct comedi_subdevice *VAR_6,
         struct comedi_cmd *VAR_7)
{
 struct pci9118_private *VAR_8 = VAR_5->private;
 int VAR_9 = 0;
 unsigned int VAR_10;
 unsigned int VAR_11;



 VAR_9 |= FUNC_5(&VAR_7->start_src,
     128 | 130 | 129);

 VAR_10 = VAR_2;
 if (VAR_8->master)
  VAR_10 |= VAR_4 | 130;
 VAR_9 |= FUNC_5(&VAR_7->scan_begin_src, VAR_10);

 VAR_10 = VAR_4 | 130;
 if (VAR_8->master)
  VAR_10 |= 128;
 VAR_9 |= FUNC_5(&VAR_7->convert_src, VAR_10);

 VAR_9 |= FUNC_5(&VAR_7->scan_end_src, VAR_1);
 VAR_9 |= FUNC_5(&VAR_7->stop_src,
     VAR_1 | VAR_3 | 130);

 if (VAR_9)
  return 1;



 VAR_9 |= FUNC_4(VAR_7->start_src);
 VAR_9 |= FUNC_4(VAR_7->scan_begin_src);
 VAR_9 |= FUNC_4(VAR_7->convert_src);
 VAR_9 |= FUNC_4(VAR_7->stop_src);



 if (VAR_7->start_src == 130 && VAR_7->scan_begin_src == 130)
  VAR_9 |= -VAR_0;

 if ((VAR_7->scan_begin_src & (VAR_4 | 130)) &&
     (!(VAR_7->convert_src & (VAR_4 | 128))))
  VAR_9 |= -VAR_0;

 if ((VAR_7->scan_begin_src == VAR_2) &&
     (!(VAR_7->convert_src & (VAR_4 | 130))))
  VAR_9 |= -VAR_0;

 if (VAR_7->stop_src == 130 && VAR_7->scan_begin_src == 130)
  VAR_9 |= -VAR_0;

 if (VAR_9)
  return 2;



 switch (VAR_7->start_src) {
 case 128:
 case 130:
  VAR_9 |= FUNC_1(&VAR_7->start_arg, 0);
  break;
 case 129:

  break;
 }

 if (VAR_7->scan_begin_src & (VAR_2 | 130))
  VAR_9 |= FUNC_1(&VAR_7->scan_begin_arg, 0);

 if ((VAR_7->scan_begin_src == VAR_4) &&
     (VAR_7->convert_src == VAR_4) && (VAR_7->scan_end_arg == 1)) {
  VAR_7->scan_begin_src = VAR_2;
  VAR_7->convert_arg = VAR_7->scan_begin_arg;
  VAR_7->scan_begin_arg = 0;
 }

 if (VAR_7->scan_begin_src == VAR_4) {
  VAR_9 |= FUNC_3(&VAR_7->scan_begin_arg,
          VAR_8->ai_ns_min);
 }

 if (VAR_7->scan_begin_src == 130) {
  if (VAR_7->scan_begin_arg) {
   VAR_7->scan_begin_arg = 0;
   VAR_9 |= -VAR_0;
   VAR_9 |= FUNC_2(&VAR_7->scan_end_arg,
           65535);
  }
 }

 if (VAR_7->convert_src & (VAR_4 | 128)) {
  VAR_9 |= FUNC_3(&VAR_7->convert_arg,
          VAR_8->ai_ns_min);
 }

 if (VAR_7->convert_src == 130)
  VAR_9 |= FUNC_1(&VAR_7->convert_arg, 0);

 if (VAR_7->stop_src == VAR_1)
  VAR_9 |= FUNC_3(&VAR_7->stop_arg, 1);
 else
  VAR_9 |= FUNC_1(&VAR_7->stop_arg, 0);

 VAR_9 |= FUNC_3(&VAR_7->chanlist_len, 1);

 VAR_9 |= FUNC_3(&VAR_7->scan_end_arg,
         VAR_7->chanlist_len);

 if ((VAR_7->scan_end_arg % VAR_7->chanlist_len)) {
  VAR_7->scan_end_arg =
      VAR_7->chanlist_len * (VAR_7->scan_end_arg / VAR_7->chanlist_len);
  VAR_9 |= -VAR_0;
 }

 if (VAR_9)
  return 3;



 if (VAR_7->scan_begin_src == VAR_4) {
  VAR_11 = VAR_7->scan_begin_arg;
  FUNC_0(VAR_5->pacer, &VAR_11, VAR_7->flags);
  VAR_9 |= FUNC_1(&VAR_7->scan_begin_arg, VAR_11);
 }

 if (VAR_7->convert_src & (VAR_4 | 128)) {
  VAR_11 = VAR_7->convert_arg;
  FUNC_0(VAR_5->pacer, &VAR_11, VAR_7->flags);
  VAR_9 |= FUNC_1(&VAR_7->convert_arg, VAR_11);

  if (VAR_7->scan_begin_src == VAR_4 &&
      VAR_7->convert_src == 128) {
   if (VAR_7->convert_arg == 0) {
    VAR_11 = VAR_8->ai_ns_min *
          (VAR_7->scan_end_arg + 2);
   } else {
    VAR_11 = VAR_7->convert_arg * VAR_7->chanlist_len;
   }
   VAR_9 |= FUNC_3(
    &VAR_7->scan_begin_arg, VAR_11);
  }
 }

 if (VAR_9)
  return 4;



 if (VAR_7->chanlist)
  VAR_9 |= FUNC_6(VAR_5, VAR_6, VAR_7);

 if (VAR_9)
  return 5;

 return 0;
}
