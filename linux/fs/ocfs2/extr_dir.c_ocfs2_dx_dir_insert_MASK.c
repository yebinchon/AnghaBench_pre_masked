
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_dx_root_block {int dr_num_entries; } ;
struct ocfs2_dir_lookup_result {int dl_dx_leaf_bh; TYPE_1__* dl_leaf_bh; int dl_hinfo; struct buffer_head* dl_dx_root_bh; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {int b_blocknr; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,int *,int *,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,int *,int *,int ,struct ocfs2_dx_root_block*) ;
 scalar_t__ FUNC_5 (struct ocfs2_dx_root_block*) ;
 int FUNC_6 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_7 (int *,struct buffer_head*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1, handle_t *VAR_2,
          struct ocfs2_dir_lookup_result *VAR_3)
{
 int VAR_4 = 0;
 struct ocfs2_dx_root_block *VAR_5;
 struct buffer_head *VAR_6 = VAR_3->dl_dx_root_bh;

 VAR_4 = FUNC_6(VAR_2, FUNC_0(VAR_1), VAR_6,
          VAR_0);
 if (VAR_4) {
  FUNC_3(VAR_4);
  goto out;
 }

 VAR_5 = (struct ocfs2_dx_root_block *)VAR_3->dl_dx_root_bh->b_data;
 if (FUNC_5(VAR_5)) {
  FUNC_4(VAR_1, VAR_2,
         &VAR_3->dl_hinfo,
         VAR_3->dl_leaf_bh->b_blocknr,
         VAR_5);
 } else {
  VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_3->dl_hinfo,
       VAR_3->dl_leaf_bh->b_blocknr,
       VAR_3->dl_dx_leaf_bh);
  if (VAR_4)
   goto out;
 }

 FUNC_2(&VAR_5->dr_num_entries, 1);
 FUNC_7(VAR_2, VAR_6);

out:
 return VAR_4;
}
