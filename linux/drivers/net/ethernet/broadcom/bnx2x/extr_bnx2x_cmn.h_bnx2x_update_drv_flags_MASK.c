
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct bnx2x*,int ) ;
 scalar_t__ FUNC_4 (struct bnx2x*,scalar_t__) ;
 int FUNC_5 (struct bnx2x*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct bnx2x*,int ) ;
 int FUNC_7 (struct bnx2x*,int ) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_8(struct bnx2x *VAR_3, u32 VAR_4, u32 VAR_5)
{
 if (FUNC_3(VAR_3, VAR_2)) {
  u32 VAR_6;
  FUNC_6(VAR_3, VAR_0);
  VAR_6 = FUNC_4(VAR_3, VAR_6);

  if (VAR_5)
   FUNC_2(VAR_6, VAR_4);
  else
   FUNC_1(VAR_6, VAR_4);

  FUNC_5(VAR_3, VAR_6, VAR_6);
  FUNC_0(VAR_1, "drv_flags 0x%08x\n", VAR_6);
  FUNC_7(VAR_3, VAR_0);
 }
}
