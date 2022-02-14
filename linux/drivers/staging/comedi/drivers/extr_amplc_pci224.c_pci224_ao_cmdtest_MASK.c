
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int pacer; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; unsigned int start_arg; int scan_begin_arg; unsigned int chanlist_len; unsigned int convert_arg; unsigned int scan_end_arg; int stop_arg; scalar_t__ chanlist; int flags; } ;


 void* FUNC_0 (int,int ,int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;




 int VAR_7 ;

 int FUNC_1 (int ,unsigned int*,int ) ;
 int FUNC_2 (unsigned int*,unsigned int) ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;

__attribute__((used)) static int
FUNC_8(struct comedi_device *VAR_8, struct comedi_subdevice *VAR_9,
    struct comedi_cmd *VAR_10)
{
 int VAR_11 = 0;
 unsigned int VAR_12;



 VAR_11 |= FUNC_6(&VAR_10->start_src, 130 | 131);
 VAR_11 |= FUNC_6(&VAR_10->scan_begin_src,
     131 | 128);
 VAR_11 |= FUNC_6(&VAR_10->convert_src, VAR_7);
 VAR_11 |= FUNC_6(&VAR_10->scan_end_src, 132);
 VAR_11 |= FUNC_6(&VAR_10->stop_src,
     132 | 131 | 129);

 if (VAR_11)
  return 1;



 VAR_11 |= FUNC_5(VAR_10->start_src);
 VAR_11 |= FUNC_5(VAR_10->scan_begin_src);
 VAR_11 |= FUNC_5(VAR_10->stop_src);







 VAR_12 = 0;
 if (VAR_10->start_src & 131)
  VAR_12++;
 if (VAR_10->scan_begin_src & 131)
  VAR_12++;
 if (VAR_10->stop_src & 131)
  VAR_12++;
 if (VAR_12 > 1)
  VAR_11 |= -VAR_4;

 if (VAR_11)
  return 2;



 switch (VAR_10->start_src) {
 case 130:
  VAR_11 |= FUNC_2(&VAR_10->start_arg, 0);
  break;
 case 131:

  if (VAR_10->start_arg & ~VAR_2) {
   VAR_10->start_arg =
       FUNC_0(VAR_10->start_arg, 0, ~VAR_2);
   VAR_11 |= -VAR_4;
  }

  if (VAR_10->start_arg & VAR_2 & ~VAR_1) {
   VAR_10->start_arg = FUNC_0(VAR_10->start_arg, 0,
       VAR_2 & ~VAR_1);
   VAR_11 |= -VAR_4;
  }
  break;
 }

 switch (VAR_10->scan_begin_src) {
 case 128:
  VAR_11 |= FUNC_3(&VAR_10->scan_begin_arg,
          VAR_5);

  VAR_12 = VAR_10->chanlist_len * VAR_0;
  if (VAR_12 < VAR_6)
   VAR_12 = VAR_6;
  VAR_11 |= FUNC_4(&VAR_10->scan_begin_arg, VAR_12);
  break;
 case 131:

  if (VAR_10->scan_begin_arg & ~VAR_2) {
   VAR_10->scan_begin_arg =
       FUNC_0(VAR_10->scan_begin_arg, 0, ~VAR_2);
   VAR_11 |= -VAR_4;
  }

  if (VAR_10->scan_begin_arg & VAR_2 &
      ~(VAR_1 | VAR_3)) {
   VAR_10->scan_begin_arg =
       FUNC_0(VAR_10->scan_begin_arg, 0,
        VAR_2 & ~(VAR_1 | VAR_3));
   VAR_11 |= -VAR_4;
  }
  break;
 }

 VAR_11 |= FUNC_2(&VAR_10->convert_arg, 0);
 VAR_11 |= FUNC_2(&VAR_10->scan_end_arg,
        VAR_10->chanlist_len);

 switch (VAR_10->stop_src) {
 case 132:
  VAR_11 |= FUNC_4(&VAR_10->stop_arg, 1);
  break;
 case 131:

  if (VAR_10->stop_arg & ~VAR_2) {
   VAR_10->stop_arg =
       FUNC_0(VAR_10->stop_arg, 0, ~VAR_2);
   VAR_11 |= -VAR_4;
  }

  if (VAR_10->stop_arg & VAR_2 & ~VAR_1) {
   VAR_10->stop_arg =
       FUNC_0(VAR_10->stop_arg, 0, VAR_2 & ~VAR_1);
  }
  break;
 case 129:
  VAR_11 |= FUNC_2(&VAR_10->stop_arg, 0);
  break;
 }

 if (VAR_11)
  return 3;



 if (VAR_10->scan_begin_src == 128) {
  VAR_12 = VAR_10->scan_begin_arg;

  FUNC_1(VAR_8->pacer, &VAR_12, VAR_10->flags);
  VAR_11 |= FUNC_2(&VAR_10->scan_begin_arg, VAR_12);
 }

 if (VAR_11)
  return 4;


 if (VAR_10->chanlist && VAR_10->chanlist_len > 0)
  VAR_11 |= FUNC_7(VAR_8, VAR_9, VAR_10);

 if (VAR_11)
  return 5;

 return 0;
}
