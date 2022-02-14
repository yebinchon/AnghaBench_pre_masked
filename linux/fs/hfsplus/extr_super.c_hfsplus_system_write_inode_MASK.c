
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; int i_size; } ;
struct hfsplus_fork_raw {scalar_t__ total_size; } ;
struct hfsplus_vh {struct hfsplus_fork_raw attr_file; struct hfsplus_fork_raw start_file; struct hfsplus_fork_raw alloc_file; struct hfsplus_fork_raw cat_file; struct hfsplus_fork_raw ext_file; } ;
struct hfsplus_sb_info {int flags; struct hfs_btree* attr_tree; struct hfs_btree* cat_tree; struct hfs_btree* ext_tree; struct hfsplus_vh* s_vhdr; } ;
struct hfs_btree {int dummy; } ;


 int VAR_0 ;




 struct hfsplus_sb_info* FUNC_0 (int ) ;
 int VAR_1 ;

 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct hfs_btree*) ;
 int FUNC_3 (struct inode*,struct hfsplus_fork_raw*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2)
{
 struct hfsplus_sb_info *VAR_3 = FUNC_0(VAR_2->i_sb);
 struct hfsplus_vh *VAR_4 = VAR_3->s_vhdr;
 struct hfsplus_fork_raw *VAR_5;
 struct hfs_btree *VAR_6 = ((void*)0);

 switch (VAR_2->i_ino) {
 case 129:
  VAR_5 = &VAR_4->ext_file;
  VAR_6 = VAR_3->ext_tree;
  break;
 case 130:
  VAR_5 = &VAR_4->cat_file;
  VAR_6 = VAR_3->cat_tree;
  break;
 case 132:
  VAR_5 = &VAR_4->alloc_file;
  break;
 case 128:
  VAR_5 = &VAR_4->start_file;
  break;
 case 131:
  VAR_5 = &VAR_4->attr_file;
  VAR_6 = VAR_3->attr_tree;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_5->total_size != FUNC_1(VAR_2->i_size)) {
  FUNC_6(VAR_1, &VAR_3->flags);
  FUNC_4(VAR_2->i_sb);
 }
 FUNC_3(VAR_2, VAR_5);
 if (VAR_6) {
  int VAR_7 = FUNC_2(VAR_6);

  if (VAR_7) {
   FUNC_5("b-tree write err: %d, ino %lu\n",
          VAR_7, VAR_2->i_ino);
   return VAR_7;
  }
 }
 return 0;
}
