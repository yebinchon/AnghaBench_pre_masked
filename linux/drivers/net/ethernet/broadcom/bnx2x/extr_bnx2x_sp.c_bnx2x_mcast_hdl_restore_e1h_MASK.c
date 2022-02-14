
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x_mcast_ramrod_params {int dummy; } ;
struct bnx2x_mcast_obj {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct bnx2x_mcast_obj*,int) ;

__attribute__((used)) static inline void FUNC_3(struct bnx2x *VAR_1,
 struct bnx2x_mcast_obj *VAR_2, struct bnx2x_mcast_ramrod_params *VAR_3,
 u32 *VAR_4)
{
 int VAR_5;

 for (VAR_5 = FUNC_2(VAR_2, 0);
      VAR_5 >= 0;
      VAR_5 = FUNC_2(VAR_2, VAR_5 + 1)) {
  FUNC_0(VAR_4, VAR_5);
  FUNC_1(VAR_0, "About to set bin %d\n", VAR_5);
 }
}
