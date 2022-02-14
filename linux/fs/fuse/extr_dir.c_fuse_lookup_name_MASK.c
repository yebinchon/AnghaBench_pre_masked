
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int dummy; } ;
struct qstr {scalar_t__ len; } ;
struct inode {int dummy; } ;
struct fuse_forget_link {int dummy; } ;
struct TYPE_2__ {int mode; } ;
struct fuse_entry_out {int nodeid; TYPE_1__ attr; int generation; } ;
struct fuse_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct fuse_entry_out*) ;
 struct fuse_forget_link* FUNC_2 () ;
 int FUNC_3 (struct fuse_conn*) ;
 struct inode* FUNC_4 (struct super_block*,int ,int ,TYPE_1__*,int ,int ) ;
 int FUNC_5 (struct fuse_conn*,int *,int ,struct qstr const*,struct fuse_entry_out*) ;
 int FUNC_6 (struct fuse_conn*,struct fuse_forget_link*,int ,int) ;
 int FUNC_7 (struct fuse_conn*,int *) ;
 int FUNC_8 (int ) ;
 struct fuse_conn* FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct fuse_forget_link*) ;

int FUNC_11(struct super_block *VAR_5, u64 VAR_6, const struct qstr *VAR_7,
       struct fuse_entry_out *VAR_8, struct inode **VAR_9)
{
 struct fuse_conn *VAR_10 = FUNC_9(VAR_5);
 FUNC_0(VAR_4);
 struct fuse_forget_link *VAR_11;
 u64 VAR_12;
 int VAR_13;

 *VAR_9 = ((void*)0);
 VAR_13 = -VAR_1;
 if (VAR_7->len > VAR_3)
  goto out;


 VAR_11 = FUNC_2();
 VAR_13 = -VAR_2;
 if (!VAR_11)
  goto out;

 VAR_12 = FUNC_3(VAR_10);

 FUNC_5(VAR_10, &VAR_4, VAR_6, VAR_7, VAR_8);
 VAR_13 = FUNC_7(VAR_10, &VAR_4);

 if (VAR_13 || !VAR_8->nodeid)
  goto out_put_forget;

 VAR_13 = -VAR_0;
 if (!VAR_8->nodeid)
  goto out_put_forget;
 if (!FUNC_8(VAR_8->attr.mode))
  goto out_put_forget;

 *VAR_9 = FUNC_4(VAR_5, VAR_8->nodeid, VAR_8->generation,
      &VAR_8->attr, FUNC_1(VAR_8),
      VAR_12);
 VAR_13 = -VAR_2;
 if (!*VAR_9) {
  FUNC_6(VAR_10, VAR_11, VAR_8->nodeid, 1);
  goto out;
 }
 VAR_13 = 0;

 out_put_forget:
 FUNC_10(VAR_11);
 out:
 return VAR_13;
}
