
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct efivar_entry {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {struct efivar_entry* i_private; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct efivar_entry*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct efivar_entry *VAR_3 = FUNC_0(VAR_2)->i_private;

 if (FUNC_3(VAR_3))
  return -VAR_0;

 FUNC_2(FUNC_0(VAR_2));
 FUNC_1(VAR_2);
 return 0;
}
