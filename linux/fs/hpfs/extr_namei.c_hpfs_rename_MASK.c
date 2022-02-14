
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct quad_buffer_head {int dummy; } ;
struct inode {int i_sb; int i_ino; int i_mode; } ;
struct hpfs_dirent {int hidden; int * name; } ;
struct fnode {unsigned int len; int * name; int up; } ;
struct TYPE_3__ {unsigned char* name; unsigned int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct buffer_head {int dummy; } ;
typedef int dnode_secno ;
struct TYPE_4__ {int i_parent_dir; int i_dno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct hpfs_dirent*,struct hpfs_dirent*) ;
 int FUNC_4 (int ) ;
 struct inode* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,unsigned char const*,unsigned int,struct hpfs_dirent*) ;
 int FUNC_8 (unsigned char const*,unsigned int*) ;
 int FUNC_9 (struct quad_buffer_head*) ;
 int FUNC_10 (unsigned char const*,unsigned int*) ;
 int FUNC_11 (int ,char*) ;
 TYPE_2__* FUNC_12 (struct inode*) ;
 int FUNC_13 (int ) ;
 struct fnode* FUNC_14 (int ,int ,struct buffer_head**) ;
 int FUNC_15 (struct quad_buffer_head*) ;
 int FUNC_16 (struct inode*,int ,struct hpfs_dirent*,struct quad_buffer_head*,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct inode*) ;
 struct hpfs_dirent* FUNC_20 (struct inode*,int ,unsigned char const*,unsigned int,int *,struct quad_buffer_head*) ;
 int FUNC_21 (struct buffer_head*) ;
 int FUNC_22 (int *,unsigned char const*,int) ;
 int FUNC_23 (int *,int ,int) ;

__attribute__((used)) static int FUNC_24(struct inode *VAR_5, struct dentry *VAR_6,
         struct inode *VAR_7, struct dentry *VAR_8,
         unsigned int VAR_9)
{
 const unsigned char *VAR_10 = VAR_6->d_name.name;
 unsigned VAR_11 = VAR_6->d_name.len;
 const unsigned char *VAR_12 = VAR_8->d_name.name;
 unsigned VAR_13 = VAR_8->d_name.len;
 struct inode *VAR_14 = FUNC_5(VAR_6);
 struct inode *VAR_15 = FUNC_5(VAR_8);
 struct quad_buffer_head VAR_16, VAR_17;
 struct hpfs_dirent *VAR_18, *VAR_19;
 struct hpfs_dirent VAR_20;
 dnode_secno VAR_21;
 int VAR_22;
 struct buffer_head *VAR_23;
 struct fnode *VAR_24;
 int VAR_25;

 if (VAR_9 & ~VAR_4)
  return -VAR_1;

 if ((VAR_25 = FUNC_10(VAR_12, &VAR_13))) return VAR_25;
 VAR_25 = 0;
 FUNC_8(VAR_10, &VAR_11);

 FUNC_13(VAR_14->i_sb);



 if (VAR_15 && FUNC_0(VAR_15->i_mode)) {
  VAR_25 = -VAR_1;
  goto end1;
 }

 if (!(VAR_18 = FUNC_20(VAR_5, FUNC_12(VAR_5)->i_dno, VAR_10, VAR_11, &VAR_21, &VAR_16))) {
  FUNC_11(VAR_14->i_sb, "lookup succeeded but map dirent failed");
  VAR_25 = -VAR_2;
  goto end1;
 }
 FUNC_3(&VAR_20, VAR_18);
 VAR_20.hidden = VAR_12[0] == '.';

 if (VAR_15) {
  int VAR_26;
  if ((VAR_26 = FUNC_16(VAR_5, VAR_21, VAR_18, &VAR_16, 1)) != 2) {
   if ((VAR_19 = FUNC_20(VAR_7, FUNC_12(VAR_7)->i_dno, VAR_12, VAR_13, ((void*)0), &VAR_17))) {
    FUNC_2(VAR_15);
    FUNC_3(VAR_19, &VAR_20);
    FUNC_22(VAR_19->name, VAR_12, VAR_13);
    FUNC_15(&VAR_17);
    FUNC_9(&VAR_17);
    goto end;
   }
   FUNC_11(VAR_7->i_sb, "hpfs_rename: could not find dirent");
   VAR_25 = -VAR_0;
   goto end1;
  }
  VAR_25 = -VAR_3;
  goto end1;
 }

 if (VAR_7 == VAR_5) FUNC_9(&VAR_16);

 if ((VAR_22 = FUNC_7(VAR_7, VAR_12, VAR_13, &VAR_20))) {
  if (VAR_22 == -1) FUNC_11(VAR_7->i_sb, "hpfs_rename: dirent already exists!");
  VAR_25 = VAR_22 == 1 ? -VAR_3 : -VAR_0;
  if (VAR_7 != VAR_5) FUNC_9(&VAR_16);
  goto end1;
 }

 if (VAR_7 == VAR_5)
  if (!(VAR_18 = FUNC_20(VAR_5, FUNC_12(VAR_5)->i_dno, VAR_10, VAR_11, &VAR_21, &VAR_16))) {
   FUNC_11(VAR_14->i_sb, "lookup succeeded but map dirent failed at #2");
   VAR_25 = -VAR_2;
   goto end1;
  }

 if ((VAR_22 = FUNC_16(VAR_5, VAR_21, VAR_18, &VAR_16, 0))) {
  FUNC_11(VAR_14->i_sb, "hpfs_rename: could not remove dirent");
  VAR_25 = VAR_22 == 2 ? -VAR_3 : -VAR_0;
  goto end1;
 }

end:
 FUNC_12(VAR_14)->i_parent_dir = VAR_7->i_ino;
 if (FUNC_0(VAR_14->i_mode)) {
  FUNC_19(VAR_7);
  FUNC_6(VAR_5);
 }
 if ((VAR_24 = FUNC_14(VAR_14->i_sb, VAR_14->i_ino, &VAR_23))) {
  VAR_24->up = FUNC_4(VAR_7->i_ino);
  VAR_24->len = VAR_13;
  FUNC_22(VAR_24->name, VAR_12, VAR_13>15?15:VAR_13);
  if (VAR_13 < 15) FUNC_23(&VAR_24->name[VAR_13], 0, 15 - VAR_13);
  FUNC_21(VAR_23);
  FUNC_1(VAR_23);
 }
end1:
 if (!VAR_25) {
  FUNC_18(VAR_5);
  FUNC_18(VAR_7);
 }
 FUNC_17(VAR_14->i_sb);
 return VAR_25;
}
