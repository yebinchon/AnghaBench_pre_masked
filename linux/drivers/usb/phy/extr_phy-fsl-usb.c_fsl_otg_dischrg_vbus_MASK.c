
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int otgsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 TYPE_1__* VAR_3 ;

void FUNC_2(int VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(&VAR_3->otgsc) & ~VAR_2;

 if (VAR_4)

  VAR_5 = (VAR_5 & ~VAR_0) |
   VAR_1;
 else

  VAR_5 &= ~VAR_1;

 FUNC_1(VAR_5, &VAR_3->otgsc);
}
