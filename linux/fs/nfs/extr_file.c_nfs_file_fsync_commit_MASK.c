
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int flags; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,struct file*,int) ;
 int FUNC_1 (struct file*) ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (struct inode*,int ) ;
 struct nfs_open_context* FUNC_4 (struct file*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int
FUNC_8(struct file *VAR_4, int VAR_5)
{
 struct nfs_open_context *VAR_6 = FUNC_4(VAR_4);
 struct inode *VAR_7 = FUNC_2(VAR_4);
 int VAR_8, VAR_9;
 int VAR_10 = 0;

 FUNC_0("NFS: fsync file(%pD2) datasync %d\n", VAR_4, VAR_5);

 FUNC_5(VAR_7, VAR_2);
 VAR_8 = FUNC_6(VAR_3, &VAR_6->flags);
 VAR_9 = FUNC_3(VAR_7, VAR_1);
 if (VAR_9 == 0)
  VAR_9 = FUNC_1(VAR_4);
 if (VAR_9 < 0) {
  VAR_10 = VAR_9;
  goto out;
 }
 VAR_8 |= FUNC_7(VAR_3, &VAR_6->flags);
 if (VAR_8)
  VAR_10 = -VAR_0;
out:
 return VAR_10;
}
