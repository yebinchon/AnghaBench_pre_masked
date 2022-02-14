
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_mode; int f_mapping; } ;
typedef int fl_owner_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct file*) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static int
FUNC_6(struct file *VAR_2, fl_owner_t VAR_3)
{
 struct inode *VAR_4 = FUNC_1(VAR_2);

 FUNC_0("NFS: flush(%pD2)\n", VAR_2);

 FUNC_4(VAR_4, VAR_1);
 if ((VAR_2->f_mode & VAR_0) == 0)
  return 0;





 if (!FUNC_3(VAR_4))
  return FUNC_2(VAR_2->f_mapping);


 return FUNC_5(VAR_4);
}
