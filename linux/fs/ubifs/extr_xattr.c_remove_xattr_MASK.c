
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_inode {scalar_t__ data_len; int xattr_cnt; int ui_mutex; int xattr_names; int xattr_size; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int dirtied_ino; int mod_dent; int dirtied_ino_d; } ;
struct inode {scalar_t__ i_size; int i_ctime; } ;
struct fscrypt_name {int dummy; } ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct fscrypt_name const*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ubifs_info*,int) ;
 int FUNC_9 (struct ubifs_info*,struct ubifs_budget_req*) ;
 struct ubifs_inode* FUNC_10 (struct inode*) ;
 int FUNC_11 (struct ubifs_info*,struct inode*,struct inode*,struct fscrypt_name const*) ;
 int FUNC_12 (struct ubifs_info*,struct ubifs_budget_req*) ;

__attribute__((used)) static int FUNC_13(struct ubifs_info *VAR_0, struct inode *VAR_1,
   struct inode *VAR_2, const struct fscrypt_name *VAR_3)
{
 int VAR_4;
 struct ubifs_inode *VAR_5 = FUNC_10(VAR_1);
 struct ubifs_inode *VAR_6 = FUNC_10(VAR_2);
 struct ubifs_budget_req VAR_7 = { .dirtied_ino = 2, .mod_dent = 1,
    .dirtied_ino_d = FUNC_0(VAR_5->data_len, 8) };

 FUNC_8(VAR_0, VAR_6->data_len == VAR_2->i_size);

 VAR_4 = FUNC_9(VAR_0, &VAR_7);
 if (VAR_4)
  return VAR_4;

 FUNC_6(&VAR_5->ui_mutex);
 VAR_1->i_ctime = FUNC_3(VAR_1);
 VAR_5->xattr_cnt -= 1;
 VAR_5->xattr_size -= FUNC_1(FUNC_4(VAR_3));
 VAR_5->xattr_size -= FUNC_2(VAR_6->data_len);
 VAR_5->xattr_names -= FUNC_4(VAR_3);

 VAR_4 = FUNC_11(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  goto out_cancel;
 FUNC_7(&VAR_5->ui_mutex);

 FUNC_12(VAR_0, &VAR_7);
 return 0;

out_cancel:
 VAR_5->xattr_cnt += 1;
 VAR_5->xattr_size += FUNC_1(FUNC_4(VAR_3));
 VAR_5->xattr_size += FUNC_2(VAR_6->data_len);
 VAR_5->xattr_names += FUNC_4(VAR_3);
 FUNC_7(&VAR_5->ui_mutex);
 FUNC_12(VAR_0, &VAR_7);
 FUNC_5(VAR_2);
 return VAR_4;
}
