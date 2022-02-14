
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {void* lowerdata; void* lower; struct dentry* __upperdentry; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct dentry*) ;
 void* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,struct inode*) ;
 int FUNC_4 (struct inode*,struct inode*) ;

void FUNC_5(struct inode *VAR_0, struct dentry *VAR_1,
      struct dentry *VAR_2, struct dentry *VAR_3)
{
 struct inode *VAR_4 = FUNC_1(VAR_1 ?: VAR_2);

 if (VAR_1)
  FUNC_0(VAR_0)->__upperdentry = VAR_1;
 if (VAR_2)
  FUNC_0(VAR_0)->lower = FUNC_2(FUNC_1(VAR_2));
 if (VAR_3)
  FUNC_0(VAR_0)->lowerdata = FUNC_2(FUNC_1(VAR_3));

 FUNC_3(VAR_4, VAR_0);
 FUNC_4(VAR_4, VAR_0);
 if (!VAR_0->i_ino)
  VAR_0->i_ino = VAR_4->i_ino;
}
