
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bnx2x*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct bnx2x*,scalar_t__,scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct bnx2x *VAR_4, u32 VAR_5, u32 *VAR_6)
{
 if (VAR_5 == VAR_3)
  return -VAR_0;
 if (VAR_5 >= VAR_1) {
  FUNC_0(VAR_4, VAR_5 - VAR_1, VAR_6);
 } else {
  u8 VAR_7 = (VAR_5 - VAR_2) & 0x3;
  u8 VAR_8 = (VAR_5 - VAR_2) >> 2;
  *VAR_6 = FUNC_1(VAR_4, VAR_7, VAR_8);
 }
 return 0;

}
