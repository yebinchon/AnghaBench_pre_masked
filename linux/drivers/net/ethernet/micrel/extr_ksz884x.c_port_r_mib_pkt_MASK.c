
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ksz_hw {scalar_t__ io; } ;


 int FUNC_0 (struct ksz_hw*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ksz_hw*) ;
 int FUNC_2 (struct ksz_hw*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ksz_hw *VAR_9, int VAR_10, u32 *VAR_11, u64 *VAR_12)
{
 u32 VAR_13;
 u32 VAR_14;
 u16 VAR_15;
 uint VAR_16;
 int VAR_17;

 VAR_17 = VAR_2 + VAR_10;
 do {
  VAR_16 = FUNC_1(VAR_9);

  VAR_15 = (u16) VAR_17;
  VAR_15 |= (((VAR_6 << VAR_8) | VAR_7)
   << 8);
  FUNC_4(VAR_15, VAR_9->io + VAR_1);
  FUNC_0(VAR_9, VAR_1);
  VAR_14 = FUNC_3(VAR_9->io + VAR_0);

  FUNC_2(VAR_9, VAR_16);

  VAR_14 &= VAR_5;
  VAR_13 = *VAR_11;
  if (VAR_14 != VAR_13) {
   *VAR_11 = VAR_14;
   if (VAR_14 < VAR_13)
    VAR_14 += VAR_5 + 1;
   VAR_14 -= VAR_13;
   *VAR_12 += VAR_14;
  }
  ++VAR_11;
  ++VAR_12;
  VAR_17 -= VAR_3 -
   VAR_4 + 1;
 } while (VAR_17 >= VAR_4 + VAR_10);
}
