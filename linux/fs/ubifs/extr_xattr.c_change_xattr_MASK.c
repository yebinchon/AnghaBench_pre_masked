
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_inode {int data_len; int ui_size; int ui_mutex; int xattr_size; void* data; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int dirtied_ino; scalar_t__ dirtied_ino_d; } ;
struct inode {int i_size; int i_ctime; } ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (void const*,int,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ubifs_info*,int) ;
 int FUNC_9 (struct ubifs_info*,struct ubifs_budget_req*) ;
 struct ubifs_inode* FUNC_10 (struct inode*) ;
 int FUNC_11 (struct ubifs_info*,struct inode*,struct inode*) ;
 int FUNC_12 (struct ubifs_info*,struct ubifs_budget_req*) ;

__attribute__((used)) static int FUNC_13(struct ubifs_info *VAR_2, struct inode *VAR_3,
   struct inode *VAR_4, const void *VAR_5, int VAR_6)
{
 int VAR_7;
 struct ubifs_inode *VAR_8 = FUNC_10(VAR_3);
 struct ubifs_inode *VAR_9 = FUNC_10(VAR_4);
 void *VAR_10 = ((void*)0);
 int VAR_11;
 struct ubifs_budget_req VAR_12 = { .dirtied_ino = 2,
  .dirtied_ino_d = FUNC_0(VAR_6, 8) + FUNC_0(VAR_8->data_len, 8) };

 FUNC_8(VAR_2, VAR_9->data_len == VAR_4->i_size);
 VAR_7 = FUNC_9(VAR_2, &VAR_12);
 if (VAR_7)
  return VAR_7;

 VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_1);
 if (!VAR_10) {
  VAR_7 = -VAR_0;
  goto out_free;
 }
 FUNC_6(&VAR_9->ui_mutex);
 FUNC_3(VAR_9->data);
 VAR_9->data = VAR_10;
 VAR_4->i_size = VAR_9->ui_size = VAR_6;
 VAR_11 = VAR_9->data_len;
 VAR_9->data_len = VAR_6;
 FUNC_7(&VAR_9->ui_mutex);

 FUNC_6(&VAR_8->ui_mutex);
 VAR_3->i_ctime = FUNC_2(VAR_3);
 VAR_8->xattr_size -= FUNC_1(VAR_11);
 VAR_8->xattr_size += FUNC_1(VAR_6);







 VAR_7 = FUNC_11(VAR_2, VAR_4, VAR_3);
 if (VAR_7)
  goto out_cancel;
 FUNC_7(&VAR_8->ui_mutex);

 FUNC_12(VAR_2, &VAR_12);
 return 0;

out_cancel:
 VAR_8->xattr_size -= FUNC_1(VAR_6);
 VAR_8->xattr_size += FUNC_1(VAR_11);
 FUNC_7(&VAR_8->ui_mutex);
 FUNC_5(VAR_4);
out_free:
 FUNC_12(VAR_2, &VAR_12);
 return VAR_7;
}
