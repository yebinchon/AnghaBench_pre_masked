
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {int pllsw; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(u8 VAR_7, bool VAR_8)
{
 u32 VAR_9;
 unsigned long VAR_10;

 FUNC_2(&VAR_5, VAR_10);


 while ((FUNC_1(VAR_2) & VAR_3) != 0)
  FUNC_0();

 VAR_9 = FUNC_1(VAR_6 + VAR_4[VAR_7].offset);
 if (VAR_8) {
  VAR_9 |= (VAR_0 | VAR_4[VAR_7].pllsw);
 } else {
  VAR_4[VAR_7].pllsw = (VAR_9 & VAR_1);
  VAR_9 &= ~(VAR_0 | VAR_1);
 }
 FUNC_4(VAR_9, VAR_6 + VAR_4[VAR_7].offset);


 FUNC_4(0, VAR_2);

 FUNC_3(&VAR_5, VAR_10);

 return 0;
}
