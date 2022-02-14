
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_sb_node {int flags; } ;
struct ubifs_info {int space_fixup; int superblock_need_write; int ro_mount; struct ubifs_sb_node* sup_node; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (struct ubifs_info*,int) ;
 int FUNC_3 (struct ubifs_info*,char*) ;

int FUNC_4(struct ubifs_info *VAR_1)
{
 int VAR_2;
 struct ubifs_sb_node *VAR_3 = VAR_1->sup_node;

 FUNC_2(VAR_1, VAR_1->space_fixup);
 FUNC_2(VAR_1, !VAR_1->ro_mount);

 FUNC_3(VAR_1, "start fixing up free space");

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;


 VAR_1->space_fixup = 0;
 VAR_3->flags &= FUNC_0(~VAR_0);

 VAR_1->superblock_need_write = 1;

 FUNC_3(VAR_1, "free space fixup complete");
 return VAR_2;
}
