
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_qinfo_lvb {void* lvb_free_entry; void* lvb_free_blk; void* lvb_blocks; void* lvb_syncms; void* lvb_igrace; void* lvb_bgrace; int lvb_version; } ;
struct TYPE_2__ {int dqi_free_entry; int dqi_free_blk; int dqi_blocks; int dqi_type; int dqi_sb; } ;
struct ocfs2_mem_dqinfo {TYPE_1__ dqi_gi; int dqi_syncms; } ;
struct ocfs2_lock_res {int l_lksb; } ;
struct mem_dqinfo {int dqi_igrace; int dqi_bgrace; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 struct ocfs2_qinfo_lvb* FUNC_1 (int *) ;
 struct ocfs2_mem_dqinfo* FUNC_2 (struct ocfs2_lock_res*) ;
 struct mem_dqinfo* FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ocfs2_lock_res *VAR_1)
{
 struct ocfs2_qinfo_lvb *VAR_2;
 struct ocfs2_mem_dqinfo *VAR_3 = FUNC_2(VAR_1);
 struct mem_dqinfo *VAR_4 = FUNC_3(VAR_3->dqi_gi.dqi_sb,
         VAR_3->dqi_gi.dqi_type);

 VAR_2 = FUNC_1(&VAR_1->l_lksb);
 VAR_2->lvb_version = VAR_0;
 VAR_2->lvb_bgrace = FUNC_0(VAR_4->dqi_bgrace);
 VAR_2->lvb_igrace = FUNC_0(VAR_4->dqi_igrace);
 VAR_2->lvb_syncms = FUNC_0(VAR_3->dqi_syncms);
 VAR_2->lvb_blocks = FUNC_0(VAR_3->dqi_gi.dqi_blocks);
 VAR_2->lvb_free_blk = FUNC_0(VAR_3->dqi_gi.dqi_free_blk);
 VAR_2->lvb_free_entry = FUNC_0(VAR_3->dqi_gi.dqi_free_entry);
}
