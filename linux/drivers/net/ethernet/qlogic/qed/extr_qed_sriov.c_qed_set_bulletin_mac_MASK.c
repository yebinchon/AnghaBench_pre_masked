
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_public_vf_info {int forced_mac; int mac; scalar_t__ is_trusted_configured; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct qed_hwfn *VAR_0,
     struct qed_public_vf_info *VAR_1,
     int VAR_2)
{
 if (VAR_1->is_trusted_configured)
  FUNC_1(VAR_0, VAR_1->mac, VAR_2);
 else
  FUNC_0(VAR_0, VAR_1->forced_mac, VAR_2);
}
