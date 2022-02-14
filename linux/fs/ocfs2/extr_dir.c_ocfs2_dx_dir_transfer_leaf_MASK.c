
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_dx_entry_list {struct ocfs2_dx_entry* de_entries; int de_num_used; } ;
struct ocfs2_dx_leaf {struct ocfs2_dx_entry_list dl_list; } ;
struct ocfs2_dx_entry {int dx_major_hash; } ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {int s_blocksize; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ocfs2_dx_leaf*,struct ocfs2_dx_leaf*,int ) ;
 int FUNC_4 (struct ocfs2_dx_entry**,int ,int) ;
 int FUNC_5 (struct ocfs2_dx_leaf*,struct ocfs2_dx_entry*) ;
 int FUNC_6 (int *,struct buffer_head*) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_0, u32 VAR_1,
           handle_t *VAR_2,
           struct ocfs2_dx_leaf *VAR_3,
           struct buffer_head **VAR_4,
           struct buffer_head **VAR_5,
           int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 u32 VAR_10;
 struct ocfs2_dx_leaf *VAR_11, *VAR_12;
 struct ocfs2_dx_entry_list *VAR_13, *VAR_14;
 struct ocfs2_dx_entry *VAR_15;

 VAR_14 = &VAR_3->dl_list;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_11 = (struct ocfs2_dx_leaf *) VAR_4[VAR_7]->b_data;
  VAR_13 = &VAR_11->dl_list;
  VAR_12 = (struct ocfs2_dx_leaf *) VAR_5[VAR_7]->b_data;

  VAR_9 = FUNC_1(VAR_13->de_num_used);

  FUNC_3(VAR_3, VAR_11, VAR_0->i_sb->s_blocksize);
  VAR_14->de_num_used = FUNC_0(0);
  FUNC_4(&VAR_14->de_entries, 0, sizeof(*VAR_15)*VAR_9);

  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   VAR_15 = &VAR_13->de_entries[VAR_8];
   VAR_10 = FUNC_2(VAR_15->dx_major_hash);
   if (VAR_10 >= VAR_1)
    FUNC_5(VAR_12,
             VAR_15);
   else
    FUNC_5(VAR_3,
             VAR_15);
  }
  FUNC_3(VAR_11, VAR_3, VAR_0->i_sb->s_blocksize);

  FUNC_6(VAR_2, VAR_4[VAR_7]);
  FUNC_6(VAR_2, VAR_5[VAR_7]);
 }
}
