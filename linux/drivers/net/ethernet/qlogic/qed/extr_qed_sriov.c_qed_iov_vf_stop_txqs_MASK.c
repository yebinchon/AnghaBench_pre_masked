
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct qed_vf_queue {TYPE_1__* cids; } ;
struct qed_vf_info {struct qed_vf_queue* vf_queues; } ;
struct qed_hwfn {int dummy; } ;
struct TYPE_2__ {int * p_cid; int b_is_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_hwfn*,int *) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_vf_info*,size_t,int ) ;

__attribute__((used)) static int FUNC_2(struct qed_hwfn *VAR_2,
    struct qed_vf_info *VAR_3,
    u16 VAR_4, u8 VAR_5)
{
 struct qed_vf_queue *VAR_6;
 int VAR_7 = 0;

 if (!FUNC_1(VAR_2, VAR_3, VAR_4, VAR_1))
  return -VAR_0;

 VAR_6 = &VAR_3->vf_queues[VAR_4];
 if (!VAR_6->cids[VAR_5].p_cid ||
     !VAR_6->cids[VAR_5].b_is_tx)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_2, VAR_6->cids[VAR_5].p_cid);
 if (VAR_7)
  return VAR_7;

 VAR_6->cids[VAR_5].p_cid = ((void*)0);
 return 0;
}
