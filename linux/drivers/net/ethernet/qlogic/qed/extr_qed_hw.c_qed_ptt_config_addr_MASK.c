
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qed_ptt {int idx; } ;
struct pxp_ptt_entry {int dummy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct qed_ptt *VAR_1)
{
 return VAR_0 +
        VAR_1->idx * sizeof(struct pxp_ptt_entry);
}
