
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {int divsel; int divsel_mask; int divsel_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(u8 VAR_8, unsigned long VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;

 VAR_11 = FUNC_0(FUNC_2(VAR_6,
   FUNC_1(VAR_1), VAR_0), VAR_9);

 VAR_7[VAR_8].divsel = (VAR_11 == 1) ? VAR_3 :
      (VAR_11 == 2) ? VAR_4 :
                 VAR_5;

 VAR_10 = FUNC_3(VAR_2);
 VAR_10 &= ~VAR_7[VAR_8].divsel_mask;
 VAR_10 |= (VAR_7[VAR_8].divsel << VAR_7[VAR_8].divsel_shift);
 FUNC_4(VAR_10, VAR_2);
}
