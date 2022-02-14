
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int asoc_sta_count; } ;
struct adapter {int mlmepriv; TYPE_1__ stapriv; } ;
typedef int sint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;

sint FUNC_1(struct adapter *VAR_4)
{
 if ((FUNC_0(&VAR_4->mlmepriv, VAR_2) == 1) ||
   (FUNC_0(&VAR_4->mlmepriv, VAR_1|VAR_0) == 1)) {
  if (VAR_4->stapriv.asoc_sta_count > 2)
   return 1;
 } else {
  if (FUNC_0(&VAR_4->mlmepriv, VAR_3) == 1)
   return 1;
 }
 return 0;
}
