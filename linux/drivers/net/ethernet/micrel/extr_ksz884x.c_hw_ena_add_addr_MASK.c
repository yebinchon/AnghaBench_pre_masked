
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ksz_hw {scalar_t__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ksz_hw *VAR_4, int VAR_5, u8 *VAR_6)
{
 int VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 VAR_9 = 0;
 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  VAR_9 <<= 8;
  VAR_9 |= VAR_6[VAR_7];
 }
 VAR_9 |= VAR_0;
 VAR_8 = 0;
 for (VAR_7 = 2; VAR_7 < 6; VAR_7++) {
  VAR_8 <<= 8;
  VAR_8 |= VAR_6[VAR_7];
 }
 VAR_5 *= VAR_1;

 FUNC_0(VAR_8, VAR_4->io + VAR_5 + VAR_3);
 FUNC_0(VAR_9, VAR_4->io + VAR_5 + VAR_2);
}
