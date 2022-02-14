
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef unsigned long u64 ;
typedef int u32 ;
struct TYPE_2__ {int pllsw; int branch; scalar_t__ clk38div; scalar_t__ offset; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_0 (unsigned long,int) ;
 unsigned long FUNC_1 (int ,unsigned long,int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_3(u8 VAR_15)
{
 u32 VAR_16;
 u32 VAR_17;
 unsigned long VAR_18 = VAR_12;

 VAR_16 = FUNC_2(VAR_14 + VAR_13[VAR_15].offset);

 if (VAR_16 & VAR_1) {
  if (VAR_13[VAR_15].clk38div && (VAR_16 & VAR_2))
   VAR_18 /= 2;
  return VAR_18;
 }

 VAR_16 |= VAR_13[VAR_15].pllsw;
 VAR_17 = (VAR_16 & VAR_5);

 if (VAR_17 == VAR_6)
  VAR_18 = FUNC_1(VAR_9, VAR_18, VAR_13[VAR_15].branch);
 else if (VAR_17 == VAR_7)
  VAR_18 = FUNC_1(VAR_10, VAR_18, VAR_13[VAR_15].branch);
 else if (VAR_17 == VAR_4)
  VAR_18 = FUNC_1(VAR_8, VAR_18, VAR_13[VAR_15].branch);
 else
  return 0;

 if ((VAR_15 == VAR_0) &&
  (VAR_16 & VAR_11)) {
  u64 VAR_19 = (VAR_18 * 10);

  (void)FUNC_0(VAR_19, 25);
  return (unsigned long)VAR_19;
 }
 VAR_16 &= VAR_3;
 if (VAR_16)
  return VAR_18 / VAR_16;
 else
  return 0;
}
