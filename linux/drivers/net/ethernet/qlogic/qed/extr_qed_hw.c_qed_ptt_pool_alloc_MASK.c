
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qed_ptt_pool {int lock; int free_list; TYPE_3__* ptts; } ;
struct qed_hwfn {struct qed_ptt_pool* p_ptt_pool; int my_id; } ;
struct TYPE_4__ {scalar_t__ control; } ;
struct TYPE_5__ {TYPE_1__ pretend; int offset; } ;
struct TYPE_6__ {int idx; int list_entry; int hwfn_id; TYPE_2__ pxp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct qed_ptt_pool* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct qed_hwfn *VAR_5)
{
 struct qed_ptt_pool *VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 int VAR_7;

 if (!VAR_6)
  return -VAR_0;

 FUNC_0(&VAR_6->free_list);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6->ptts[VAR_7].idx = VAR_7;
  VAR_6->ptts[VAR_7].pxp.offset = VAR_3;
  VAR_6->ptts[VAR_7].pxp.pretend.control = 0;
  VAR_6->ptts[VAR_7].hwfn_id = VAR_5->my_id;
  if (VAR_7 >= VAR_4)
   FUNC_2(&VAR_6->ptts[VAR_7].list_entry,
     &VAR_6->free_list);
 }

 VAR_5->p_ptt_pool = VAR_6;
 FUNC_3(&VAR_6->lock);

 return 0;
}
