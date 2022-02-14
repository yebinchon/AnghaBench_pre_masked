
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef unsigned long u64 ;
typedef int u32 ;
struct TYPE_2__ {int pllsw; scalar_t__ offset; scalar_t__ clk38div; int branch; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long,int) ;
 int FUNC_4 (int,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(u8 VAR_10, unsigned long VAR_11)
{
 u32 VAR_12;
 u32 VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15;

 FUNC_6(&VAR_8, VAR_15);


 while ((FUNC_5(VAR_4) & VAR_5) != 0)
  FUNC_2();

 VAR_12 = FUNC_5(VAR_9 + VAR_7[VAR_10].offset);
 VAR_14 = FUNC_1((VAR_12 | VAR_7[VAR_10].pllsw),
  VAR_7[VAR_10].branch);
 VAR_13 = FUNC_0(VAR_14, VAR_11);
 if (VAR_12 & VAR_1) {
  if (VAR_7[VAR_10].clk38div) {
   if (VAR_13 > 1)
    VAR_12 |= VAR_2;
   else
    VAR_12 &= ~VAR_2;
  }
 } else if (VAR_10 == VAR_0) {
  VAR_12 &= ~(VAR_3 |
   VAR_6);
  if (VAR_13 == 3) {
   u64 VAR_16 = (VAR_14 * 10);

   (void)FUNC_3(VAR_16, 25);
   if (VAR_16 <= VAR_11) {
    VAR_12 |= VAR_6;
    VAR_13 = 0;
   }
  }
  VAR_12 |= FUNC_4(VAR_13, (u32)31);
 } else {
  VAR_12 &= ~VAR_3;
  VAR_12 |= FUNC_4(VAR_13, (u32)31);
 }
 FUNC_8(VAR_12, VAR_9 + VAR_7[VAR_10].offset);


 FUNC_8(0, VAR_4);

 FUNC_7(&VAR_8, VAR_15);
}
