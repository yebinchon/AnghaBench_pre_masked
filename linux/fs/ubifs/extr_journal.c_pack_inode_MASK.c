
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ubifs_inode {int flags; int data_len; int xattr_cnt; int xattr_size; int xattr_names; int data; int compr_type; int ui_size; int creat_sqnum; } ;
struct TYPE_5__ {int node_type; } ;
struct ubifs_ino_node {int data; void* xattr_names; void* xattr_size; void* xattr_cnt; void* data_len; int compr_type; void* nlink; void* size; void* flags; void* mode; void* gid; void* uid; void* mtime_nsec; void* mtime_sec; void* ctime_nsec; void* ctime_sec; void* atime_nsec; void* atime_sec; void* creat_sqnum; int key; TYPE_1__ ch; } ;
struct ubifs_info {int dummy; } ;
struct TYPE_8__ {int tv_nsec; int tv_sec; } ;
struct TYPE_7__ {int tv_nsec; int tv_sec; } ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_nlink; int i_mode; TYPE_4__ i_mtime; TYPE_3__ i_ctime; TYPE_2__ i_atime; int i_ino; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct inode const*) ;
 int FUNC_4 (struct inode const*) ;
 int FUNC_5 (struct ubifs_info*,int *,int ) ;
 int FUNC_6 (int ,int ,int) ;
 struct ubifs_inode* FUNC_7 (struct inode const*) ;
 int FUNC_8 (struct ubifs_info*,struct ubifs_ino_node*,scalar_t__,int) ;
 int FUNC_9 (struct ubifs_ino_node*) ;

__attribute__((used)) static void FUNC_10(struct ubifs_info *VAR_2, struct ubifs_ino_node *VAR_3,
         const struct inode *VAR_4, int VAR_5)
{
 int VAR_6 = 0, VAR_7 = !VAR_4->i_nlink;
 struct ubifs_inode *VAR_8 = FUNC_7(VAR_4);

 VAR_3->ch.node_type = VAR_0;
 FUNC_5(VAR_2, &VAR_3->key, VAR_4->i_ino);
 VAR_3->creat_sqnum = FUNC_2(VAR_8->creat_sqnum);
 VAR_3->atime_sec = FUNC_2(VAR_4->i_atime.tv_sec);
 VAR_3->atime_nsec = FUNC_1(VAR_4->i_atime.tv_nsec);
 VAR_3->ctime_sec = FUNC_2(VAR_4->i_ctime.tv_sec);
 VAR_3->ctime_nsec = FUNC_1(VAR_4->i_ctime.tv_nsec);
 VAR_3->mtime_sec = FUNC_2(VAR_4->i_mtime.tv_sec);
 VAR_3->mtime_nsec = FUNC_1(VAR_4->i_mtime.tv_nsec);
 VAR_3->uid = FUNC_1(FUNC_4(VAR_4));
 VAR_3->gid = FUNC_1(FUNC_3(VAR_4));
 VAR_3->mode = FUNC_1(VAR_4->i_mode);
 VAR_3->flags = FUNC_1(VAR_8->flags);
 VAR_3->size = FUNC_2(VAR_8->ui_size);
 VAR_3->nlink = FUNC_1(VAR_4->i_nlink);
 VAR_3->compr_type = FUNC_0(VAR_8->compr_type);
 VAR_3->data_len = FUNC_1(VAR_8->data_len);
 VAR_3->xattr_cnt = FUNC_1(VAR_8->xattr_cnt);
 VAR_3->xattr_size = FUNC_1(VAR_8->xattr_size);
 VAR_3->xattr_names = FUNC_1(VAR_8->xattr_names);
 FUNC_9(VAR_3);





 if (!VAR_7) {
  FUNC_6(VAR_3->data, VAR_8->data, VAR_8->data_len);
  VAR_6 = VAR_8->data_len;
 }

 FUNC_8(VAR_2, VAR_3, VAR_1 + VAR_6, VAR_5);
}
