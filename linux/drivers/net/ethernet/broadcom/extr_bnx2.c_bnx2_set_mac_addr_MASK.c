
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2 {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bnx2*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(struct bnx2 *VAR_2, u8 *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 VAR_5 = (VAR_3[0] << 8) | VAR_3[1];

 FUNC_0(VAR_2, VAR_0 + (VAR_4 * 8), VAR_5);

 VAR_5 = (VAR_3[2] << 24) | (VAR_3[3] << 16) |
  (VAR_3[4] << 8) | VAR_3[5];

 FUNC_0(VAR_2, VAR_1 + (VAR_4 * 8), VAR_5);
}
