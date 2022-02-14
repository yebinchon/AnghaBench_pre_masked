
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ksz_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ksz_hw*,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct ksz_hw *VAR_6, u16 VAR_7, u8 *VAR_8,
 u8 VAR_9, int VAR_10, int VAR_11, int VAR_12, u8 VAR_13)
{
 u32 VAR_14;
 u32 VAR_15;

 VAR_15 = ((u32) VAR_8[2] << 24) |
  ((u32) VAR_8[3] << 16) |
  ((u32) VAR_8[4] << 8) | VAR_8[5];
 VAR_14 = ((u32) VAR_8[0] << 8) | VAR_8[1];
 VAR_14 |= (u32) VAR_9 << VAR_1;

 if (VAR_10)
  VAR_14 |= VAR_2;
 if (VAR_12) {
  VAR_14 |= VAR_3;
  VAR_14 |= (u32) VAR_13 << VAR_0;
 }
 if (VAR_11)
  VAR_14 |= VAR_4;

 FUNC_0(VAR_6, VAR_5, VAR_7, VAR_14, VAR_15);
}
