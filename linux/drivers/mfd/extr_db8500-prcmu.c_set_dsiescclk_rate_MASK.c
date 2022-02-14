
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
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(u8 VAR_3, unsigned long VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;

 VAR_6 = FUNC_0(FUNC_1(VAR_0), VAR_4);
 VAR_5 = FUNC_3(VAR_1);
 VAR_5 &= ~VAR_2[VAR_3].div_mask;
 VAR_5 |= (FUNC_2(VAR_6, (u32)255) << VAR_2[VAR_3].div_shift);
 FUNC_4(VAR_5, VAR_1);
}
