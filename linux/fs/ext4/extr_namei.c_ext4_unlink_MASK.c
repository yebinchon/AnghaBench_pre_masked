
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; scalar_t__ i_nlink; void* i_ctime; void* i_mtime; int i_sb; } ;
struct ext4_dir_entry_2 {int inode; } ;
struct TYPE_2__ {int name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct buffer_head {int dummy; } ;
typedef struct buffer_head handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 void* FUNC_7 (struct inode*) ;
 struct inode* FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct buffer_head*,struct inode*,struct ext4_dir_entry_2*,struct buffer_head*) ;
 struct buffer_head* FUNC_13 (struct inode*,TYPE_1__*,struct ext4_dir_entry_2**,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct buffer_head*) ;
 struct buffer_head* FUNC_16 (struct inode*,int ,int ) ;
 int FUNC_17 (struct buffer_head*) ;
 int FUNC_18 (struct buffer_head*,struct inode*) ;
 int FUNC_19 (struct buffer_head*,struct inode*) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (struct inode*,char*,int ,int ) ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 (struct inode*,int) ;
 int FUNC_24 (struct inode*,struct dentry*) ;
 int FUNC_25 (struct dentry*,int) ;
 scalar_t__ FUNC_26 (int ) ;

__attribute__((used)) static int FUNC_27(struct inode *VAR_4, struct dentry *VAR_5)
{
 int VAR_6;
 struct inode *VAR_7;
 struct buffer_head *VAR_8;
 struct ext4_dir_entry_2 *VAR_9;
 handle_t *VAR_10 = ((void*)0);

 if (FUNC_26(FUNC_14(FUNC_1(VAR_4->i_sb))))
  return -VAR_1;

 FUNC_24(VAR_4, VAR_5);


 VAR_6 = FUNC_10(VAR_4);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_10(FUNC_8(VAR_5));
 if (VAR_6)
  return VAR_6;

 VAR_6 = -VAR_2;
 VAR_8 = FUNC_13(VAR_4, &VAR_5->d_name, &VAR_9, ((void*)0));
 if (FUNC_4(VAR_8))
  return FUNC_5(VAR_8);
 if (!VAR_8)
  goto end_unlink;

 VAR_7 = FUNC_8(VAR_5);

 VAR_6 = -VAR_0;
 if (FUNC_22(VAR_9->inode) != VAR_7->i_ino)
  goto end_unlink;

 VAR_10 = FUNC_16(VAR_4, VAR_3,
        FUNC_0(VAR_4->i_sb));
 if (FUNC_4(VAR_10)) {
  VAR_6 = FUNC_5(VAR_10);
  VAR_10 = ((void*)0);
  goto end_unlink;
 }

 if (FUNC_3(VAR_4))
  FUNC_15(VAR_10);

 if (VAR_7->i_nlink == 0) {
  FUNC_21(VAR_7, "Deleting file '%.*s' with no links",
       VAR_5->d_name.len, VAR_5->d_name.name);
  FUNC_23(VAR_7, 1);
 }
 VAR_6 = FUNC_12(VAR_10, VAR_4, VAR_9, VAR_8);
 if (VAR_6)
  goto end_unlink;
 VAR_4->i_ctime = VAR_4->i_mtime = FUNC_7(VAR_4);
 FUNC_20(VAR_4);
 FUNC_18(VAR_10, VAR_4);
 FUNC_11(VAR_7);
 if (!VAR_7->i_nlink)
  FUNC_19(VAR_10, VAR_7);
 VAR_7->i_ctime = FUNC_7(VAR_7);
 FUNC_18(VAR_10, VAR_7);
end_unlink:
 FUNC_6(VAR_8);
 if (VAR_10)
  FUNC_17(VAR_10);
 FUNC_25(VAR_5, VAR_6);
 return VAR_6;
}
