
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {TYPE_1__* dim2; } ;
struct TYPE_3__ {int MDWE3; int MDWE2; int MDWE1; int MDWE0; int MDAT3; int MDAT2; int MDAT1; int MDAT0; int MCTL; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (scalar_t__ const,int *) ;

__attribute__((used)) static void FUNC_3(u32 VAR_1, const u32 *VAR_2, const u32 *VAR_3)
{
 enum { MADR_WNR_BIT = 31 };

 FUNC_2(0, &VAR_0.dim2->MCTL);

 if (VAR_2[0] != 0)
  FUNC_2(VAR_3[0], &VAR_0.dim2->MDAT0);
 if (VAR_2[1] != 0)
  FUNC_2(VAR_3[1], &VAR_0.dim2->MDAT1);
 if (VAR_2[2] != 0)
  FUNC_2(VAR_3[2], &VAR_0.dim2->MDAT2);
 if (VAR_2[3] != 0)
  FUNC_2(VAR_3[3], &VAR_0.dim2->MDAT3);

 FUNC_2(VAR_2[0], &VAR_0.dim2->MDWE0);
 FUNC_2(VAR_2[1], &VAR_0.dim2->MDWE1);
 FUNC_2(VAR_2[2], &VAR_0.dim2->MDWE2);
 FUNC_2(VAR_2[3], &VAR_0.dim2->MDWE3);

 FUNC_1(FUNC_0(MADR_WNR_BIT) | VAR_1);
}
