
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_inode_info {int ip_lock; int ip_dyn_features; } ;
struct ocfs2_inline_data {void* id_count; } ;
struct TYPE_2__ {struct ocfs2_inline_data i_data; } ;
struct ocfs2_dinode {void* i_dyn_features; TYPE_1__ id2; } ;
struct inode {int i_sb; } ;


 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct ocfs2_dinode*) ;
 int FUNC_3 (struct inode*,struct ocfs2_dinode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct inode *VAR_1, struct ocfs2_dinode *VAR_2)
{
 struct ocfs2_inode_info *VAR_3 = FUNC_0(VAR_1);
 struct ocfs2_inline_data *VAR_4 = &VAR_2->id2.i_data;

 FUNC_4(&VAR_3->ip_lock);
 VAR_3->ip_dyn_features |= VAR_0;
 VAR_2->i_dyn_features = FUNC_1(VAR_3->ip_dyn_features);
 FUNC_5(&VAR_3->ip_lock);





 FUNC_3(VAR_1, VAR_2);

 VAR_4->id_count = FUNC_1(
   FUNC_2(VAR_1->i_sb, VAR_2));
}
