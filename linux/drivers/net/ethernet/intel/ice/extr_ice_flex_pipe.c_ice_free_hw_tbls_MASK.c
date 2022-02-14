
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8 ;
struct ice_hw {TYPE_6__* blk; } ;
struct TYPE_11__ {int written; int ref_count; int t; } ;
struct TYPE_10__ {int t; } ;
struct TYPE_9__ {int t; } ;
struct TYPE_8__ {int vsis; int vsig_tbl; int t; } ;
struct TYPE_7__ {int t; int ptg_tbl; int ptypes; } ;
struct TYPE_12__ {int is_list_init; TYPE_5__ es; TYPE_4__ prof_redir; TYPE_3__ prof; TYPE_2__ xlt2; TYPE_1__ xlt1; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ice_hw*) ;
 int FUNC_2 (TYPE_6__*,int ,int) ;

void FUNC_3(struct ice_hw *VAR_1)
{
 u8 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1->blk[VAR_2].is_list_init = 0;

  FUNC_0(FUNC_1(VAR_1), VAR_1->blk[VAR_2].xlt1.ptypes);
  FUNC_0(FUNC_1(VAR_1), VAR_1->blk[VAR_2].xlt1.ptg_tbl);
  FUNC_0(FUNC_1(VAR_1), VAR_1->blk[VAR_2].xlt1.t);
  FUNC_0(FUNC_1(VAR_1), VAR_1->blk[VAR_2].xlt2.t);
  FUNC_0(FUNC_1(VAR_1), VAR_1->blk[VAR_2].xlt2.vsig_tbl);
  FUNC_0(FUNC_1(VAR_1), VAR_1->blk[VAR_2].xlt2.vsis);
  FUNC_0(FUNC_1(VAR_1), VAR_1->blk[VAR_2].prof.t);
  FUNC_0(FUNC_1(VAR_1), VAR_1->blk[VAR_2].prof_redir.t);
  FUNC_0(FUNC_1(VAR_1), VAR_1->blk[VAR_2].es.t);
  FUNC_0(FUNC_1(VAR_1), VAR_1->blk[VAR_2].es.ref_count);
  FUNC_0(FUNC_1(VAR_1), VAR_1->blk[VAR_2].es.written);
 }

 FUNC_2(VAR_1->blk, 0, sizeof(VAR_1->blk));
}
