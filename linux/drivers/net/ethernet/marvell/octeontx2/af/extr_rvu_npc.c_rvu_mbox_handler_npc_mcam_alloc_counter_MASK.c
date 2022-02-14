
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct rvu {TYPE_1__* hw; } ;
struct npc_mcam_alloc_counter_rsp {int count; int cntr; int* cntr_list; } ;
struct TYPE_6__ {int pcifunc; } ;
struct npc_mcam_alloc_counter_req {int count; scalar_t__ contig; TYPE_2__ hdr; } ;
struct TYPE_7__ {int bmap; int max; } ;
struct npc_mcam {int* cntr2pfvf_map; int lock; TYPE_3__ counters; } ;
struct TYPE_5__ {struct npc_mcam mcam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct rvu*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int,int*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct rvu*,int ,int ) ;
 int FUNC_7 (TYPE_3__*) ;

int FUNC_8(struct rvu *VAR_4,
   struct npc_mcam_alloc_counter_req *VAR_5,
   struct npc_mcam_alloc_counter_rsp *VAR_6)
{
 struct npc_mcam *VAR_7 = &VAR_4->hw->mcam;
 u16 VAR_8 = VAR_5->hdr.pcifunc;
 u16 VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_6(VAR_4, VAR_0, 0);
 if (VAR_11 < 0)
  return VAR_3;


 if (!FUNC_1(VAR_4, VAR_8))
  return VAR_3;




 if (!VAR_5->contig && VAR_5->count > VAR_1)
  return VAR_3;

 FUNC_2(&VAR_7->lock);


 if (!FUNC_7(&VAR_7->counters)) {
  FUNC_3(&VAR_7->lock);
  return VAR_2;
 }

 VAR_6->count = 0;

 if (VAR_5->contig) {



  VAR_12 = FUNC_4(VAR_7->counters.bmap,
      VAR_7->counters.max, 0,
      VAR_5->count, &VAR_9);
  VAR_6->count = VAR_9;
  VAR_6->cntr = VAR_12;
  for (VAR_10 = VAR_12; VAR_10 < (VAR_12 + VAR_9); VAR_10++) {
   FUNC_0(VAR_10, VAR_7->counters.bmap);
   VAR_7->cntr2pfvf_map[VAR_10] = VAR_8;
  }
 } else {



  for (VAR_10 = 0; VAR_10 < VAR_5->count; VAR_10++) {
   VAR_12 = FUNC_5(&VAR_7->counters);
   if (VAR_12 < 0)
    break;
   VAR_6->cntr_list[VAR_10] = VAR_12;
   VAR_6->count++;
   VAR_7->cntr2pfvf_map[VAR_12] = VAR_8;
  }
 }

 FUNC_3(&VAR_7->lock);
 return 0;
}
