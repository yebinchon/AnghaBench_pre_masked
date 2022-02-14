
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct rvu {TYPE_1__* hw; } ;
struct npc_mcam_shift_entry_rsp {size_t failed_entry_idx; } ;
struct TYPE_4__ {size_t pcifunc; } ;
struct npc_mcam_shift_entry_req {size_t shift_count; size_t* curr_entry; size_t* new_entry; TYPE_2__ hdr; } ;
struct npc_mcam {scalar_t__* entry2cntr_map; int lock; } ;
struct TYPE_3__ {struct npc_mcam mcam; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rvu*,struct npc_mcam*,int,size_t,size_t) ;
 int FUNC_3 (struct rvu*,struct npc_mcam*,int,size_t,int) ;
 int FUNC_4 (struct rvu*,struct npc_mcam*,int,size_t,size_t) ;
 int FUNC_5 (struct npc_mcam*,size_t,size_t) ;
 int FUNC_6 (struct rvu*,struct npc_mcam*,int,size_t,size_t) ;
 int FUNC_7 (struct rvu*,int ,int ) ;

int FUNC_8(struct rvu *VAR_5,
       struct npc_mcam_shift_entry_req *VAR_6,
       struct npc_mcam_shift_entry_rsp *VAR_7)
{
 struct npc_mcam *VAR_8 = &VAR_5->hw->mcam;
 u16 VAR_9 = VAR_6->hdr.pcifunc;
 u16 VAR_10, VAR_11;
 u16 VAR_12, VAR_13;
 int VAR_14, VAR_15;

 VAR_14 = FUNC_7(VAR_5, VAR_0, 0);
 if (VAR_14 < 0)
  return VAR_2;

 if (VAR_6->shift_count > VAR_3)
  return VAR_2;

 FUNC_0(&VAR_8->lock);
 for (VAR_12 = 0; VAR_12 < VAR_6->shift_count; VAR_12++) {
  VAR_10 = VAR_6->curr_entry[VAR_12];
  VAR_11 = VAR_6->new_entry[VAR_12];




  VAR_15 = FUNC_5(VAR_8, VAR_9, VAR_10);
  if (VAR_15)
   break;

  VAR_15 = FUNC_5(VAR_8, VAR_9, VAR_11);
  if (VAR_15)
   break;


  if (VAR_8->entry2cntr_map[VAR_11] != VAR_1) {
   VAR_15 = VAR_4;
   break;
  }


  FUNC_3(VAR_5, VAR_8, VAR_14, VAR_11, 0);


  FUNC_2(VAR_5, VAR_8, VAR_14, VAR_10, VAR_11);


  VAR_13 = VAR_8->entry2cntr_map[VAR_10];
  if (VAR_13 != VAR_1) {
   FUNC_6(VAR_5, VAR_8, VAR_14,
            VAR_10, VAR_13);
   FUNC_4(VAR_5, VAR_8, VAR_14,
          VAR_11, VAR_13);
  }


  FUNC_3(VAR_5, VAR_8, VAR_14, VAR_11, 1);
  FUNC_3(VAR_5, VAR_8, VAR_14, VAR_10, 0);
 }


 if (VAR_12 != VAR_6->shift_count) {
  VAR_15 = VAR_4;
  VAR_7->failed_entry_idx = VAR_12;
 }

 FUNC_1(&VAR_8->lock);
 return VAR_15;
}
