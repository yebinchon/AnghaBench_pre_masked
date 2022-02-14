
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_ptt {int dummy; } ;
struct qed_hwfn {TYPE_1__* p_ptt_pool; } ;
typedef enum reserved_ptts { ____Placeholder_reserved_ptts } reserved_ptts ;
struct TYPE_2__ {struct qed_ptt* ptts; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int VAR_0 ;

struct qed_ptt *FUNC_1(struct qed_hwfn *VAR_1,
         enum reserved_ptts VAR_2)
{
 if (VAR_2 >= VAR_0) {
  FUNC_0(VAR_1,
     "Requested PTT %d is out of range\n", VAR_2);
  return ((void*)0);
 }

 return &VAR_1->p_ptt_pool->ptts[VAR_2];
}
