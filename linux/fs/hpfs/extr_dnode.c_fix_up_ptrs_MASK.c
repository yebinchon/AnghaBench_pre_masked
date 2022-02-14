
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
struct hpfs_dirent {scalar_t__ down; } ;
struct dnode {scalar_t__ root_dnode; int up; int self; } ;
typedef scalar_t__ dnode_secno ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_2 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_3 (struct dnode*) ;
 struct hpfs_dirent* FUNC_4 (struct dnode*) ;
 int FUNC_5 (struct quad_buffer_head*) ;
 struct dnode* FUNC_6 (struct super_block*,int ,struct quad_buffer_head*) ;
 int FUNC_7 (struct quad_buffer_head*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct super_block *VAR_0, struct dnode *VAR_1)
{
 struct hpfs_dirent *VAR_2;
 struct hpfs_dirent *VAR_3 = FUNC_3(VAR_1);
 dnode_secno VAR_4 = FUNC_8(VAR_1->self);
 for (VAR_2 = FUNC_4(VAR_1); VAR_2 < VAR_3; VAR_2 = FUNC_2(VAR_2))
  if (VAR_2->down) {
   struct quad_buffer_head VAR_5;
   struct dnode *VAR_6;
   if ((VAR_6 = FUNC_6(VAR_0, FUNC_1(VAR_2), &VAR_5))) {
    if (FUNC_8(VAR_6->up) != VAR_4 || VAR_6->root_dnode) {
     VAR_6->up = FUNC_0(VAR_4);
     VAR_6->root_dnode = 0;
     FUNC_7(&VAR_5);
    }
    FUNC_5(&VAR_5);
   }
  }
}
