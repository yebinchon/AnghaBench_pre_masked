
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; int i_mtime; int i_ctime; scalar_t__ i_size; int i_nlink; int i_sb; } ;
struct ext4_dir_entry_2 {int inode; } ;
struct TYPE_2__ {int name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct buffer_head {int dummy; } ;
typedef struct buffer_head handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 struct inode* FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct buffer_head*,struct inode*) ;
 int FUNC_14 (struct buffer_head*,struct inode*,struct ext4_dir_entry_2*,struct buffer_head*) ;
 int FUNC_15 (struct inode*) ;
 struct buffer_head* FUNC_16 (struct inode*,TYPE_1__*,struct ext4_dir_entry_2**,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct buffer_head*) ;
 struct buffer_head* FUNC_19 (struct inode*,int ,int ) ;
 int FUNC_20 (struct buffer_head*) ;
 int FUNC_21 (struct buffer_head*,struct inode*) ;
 int FUNC_22 (struct buffer_head*,struct inode*) ;
 int FUNC_23 (struct inode*) ;
 int FUNC_24 (struct inode*,char*,int ,int ,int ) ;
 int FUNC_25 (struct inode*) ;
 scalar_t__ FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int ) ;

__attribute__((used)) static int FUNC_28(struct inode *VAR_5, struct dentry *VAR_6)
{
 int VAR_7;
 struct inode *VAR_8;
 struct buffer_head *VAR_9;
 struct ext4_dir_entry_2 *VAR_10;
 handle_t *VAR_11 = ((void*)0);

 if (FUNC_27(FUNC_17(FUNC_2(VAR_5->i_sb))))
  return -VAR_1;



 VAR_7 = FUNC_12(VAR_5);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_12(FUNC_10(VAR_6));
 if (VAR_7)
  return VAR_7;

 VAR_7 = -VAR_2;
 VAR_9 = FUNC_16(VAR_5, &VAR_6->d_name, &VAR_10, ((void*)0));
 if (FUNC_5(VAR_9))
  return FUNC_6(VAR_9);
 if (!VAR_9)
  goto end_rmdir;

 VAR_8 = FUNC_10(VAR_6);

 VAR_7 = -VAR_0;
 if (FUNC_26(VAR_10->inode) != VAR_8->i_ino)
  goto end_rmdir;

 VAR_7 = -VAR_3;
 if (!FUNC_15(VAR_8))
  goto end_rmdir;

 VAR_11 = FUNC_19(VAR_5, VAR_4,
        FUNC_0(VAR_5->i_sb));
 if (FUNC_5(VAR_11)) {
  VAR_7 = FUNC_6(VAR_11);
  VAR_11 = ((void*)0);
  goto end_rmdir;
 }

 if (FUNC_4(VAR_5))
  FUNC_18(VAR_11);

 VAR_7 = FUNC_14(VAR_11, VAR_5, VAR_10, VAR_9);
 if (VAR_7)
  goto end_rmdir;
 if (!FUNC_1(VAR_8))
  FUNC_24(VAR_8,
        "empty directory '%.*s' has too many links (%u)",
        VAR_6->d_name.len, VAR_6->d_name.name,
        VAR_8->i_nlink);
 FUNC_25(VAR_8);
 FUNC_8(VAR_8);



 VAR_8->i_size = 0;
 FUNC_22(VAR_11, VAR_8);
 VAR_8->i_ctime = VAR_5->i_ctime = VAR_5->i_mtime = FUNC_9(VAR_8);
 FUNC_21(VAR_11, VAR_8);
 FUNC_13(VAR_11, VAR_5);
 FUNC_23(VAR_5);
 FUNC_21(VAR_11, VAR_5);
end_rmdir:
 FUNC_7(VAR_9);
 if (VAR_11)
  FUNC_20(VAR_11);
 return VAR_7;
}
