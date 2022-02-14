
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct rvu {int dev; TYPE_1__* hw; } ;
struct TYPE_4__ {int max; int bmap; } ;
struct npc_mcam {int banks; int banksize; int total_entries; int keysize; int banks_per_entry; int bmap_entries; int nixlf_offset; int pf_offset; int bmap_fcnt; int lprio_count; int lprio_start; int hprio_count; int hprio_end; TYPE_2__ counters; int lock; void* cntr_refcnt; void* entry2cntr_map; void* cntr2pfvf_map; void* entry2pfvf_map; void* bmap_reverse; void* bmap; } ;
struct TYPE_3__ {int total_pfs; struct npc_mcam mcam; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,char*,int) ;
 void* FUNC_4 (int ,int,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct rvu*) ;
 int FUNC_10 (struct rvu*,int,int ) ;

__attribute__((used)) static int FUNC_11(struct rvu *VAR_8, int VAR_9)
{
 int VAR_10 = FUNC_9(VAR_8);
 struct npc_mcam *VAR_11 = &VAR_8->hw->mcam;
 int VAR_12, VAR_13;
 u64 VAR_14;


 VAR_14 = FUNC_10(VAR_8, VAR_9, VAR_3);
 VAR_11->banks = (VAR_14 >> 44) & 0xF;
 VAR_11->banksize = (VAR_14 >> 28) & 0xFFFF;
 VAR_11->counters.max = (VAR_14 >> 48) & 0xFFFF;


 VAR_14 = (FUNC_10(VAR_8, VAR_9,
     FUNC_2(0)) >> 32) & 0x07;
 VAR_11->total_entries = (VAR_11->banks / FUNC_1(VAR_14)) * VAR_11->banksize;
 VAR_11->keysize = VAR_14;


 if (VAR_14 == VAR_5)
  VAR_11->banks_per_entry = 4;
 else if (VAR_14 == VAR_4)
  VAR_11->banks_per_entry = 2;
 else
  VAR_11->banks_per_entry = 1;
 VAR_12 = (VAR_10 * VAR_6) +
  ((VAR_8->hw->total_pfs - 1) * VAR_7);
 if (VAR_11->total_entries <= VAR_12) {
  FUNC_3(VAR_8->dev,
    "Insufficient NPC MCAM size %d for pkt I/O, exiting\n",
    VAR_11->total_entries);
  return -VAR_1;
 }

 VAR_11->bmap_entries = VAR_11->total_entries - VAR_12;
 VAR_11->nixlf_offset = VAR_11->bmap_entries;
 VAR_11->pf_offset = VAR_11->nixlf_offset + VAR_10;


 VAR_11->bmap = FUNC_4(VAR_8->dev, FUNC_0(VAR_11->bmap_entries),
      sizeof(long), VAR_2);
 if (!VAR_11->bmap)
  return -VAR_1;

 VAR_11->bmap_reverse = FUNC_4(VAR_8->dev,
       FUNC_0(VAR_11->bmap_entries),
       sizeof(long), VAR_2);
 if (!VAR_11->bmap_reverse)
  return -VAR_1;

 VAR_11->bmap_fcnt = VAR_11->bmap_entries;


 VAR_11->entry2pfvf_map = FUNC_4(VAR_8->dev, VAR_11->bmap_entries,
         sizeof(u16), VAR_2);
 if (!VAR_11->entry2pfvf_map)
  return -VAR_1;





 VAR_11->lprio_count = VAR_11->bmap_entries / 8;
 if (VAR_11->lprio_count > VAR_0)
  VAR_11->lprio_count = FUNC_7(VAR_11->lprio_count,
            VAR_0);
 VAR_11->lprio_start = VAR_11->bmap_entries - VAR_11->lprio_count;
 VAR_11->hprio_count = VAR_11->lprio_count;
 VAR_11->hprio_end = VAR_11->hprio_count;




 VAR_13 = FUNC_8(&VAR_11->counters);
 if (VAR_13)
  return VAR_13;

 VAR_11->cntr2pfvf_map = FUNC_4(VAR_8->dev, VAR_11->counters.max,
        sizeof(u16), VAR_2);
 if (!VAR_11->cntr2pfvf_map)
  goto free_mem;




 VAR_11->entry2cntr_map = FUNC_4(VAR_8->dev, VAR_11->bmap_entries,
         sizeof(u16), VAR_2);
 if (!VAR_11->entry2cntr_map)
  goto free_mem;

 VAR_11->cntr_refcnt = FUNC_4(VAR_8->dev, VAR_11->counters.max,
      sizeof(u16), VAR_2);
 if (!VAR_11->cntr_refcnt)
  goto free_mem;

 FUNC_6(&VAR_11->lock);

 return 0;

free_mem:
 FUNC_5(VAR_11->counters.bmap);
 return -VAR_1;
}
