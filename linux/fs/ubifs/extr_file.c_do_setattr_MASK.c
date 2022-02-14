
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_inode {int dirty; int ui_mutex; int ui_size; int data_len; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int dirtied_ino; int dirtied_ino_d; } ;
struct inode {TYPE_2__* i_sb; int i_size; int i_ctime; int i_mtime; } ;
struct iattr {int ia_valid; int ia_size; } ;
typedef int loff_t ;
struct TYPE_4__ {TYPE_1__* s_op; } ;
struct TYPE_3__ {int (* write_inode ) (struct inode*,int *) ;} ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct inode*,struct iattr const*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*,int *) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (struct ubifs_info*,struct ubifs_budget_req*) ;
 struct ubifs_inode* FUNC_12 (struct inode*) ;
 int FUNC_13 (struct ubifs_info*,struct ubifs_budget_req*) ;

__attribute__((used)) static int FUNC_14(struct ubifs_info *VAR_2, struct inode *VAR_3,
        const struct iattr *VAR_4)
{
 int VAR_5, VAR_6;
 loff_t VAR_7 = VAR_4->ia_size;
 struct ubifs_inode *VAR_8 = FUNC_12(VAR_3);
 struct ubifs_budget_req VAR_9 = { .dirtied_ino = 1,
    .dirtied_ino_d = FUNC_0(VAR_8->data_len, 8) };

 VAR_5 = FUNC_11(VAR_2, &VAR_9);
 if (VAR_5)
  return VAR_5;

 if (VAR_4->ia_valid & VAR_0) {
  FUNC_4("size %lld -> %lld", VAR_3->i_size, VAR_7);
  FUNC_10(VAR_3, VAR_7);
 }

 FUNC_7(&VAR_8->ui_mutex);
 if (VAR_4->ia_valid & VAR_0) {

  VAR_3->i_mtime = VAR_3->i_ctime = FUNC_3(VAR_3);

  VAR_8->ui_size = VAR_3->i_size;
 }

 FUNC_5(VAR_3, VAR_4);

 VAR_6 = VAR_8->dirty;
 if (VAR_4->ia_valid & VAR_0)




   FUNC_2(VAR_3, VAR_1);
 else
  FUNC_6(VAR_3);
 FUNC_8(&VAR_8->ui_mutex);

 if (VAR_6)
  FUNC_13(VAR_2, &VAR_9);
 if (FUNC_1(VAR_3))
  VAR_5 = VAR_3->i_sb->s_op->write_inode(VAR_3, ((void*)0));
 return VAR_5;
}
