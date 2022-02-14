
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct exfat_inode_info {char* target; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;


 struct exfat_inode_info* FUNC_0 (struct inode*) ;

__attribute__((used)) static const char *FUNC_1(struct dentry *VAR_0, struct inode *VAR_1,
      struct delayed_call *VAR_2)
{
 struct exfat_inode_info *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->target) {
  char *VAR_4 = VAR_3->target;

  if (VAR_4)
   return (char *)(VAR_3->target);
 }
 return ((void*)0);
}
