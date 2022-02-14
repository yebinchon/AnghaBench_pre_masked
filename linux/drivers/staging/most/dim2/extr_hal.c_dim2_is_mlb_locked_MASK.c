
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* dim2; } ;
struct TYPE_3__ {int MLBC0; int MLBC1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_2__ VAR_5 ;
 int const FUNC_1 (int *) ;
 int FUNC_2 (int const,int *) ;

__attribute__((used)) static bool FUNC_3(void)
{
 u32 const VAR_6 = FUNC_0(VAR_0);
 u32 const VAR_7 = FUNC_0(VAR_1) |
     FUNC_0(VAR_2);
 u32 const VAR_8 = FUNC_1(&VAR_5.dim2->MLBC1);
 u32 const VAR_9 = (u32)VAR_3 << VAR_4;

 FUNC_2(VAR_8 & VAR_9, &VAR_5.dim2->MLBC1);
 return (FUNC_1(&VAR_5.dim2->MLBC1) & VAR_7) == 0 &&
        (FUNC_1(&VAR_5.dim2->MLBC0) & VAR_6) != 0;
}
