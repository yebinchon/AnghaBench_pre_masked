
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct qed_hwfn {struct qed_cxt_mngr* p_cxt_mngr; } ;
struct qed_cxt_mngr {TYPE_3__* ilt_shadow; TYPE_2__* clients; } ;
struct qed_cxt_info {size_t iid; int type; scalar_t__ p_cxt; } ;
struct qed_cid_acquired_map {int dummy; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;
struct TYPE_6__ {scalar_t__ p_virt; } ;
struct TYPE_4__ {size_t val; } ;
struct TYPE_5__ {TYPE_1__ p_size; } ;


 size_t FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (struct qed_hwfn*,int,char*,size_t,scalar_t__,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_2 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct qed_hwfn*,size_t,int ,int*,struct qed_cid_acquired_map**) ;

int FUNC_4(struct qed_hwfn *VAR_5, struct qed_cxt_info *VAR_6)
{
 struct qed_cxt_mngr *VAR_7 = VAR_5->p_cxt_mngr;
 struct qed_cid_acquired_map *VAR_8 = ((void*)0);
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 enum protocol_type VAR_13;
 bool VAR_14;


 VAR_14 = FUNC_3(VAR_5, VAR_6->iid,
            VAR_2, &VAR_13, &VAR_8);

 if (!VAR_14)
  return -VAR_0;


 VAR_6->type = VAR_13;


 VAR_10 = VAR_5->p_cxt_mngr->clients[VAR_1].p_size.val;

 VAR_9 = FUNC_0(VAR_5);
 VAR_11 = FUNC_2(VAR_10) / VAR_9;
 VAR_12 = VAR_6->iid / VAR_11;


 if (!VAR_7->ilt_shadow[VAR_12].p_virt)
  return -VAR_0;

 VAR_6->p_cxt = VAR_7->ilt_shadow[VAR_12].p_virt +
   VAR_6->iid % VAR_11 * VAR_9;

 FUNC_1(VAR_5, (VAR_4 | VAR_3),
     "Accessing ILT shadow[%d]: CXT pointer is at %p (for iid %d)\n",
     VAR_6->iid / VAR_11, VAR_6->p_cxt, VAR_6->iid);

 return 0;
}
