
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct proc_dir_entry {scalar_t__ nlink; } ;
struct path {int dentry; } ;
struct kstat {int dummy; } ;
struct inode {int dummy; } ;


 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,struct kstat*) ;
 int FUNC_3 (struct inode*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(const struct path *VAR_0, struct kstat *VAR_1,
   u32 VAR_2, unsigned int VAR_3)
{
 struct inode *VAR_4 = FUNC_1(VAR_0->dentry);
 struct proc_dir_entry *VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 && VAR_5->nlink)
  FUNC_3(VAR_4, VAR_5->nlink);

 FUNC_2(VAR_4, VAR_1);
 return 0;
}
