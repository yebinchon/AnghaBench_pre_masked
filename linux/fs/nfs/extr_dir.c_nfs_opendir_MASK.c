
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_dir_context {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct nfs_open_dir_context* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfs_open_dir_context*) ;
 int VAR_1 ;
 int FUNC_1 (struct nfs_open_dir_context*) ;
 struct nfs_open_dir_context* FUNC_2 (struct inode*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,struct file*) ;
 int FUNC_5 (struct inode*,int ) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4 = 0;
 struct nfs_open_dir_context *VAR_5;

 FUNC_4(VAR_0, "NFS: open dir(%pD2)\n", VAR_3);

 FUNC_5(VAR_2, VAR_1);

 VAR_5 = FUNC_2(VAR_2, FUNC_3());
 if (FUNC_0(VAR_5)) {
  VAR_4 = FUNC_1(VAR_5);
  goto out;
 }
 VAR_3->private_data = VAR_5;
out:
 return VAR_4;
}
