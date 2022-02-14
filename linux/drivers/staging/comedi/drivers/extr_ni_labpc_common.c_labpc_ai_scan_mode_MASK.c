
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_cmd {int chanlist_len; int * chanlist; } ;
typedef enum scan_mode { ____Placeholder_scan_mode } scan_mode ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum scan_mode FUNC_1(const struct comedi_cmd *VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;

 if (VAR_4->chanlist_len == 1)
  return VAR_2;


 if (!VAR_4->chanlist)
  return VAR_1;

 VAR_5 = FUNC_0(VAR_4->chanlist[0]);
 VAR_6 = FUNC_0(VAR_4->chanlist[1]);

 if (VAR_5 < VAR_6)
  return VAR_1;

 if (VAR_5 > VAR_6)
  return VAR_0;

 return VAR_3;
}
