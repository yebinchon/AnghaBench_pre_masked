
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct qed_hwfn {struct qed_cxt_mngr* p_cxt_mngr; } ;
struct qed_cxt_mngr {TYPE_2__** acquired_vf; TYPE_1__* acquired; } ;
struct TYPE_4__ {scalar_t__ start_cid; scalar_t__ max_count; int cid_map; } ;
struct TYPE_3__ {scalar_t__ start_cid; scalar_t__ max_count; int cid_map; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct qed_hwfn *VAR_2)
{
 struct qed_cxt_mngr *VAR_3 = VAR_2->p_cxt_mngr;
 u32 VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_0(VAR_3->acquired[VAR_4].cid_map);
  VAR_3->acquired[VAR_4].max_count = 0;
  VAR_3->acquired[VAR_4].start_cid = 0;

  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   FUNC_0(VAR_3->acquired_vf[VAR_4][VAR_5].cid_map);
   VAR_3->acquired_vf[VAR_4][VAR_5].max_count = 0;
   VAR_3->acquired_vf[VAR_4][VAR_5].start_cid = 0;
  }
 }
}
