
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seg_entry {int valid_blocks; scalar_t__ discard_map; scalar_t__ ckpt_valid_map; scalar_t__ cur_valid_map; } ;
struct list_head {int dummy; } ;
struct f2fs_sb_info {int blocks_per_seg; } ;
struct discard_entry {scalar_t__ discard_map; int list; int start_blkaddr; } ;
struct cp_control {int reason; unsigned int trim_minlen; int trim_start; } ;
struct TYPE_6__ {unsigned long* tmp_map; } ;
struct TYPE_5__ {TYPE_1__* dcc_info; } ;
struct TYPE_4__ {scalar_t__ nr_discards; scalar_t__ max_discards; struct list_head entry_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct f2fs_sb_info*,int ) ;
 unsigned int FUNC_3 (unsigned long*,int,unsigned int) ;
 unsigned int FUNC_4 (unsigned long*,int,unsigned int) ;
 int FUNC_5 (int,void*) ;
 int VAR_3 ;
 int FUNC_6 (struct f2fs_sb_info*) ;
 struct discard_entry* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct f2fs_sb_info*) ;
 struct seg_entry* FUNC_9 (struct f2fs_sb_info*,int ) ;
 int FUNC_10 (int *,struct list_head*) ;

__attribute__((used)) static bool FUNC_11(struct f2fs_sb_info *VAR_4, struct cp_control *VAR_5,
       bool VAR_6)
{
 int VAR_7 = VAR_2 / sizeof(unsigned long);
 int VAR_8 = VAR_4->blocks_per_seg;
 struct seg_entry *VAR_9 = FUNC_9(VAR_4, VAR_5->trim_start);
 unsigned long *VAR_10 = (unsigned long *)VAR_9->cur_valid_map;
 unsigned long *VAR_11 = (unsigned long *)VAR_9->ckpt_valid_map;
 unsigned long *VAR_12 = (unsigned long *)VAR_9->discard_map;
 unsigned long *VAR_13 = FUNC_0(VAR_4)->tmp_map;
 unsigned int VAR_14 = 0, VAR_15 = -1;
 bool VAR_16 = (VAR_5->reason & VAR_0);
 struct discard_entry *VAR_17 = ((void*)0);
 struct list_head *VAR_18 = &FUNC_1(VAR_4)->dcc_info->entry_list;
 int VAR_19;

 if (VAR_9->valid_blocks == VAR_8 || !FUNC_6(VAR_4))
  return 0;

 if (!VAR_16) {
  if (!FUNC_8(VAR_4) || !VAR_9->valid_blocks ||
   FUNC_1(VAR_4)->dcc_info->nr_discards >=
    FUNC_1(VAR_4)->dcc_info->max_discards)
   return 0;
 }


 for (VAR_19 = 0; VAR_19 < VAR_7; VAR_19++)
  VAR_13[VAR_19] = VAR_16 ? ~VAR_11[VAR_19] & ~VAR_12[VAR_19] :
    (VAR_10[VAR_19] ^ VAR_11[VAR_19]) & VAR_11[VAR_19];

 while (VAR_16 || FUNC_1(VAR_4)->dcc_info->nr_discards <=
    FUNC_1(VAR_4)->dcc_info->max_discards) {
  VAR_14 = FUNC_3(VAR_13, VAR_8, VAR_15 + 1);
  if (VAR_14 >= VAR_8)
   break;

  VAR_15 = FUNC_4(VAR_13, VAR_8, VAR_14 + 1);
  if (VAR_16 && VAR_14 && VAR_15 != VAR_8
     && (VAR_15 - VAR_14) < VAR_5->trim_minlen)
   continue;

  if (VAR_6)
   return 1;

  if (!VAR_17) {
   VAR_17 = FUNC_7(VAR_3,
        VAR_1);
   VAR_17->start_blkaddr = FUNC_2(VAR_4, VAR_5->trim_start);
   FUNC_10(&VAR_17->list, VAR_18);
  }

  for (VAR_19 = VAR_14; VAR_19 < VAR_15; VAR_19++)
   FUNC_5(VAR_19, (void *)VAR_17->discard_map);

  FUNC_1(VAR_4)->dcc_info->nr_discards += VAR_15 - VAR_14;
 }
 return 0;
}
