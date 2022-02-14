
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fid {int fid; } ;
struct inode {int dummy; } ;
struct file {struct p9_fid* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct p9_fid*) ;
 int FUNC_1 (int ,char*,struct inode*,struct file*,int) ;

int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 struct p9_fid *VAR_3;

 VAR_3 = VAR_2->private_data;
 FUNC_1(VAR_0, "inode: %p filp: %p fid: %d\n",
   VAR_1, VAR_2, VAR_3 ? VAR_3->fid : -1);
 if (VAR_3)
  FUNC_0(VAR_3);
 return 0;
}
