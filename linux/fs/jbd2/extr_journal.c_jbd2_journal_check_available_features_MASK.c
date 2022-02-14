
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int j_format_version; } ;
typedef TYPE_1__ journal_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;

int FUNC_0 (journal_t *VAR_3, unsigned long VAR_4,
          unsigned long VAR_5, unsigned long VAR_6)
{
 if (!VAR_4 && !VAR_5 && !VAR_6)
  return 1;





 if (VAR_3->j_format_version != 2)
  return 0;

 if ((VAR_4 & VAR_0) == VAR_4 &&
     (VAR_5 & VAR_2) == VAR_5 &&
     (VAR_6 & VAR_1) == VAR_6)
  return 1;

 return 0;
}
