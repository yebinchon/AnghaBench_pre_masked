
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_public_vf_info {int forced_mac; int mac; scalar_t__ is_trusted_configured; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct qed_hwfn *VAR_0,
           u8 *VAR_1,
           struct qed_public_vf_info *VAR_2)
{
 if (VAR_2->is_trusted_configured) {
  if (FUNC_1(VAR_2->mac) &&
      (!VAR_1 || !FUNC_0(VAR_1, VAR_2->mac)))
   return 1;
 } else {
  if (FUNC_1(VAR_2->forced_mac) &&
      (!VAR_1 || !FUNC_0(VAR_1, VAR_2->forced_mac)))
   return 1;
 }

 return 0;
}
