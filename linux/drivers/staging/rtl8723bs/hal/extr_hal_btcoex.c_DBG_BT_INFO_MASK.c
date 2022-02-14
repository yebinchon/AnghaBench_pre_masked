
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ len; scalar_t__ size; int * info; } ;
typedef TYPE_1__* PBTCDBGINFO ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(u8 *VAR_1)
{
 PBTCDBGINFO VAR_2;
 u32 VAR_3;
 u8 *VAR_4;


 VAR_2 = &VAR_0;

 if (!VAR_2->info)
  return;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_2->len + VAR_3 > VAR_2->size)
  return;

 VAR_4 = VAR_2->info + VAR_2->len;
 FUNC_0(VAR_4, VAR_1, VAR_3);
 VAR_2->len += VAR_3;
}
