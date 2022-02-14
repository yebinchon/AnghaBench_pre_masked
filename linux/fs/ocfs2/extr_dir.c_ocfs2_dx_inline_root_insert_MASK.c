
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_dx_root_block {int dr_entries; } ;
struct ocfs2_dx_hinfo {int dummy; } ;
struct inode {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int *,struct ocfs2_dx_hinfo*,int ) ;

__attribute__((used)) static void FUNC_1(struct inode *VAR_0, handle_t *VAR_1,
     struct ocfs2_dx_hinfo *VAR_2,
     u64 VAR_3,
     struct ocfs2_dx_root_block *VAR_4)
{
 FUNC_0(&VAR_4->dr_entries, VAR_2, VAR_3);
}
