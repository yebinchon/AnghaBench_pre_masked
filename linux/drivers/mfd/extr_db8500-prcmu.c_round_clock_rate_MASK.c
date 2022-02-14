
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef unsigned long u64 ;
typedef int u32 ;
struct TYPE_2__ {int pllsw; scalar_t__ clk38div; int branch; scalar_t__ offset; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned long,int) ;
 unsigned long FUNC_3 (int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static long FUNC_5(u8 VAR_4, unsigned long VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;
 unsigned long VAR_8;
 long VAR_9;

 VAR_6 = FUNC_4(VAR_3 + VAR_2[VAR_4].offset);
 VAR_8 = FUNC_1((VAR_6 | VAR_2[VAR_4].pllsw),
  VAR_2[VAR_4].branch);
 VAR_7 = FUNC_0(VAR_8, VAR_5);
 if (VAR_6 & VAR_1) {
  if (VAR_2[VAR_4].clk38div) {
   if (VAR_7 > 2)
    VAR_7 = 2;
  } else {
   VAR_7 = 1;
  }
 } else if ((VAR_4 == VAR_0) && (VAR_7 == 3)) {
  u64 VAR_10 = (VAR_8 * 10);

  (void)FUNC_2(VAR_10, 25);
  if (VAR_10 <= VAR_5)
   return (unsigned long)VAR_10;
 }
 VAR_9 = (VAR_8 / FUNC_3(VAR_7, (u32)31));

 return VAR_9;
}
