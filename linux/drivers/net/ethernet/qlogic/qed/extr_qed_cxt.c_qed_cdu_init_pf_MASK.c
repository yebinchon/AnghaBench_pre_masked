
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct qed_tid_seg {int type; } ;
struct TYPE_8__ {int val; } ;
struct TYPE_6__ {int val; } ;
struct qed_ilt_client_cfg {TYPE_4__ first; TYPE_3__* pf_blks; TYPE_2__ p_size; } ;
struct qed_hwfn {TYPE_1__* p_cxt_mngr; } ;
struct TYPE_7__ {int start_line; } ;
struct TYPE_5__ {struct qed_ilt_client_cfg* clients; } ;


 size_t FUNC_0 (int,int ) ;
 int VAR_0 ;
 size_t FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct qed_hwfn*,int const,int) ;
 struct qed_tid_seg* FUNC_5 (struct qed_hwfn*,int) ;

__attribute__((used)) static void FUNC_6(struct qed_hwfn *VAR_6)
{
 struct qed_ilt_client_cfg *VAR_7;
 struct qed_tid_seg *VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11;

 static const u32 VAR_12[] = {
  131,
  130,
  129,
  128
 };

 static const u32 VAR_13[] = {
  135,
  134,
  133,
  132
 };

 VAR_7 = &VAR_6->p_cxt_mngr->clients[VAR_3];


 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {

  VAR_8 = FUNC_5(VAR_6, VAR_11);
  if (!VAR_8)
   continue;






  VAR_10 = (FUNC_2(VAR_7->p_size.val) *
     (VAR_7->pf_blks[FUNC_1(VAR_11)].start_line -
      VAR_7->first.val)) / VAR_0;

  VAR_9 = 0;
  FUNC_3(VAR_9, VAR_2, VAR_8->type);
  FUNC_3(VAR_9, VAR_1, VAR_10);
  FUNC_4(VAR_6, VAR_12[VAR_11], VAR_9);

  VAR_10 = (FUNC_2(VAR_7->p_size.val) *
     (VAR_7->pf_blks[FUNC_0(VAR_11, VAR_5)].start_line -
      VAR_7->first.val)) / VAR_0;

  VAR_9 = 0;
  FUNC_3(VAR_9, VAR_2, VAR_8->type);
  FUNC_3(VAR_9, VAR_1, VAR_10);
  FUNC_4(VAR_6, VAR_13[VAR_11], VAR_9);
 }
}
