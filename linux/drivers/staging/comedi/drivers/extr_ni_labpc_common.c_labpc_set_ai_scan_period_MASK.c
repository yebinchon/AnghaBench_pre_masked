
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_cmd {scalar_t__ scan_begin_src; scalar_t__ convert_src; unsigned int scan_begin_arg; } ;
typedef enum scan_mode { ____Placeholder_scan_mode } scan_mode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct comedi_cmd *VAR_2,
         enum scan_mode VAR_3, unsigned int VAR_4)
{
 if (VAR_2->scan_begin_src != VAR_1)
  return;

 if (VAR_3 == VAR_0 && VAR_2->convert_src == VAR_1)
  return;

 VAR_2->scan_begin_arg = VAR_4;
}
