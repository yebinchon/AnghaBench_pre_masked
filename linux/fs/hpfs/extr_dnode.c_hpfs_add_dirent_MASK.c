
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct quad_buffer_head {int dummy; } ;
struct inode {int i_sb; } ;
struct hpfs_inode_info {int i_dno; } ;
struct hpfs_dirent {scalar_t__ down; int last; int namelen; int name; } ;
struct dnode {int dummy; } ;
typedef int dnode_secno ;
struct TYPE_2__ {scalar_t__ sb_chk; } ;


 int VAR_0 ;
 int FUNC_0 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_1 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_2 (struct dnode*) ;
 struct hpfs_dirent* FUNC_3 (struct dnode*) ;
 int FUNC_4 (struct inode*,int ,unsigned char const*,unsigned int,struct hpfs_dirent*,int ) ;
 int FUNC_5 (struct quad_buffer_head*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,unsigned char const*,unsigned int,int ,int ,int ) ;
 struct hpfs_inode_info* FUNC_8 (struct inode*) ;
 struct dnode* FUNC_9 (int ,int ,struct quad_buffer_head*) ;
 TYPE_1__* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int ,int*,int*,char*) ;

int FUNC_12(struct inode *VAR_1,
      const unsigned char *VAR_2, unsigned VAR_3,
      struct hpfs_dirent *VAR_4)
{
 struct hpfs_inode_info *VAR_5 = FUNC_8(VAR_1);
 struct dnode *VAR_6;
 struct hpfs_dirent *VAR_7, *VAR_8;
 struct quad_buffer_head VAR_9;
 dnode_secno VAR_10;
 int VAR_11;
 int VAR_12, VAR_13 = 0;
 VAR_10 = VAR_5->i_dno;
 down:
 if (FUNC_10(VAR_1->i_sb)->sb_chk)
  if (FUNC_11(VAR_1->i_sb, VAR_10, &VAR_12, &VAR_13, "hpfs_add_dirent")) return 1;
 if (!(VAR_6 = FUNC_9(VAR_1->i_sb, VAR_10, &VAR_9))) return 1;
 VAR_8 = FUNC_2(VAR_6);
 for (VAR_7 = FUNC_3(VAR_6); VAR_7 < VAR_8; VAR_7 = FUNC_1(VAR_7)) {
  if (!(VAR_11 = FUNC_7(VAR_1->i_sb, VAR_2, VAR_3, VAR_7->name, VAR_7->namelen, VAR_7->last))) {
   FUNC_5(&VAR_9);
   return -1;
  }
  if (VAR_11 < 0) {
   if (VAR_7->down) {
    VAR_10 = FUNC_0(VAR_7);
    FUNC_5(&VAR_9);
    goto down;
   }
   break;
  }
 }
 FUNC_5(&VAR_9);
 if (FUNC_6(VAR_1->i_sb, VAR_0)) {
  VAR_11 = 1;
  goto ret;
 }
 VAR_11 = FUNC_4(VAR_1, VAR_10, VAR_2, VAR_3, VAR_4, 0);
 ret:
 return VAR_11;
}
