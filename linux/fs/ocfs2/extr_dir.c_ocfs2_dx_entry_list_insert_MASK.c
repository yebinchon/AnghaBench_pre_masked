
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_dx_hinfo {int minor_hash; int major_hash; } ;
struct ocfs2_dx_entry_list {int de_num_used; struct ocfs2_dx_entry* de_entries; } ;
struct ocfs2_dx_entry {int dx_dirent_blk; void* dx_minor_hash; void* dx_major_hash; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ocfs2_dx_entry*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ocfs2_dx_entry_list *VAR_0,
           struct ocfs2_dx_hinfo *VAR_1,
           u64 VAR_2)
{
 int VAR_3;
 struct ocfs2_dx_entry *VAR_4;

 VAR_3 = FUNC_3(VAR_0->de_num_used);
 VAR_4 = &VAR_0->de_entries[VAR_3];

 FUNC_4(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->dx_major_hash = FUNC_0(VAR_1->major_hash);
 VAR_4->dx_minor_hash = FUNC_0(VAR_1->minor_hash);
 VAR_4->dx_dirent_blk = FUNC_1(VAR_2);

 FUNC_2(&VAR_0->de_num_used, 1);
}
