
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ iw_mode; int mib_sem; scalar_t__* mib; } ;
typedef TYPE_1__ islpci_private ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

int
FUNC_3(islpci_private *VAR_3)
{
 u32 VAR_4;




 FUNC_0(&VAR_3->mib_sem);
 VAR_4 =
     FUNC_1(*(u32 *) VAR_3->mib[VAR_1]);
 FUNC_2(&VAR_3->mib_sem);

 return ((VAR_3->iw_mode == VAR_2) &&
  (VAR_4 >= VAR_0));
}
