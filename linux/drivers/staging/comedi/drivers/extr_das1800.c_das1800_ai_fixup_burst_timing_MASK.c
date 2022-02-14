
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int pacer; } ;
struct comedi_cmd {unsigned int convert_arg; int flags; scalar_t__ scan_begin_src; unsigned int chanlist_len; unsigned int scan_begin_arg; } ;



 int VAR_0 ;


 unsigned int FUNC_0 (unsigned int,int) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,unsigned int*,int) ;
 int FUNC_3 (unsigned int*,unsigned int) ;
 int FUNC_4 (unsigned int*,int) ;
 int FUNC_5 (unsigned int*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_2,
      struct comedi_cmd *VAR_3)
{
 unsigned int VAR_4 = VAR_3->convert_arg;
 int VAR_5 = 0;
 VAR_5 |= FUNC_4(&VAR_4, 64000);


 switch (VAR_3->flags & VAR_0) {
 case 129:
 default:
  VAR_4 = FUNC_0(VAR_4, 1000);
  break;
 case 130:
  VAR_4 = VAR_4 / 1000;
  break;
 case 128:
  VAR_4 = FUNC_1(VAR_4, 1000);
  break;
 }
 VAR_5 |= FUNC_3(&VAR_3->convert_arg, VAR_4 * 1000);






 if (VAR_3->scan_begin_src == VAR_1) {
  VAR_4 = VAR_3->convert_arg * VAR_3->chanlist_len;
  VAR_5 |= FUNC_5(&VAR_3->scan_begin_arg, VAR_4);

  VAR_4 = VAR_3->scan_begin_arg;
  FUNC_2(VAR_2->pacer, &VAR_4, VAR_3->flags);
  VAR_5 |= FUNC_3(&VAR_3->scan_begin_arg, VAR_4);
 }

 return VAR_5;
}
