
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_cmd {unsigned int chanlist_len; unsigned int convert_arg; unsigned int scan_begin_arg; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct comedi_cmd *VAR_1)
{
 unsigned int VAR_2, VAR_3;
 int VAR_4 = 0;

 VAR_3 = VAR_1->chanlist_len;
 if (VAR_1->chanlist_len == 0)
  VAR_3 = 1;

 VAR_2 = VAR_3 * VAR_1->convert_arg;
 if (VAR_2 < VAR_3 ||
     VAR_2 < VAR_1->convert_arg) {

  VAR_2 = VAR_0;
  VAR_4++;
 }
 if (VAR_1->scan_begin_arg < VAR_2) {
  VAR_1->scan_begin_arg = VAR_2;
  VAR_4++;
 }

 return !VAR_4;
}
