
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct bnx2x*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_1,
    int VAR_2,
    u32 *VAR_3,
    u32 VAR_4)
{
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_1(VAR_1, VAR_0 +
   FUNC_0(VAR_2) +
   sizeof(u32)*VAR_5,
   *(VAR_3 + VAR_5));
}
