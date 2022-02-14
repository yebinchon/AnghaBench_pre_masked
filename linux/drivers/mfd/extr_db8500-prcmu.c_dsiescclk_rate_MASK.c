
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {int div_mask; int div_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 unsigned long FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static unsigned long FUNC_3(u8 VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 VAR_4 = ((VAR_4 & VAR_2[VAR_3].div_mask) >> (VAR_2[VAR_3].div_shift));
 return FUNC_0(VAR_0) / FUNC_1((u32)1, VAR_4);
}
