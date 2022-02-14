
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct file*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*,struct file*) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_1, struct file *VAR_2)
{
 int VAR_3;

 FUNC_0("NFS: open file(%pD2)\n", VAR_2);

 FUNC_2(VAR_1, VAR_0);
 VAR_3 = FUNC_1(VAR_2->f_flags);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 return VAR_3;
}
