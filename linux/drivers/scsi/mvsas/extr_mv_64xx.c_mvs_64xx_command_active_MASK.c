
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvs_info {int dummy; } ;


 int FUNC_0 (struct mvs_info*,int) ;
 int FUNC_1 (struct mvs_info*,int,int) ;

__attribute__((used)) static void FUNC_2(struct mvs_info *VAR_0, u32 VAR_1)
{
 u32 VAR_2;
 FUNC_1(VAR_0, 0x40 + (VAR_1 >> 3), 1 << (VAR_1 % 32));
 FUNC_1(VAR_0, 0x00 + (VAR_1 >> 3), 1 << (VAR_1 % 32));
 do {
  VAR_2 = FUNC_0(VAR_0, 0x00 + (VAR_1 >> 3));
 } while (VAR_2 & 1 << (VAR_1 % 32));
 do {
  VAR_2 = FUNC_0(VAR_0, 0x40 + (VAR_1 >> 3));
 } while (VAR_2 & 1 << (VAR_1 % 32));
}
