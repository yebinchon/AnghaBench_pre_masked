
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rsc_drv {scalar_t__ tcs_base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct rsc_drv *VAR_1, int VAR_2, int VAR_3,
          u32 VAR_4)
{
 FUNC_2(VAR_4, VAR_1->tcs_base + VAR_2 + VAR_0 * VAR_3);
 for (;;) {
  if (VAR_4 == FUNC_0(VAR_1->tcs_base + VAR_2 +
      VAR_0 * VAR_3))
   break;
  FUNC_1(1);
 }
}
