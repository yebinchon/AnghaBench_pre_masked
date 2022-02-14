
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct ice_xlt2 {size_t count; void* t; TYPE_2__* vsig_tbl; void* vsis; void* sid; } ;
struct ice_xlt1 {size_t count; void* t; void* ptg_tbl; void* ptypes; void* sid; } ;
struct ice_prof_tcam {size_t count; void* t; int cdid_bits; int max_prof_id; void* sid; } ;
struct ice_prof_redir {size_t count; void* t; void* sid; } ;
struct ice_hw {TYPE_1__* blk; } ;
struct ice_es {int count; int fvw; void* ref_count; void* written; void* t; void* sid; int reverse; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_6__ {size_t xlt1; size_t xlt2; size_t prof_tcam; size_t prof_redir; int es; int fvw; int prof_cdid_bits; int prof_id; int reverse; int overwrite; } ;
struct TYPE_5__ {int prop_lst; } ;
struct TYPE_4__ {int is_list_init; int overwrite; struct ice_es es; struct ice_xlt2 xlt2; struct ice_xlt1 xlt1; struct ice_prof_tcam prof; struct ice_prof_redir prof_redir; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int *) ;
 TYPE_3__* VAR_9 ;
 void* FUNC_1 (int ,size_t,int,int ) ;
 void*** VAR_10 ;
 int FUNC_2 (struct ice_hw*) ;
 int FUNC_3 (struct ice_hw*) ;

enum ice_status FUNC_4(struct ice_hw *VAR_11)
{
 u8 VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  struct ice_prof_redir *VAR_13 = &VAR_11->blk[VAR_12].prof_redir;
  struct ice_prof_tcam *VAR_14 = &VAR_11->blk[VAR_12].prof;
  struct ice_xlt1 *VAR_15 = &VAR_11->blk[VAR_12].xlt1;
  struct ice_xlt2 *VAR_16 = &VAR_11->blk[VAR_12].xlt2;
  struct ice_es *VAR_17 = &VAR_11->blk[VAR_12].es;
  u16 VAR_18;

  if (VAR_11->blk[VAR_12].is_list_init)
   continue;

  VAR_11->blk[VAR_12].is_list_init = 1;

  VAR_11->blk[VAR_12].overwrite = VAR_9[VAR_12].overwrite;
  VAR_17->reverse = VAR_9[VAR_12].reverse;

  VAR_15->sid = VAR_10[VAR_12][VAR_7];
  VAR_15->count = VAR_9[VAR_12].xlt1;

  VAR_15->ptypes = FUNC_1(FUNC_3(VAR_11), VAR_15->count,
         sizeof(*VAR_15->ptypes), VAR_0);

  if (!VAR_15->ptypes)
   goto err;

  VAR_15->ptg_tbl = FUNC_1(FUNC_3(VAR_11), VAR_3,
          sizeof(*VAR_15->ptg_tbl),
          VAR_0);

  if (!VAR_15->ptg_tbl)
   goto err;

  VAR_15->t = FUNC_1(FUNC_3(VAR_11), VAR_15->count,
           sizeof(*VAR_15->t), VAR_0);
  if (!VAR_15->t)
   goto err;

  VAR_16->sid = VAR_10[VAR_12][VAR_8];
  VAR_16->count = VAR_9[VAR_12].xlt2;

  VAR_16->vsis = FUNC_1(FUNC_3(VAR_11), VAR_16->count,
       sizeof(*VAR_16->vsis), VAR_0);

  if (!VAR_16->vsis)
   goto err;

  VAR_16->vsig_tbl = FUNC_1(FUNC_3(VAR_11), VAR_16->count,
           sizeof(*VAR_16->vsig_tbl),
           VAR_0);
  if (!VAR_16->vsig_tbl)
   goto err;

  for (VAR_18 = 0; VAR_18 < VAR_16->count; VAR_18++)
   FUNC_0(&VAR_16->vsig_tbl[VAR_18].prop_lst);

  VAR_16->t = FUNC_1(FUNC_3(VAR_11), VAR_16->count,
           sizeof(*VAR_16->t), VAR_0);
  if (!VAR_16->t)
   goto err;

  VAR_14->sid = VAR_10[VAR_12][VAR_5];
  VAR_14->count = VAR_9[VAR_12].prof_tcam;
  VAR_14->max_prof_id = VAR_9[VAR_12].prof_id;
  VAR_14->cdid_bits = VAR_9[VAR_12].prof_cdid_bits;
  VAR_14->t = FUNC_1(FUNC_3(VAR_11), VAR_14->count,
           sizeof(*VAR_14->t), VAR_0);

  if (!VAR_14->t)
   goto err;

  VAR_13->sid = VAR_10[VAR_12][VAR_6];
  VAR_13->count = VAR_9[VAR_12].prof_redir;
  VAR_13->t = FUNC_1(FUNC_3(VAR_11),
          VAR_13->count,
          sizeof(*VAR_13->t),
          VAR_0);

  if (!VAR_13->t)
   goto err;

  VAR_17->sid = VAR_10[VAR_12][VAR_4];
  VAR_17->count = VAR_9[VAR_12].es;
  VAR_17->fvw = VAR_9[VAR_12].fvw;
  VAR_17->t = FUNC_1(FUNC_3(VAR_11),
         (u32)(VAR_17->count * VAR_17->fvw),
         sizeof(*VAR_17->t), VAR_0);
  if (!VAR_17->t)
   goto err;

  VAR_17->ref_count = FUNC_1(FUNC_3(VAR_11), VAR_17->count,
          sizeof(*VAR_17->ref_count),
          VAR_0);

  VAR_17->written = FUNC_1(FUNC_3(VAR_11), VAR_17->count,
        sizeof(*VAR_17->written), VAR_0);
  if (!VAR_17->ref_count)
   goto err;
 }
 return 0;

err:
 FUNC_2(VAR_11);
 return VAR_2;
}
