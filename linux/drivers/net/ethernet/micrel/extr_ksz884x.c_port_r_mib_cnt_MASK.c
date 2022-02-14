
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

__attribute__((used)) static void FUNC_5(struct ksz_hw *VAR_9, int VAR_10, u16 VAR_11, u64 *VAR_12)
{
 u32 VAR_13;
 u16 VAR_14;
 uint VAR_15;
 int VAR_16;

 VAR_14 = VAR_11 + VAR_5 * VAR_10;

 VAR_15 = FUNC_1(VAR_9);

 VAR_14 |= (((VAR_6 << VAR_8) | VAR_7) << 8);
 FUNC_4(VAR_14, VAR_9->io + VAR_1);
 FUNC_0(VAR_9, VAR_1);

 for (VAR_16 = 100; VAR_16 > 0; VAR_16--) {
  VAR_13 = FUNC_3(VAR_9->io + VAR_0);

  if (VAR_13 & VAR_3) {
   if (VAR_13 & VAR_2)
    *VAR_12 += VAR_4 + 1;
   *VAR_12 += VAR_13 & VAR_4;
   break;
  }
 }

 FUNC_2(VAR_9, VAR_15);
}
