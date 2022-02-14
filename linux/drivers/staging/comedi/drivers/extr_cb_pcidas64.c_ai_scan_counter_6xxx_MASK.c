
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int scan_begin_src; int scan_begin_arg; int convert_arg; int chanlist_len; } ;


 int VAR_0 ;



__attribute__((used)) static u32 FUNC_0(struct comedi_device *VAR_1,
    struct comedi_cmd *VAR_2)
{
 u32 VAR_3;


 switch (VAR_2->scan_begin_src) {
 case 128:
  VAR_3 = (VAR_2->scan_begin_arg -
    (VAR_2->convert_arg * (VAR_2->chanlist_len - 1))) /
   VAR_0;
  break;
 case 129:
  VAR_3 = VAR_2->convert_arg / VAR_0;
  break;
 default:
  return 0;
 }
 return VAR_3 - 3;
}
