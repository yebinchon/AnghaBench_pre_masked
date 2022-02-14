
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {int divsel_mask; int divsel; int divsel_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(u8 VAR_3, bool VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_0);
 VAR_5 &= ~VAR_2[VAR_3].divsel_mask;
 VAR_5 |= ((VAR_4 ? VAR_2[VAR_3].divsel : VAR_1) <<
  VAR_2[VAR_3].divsel_shift);
 FUNC_1(VAR_5, VAR_0);
 return 0;
}
