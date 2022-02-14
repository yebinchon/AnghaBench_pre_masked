
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 struct dentry* FUNC_1 (struct inode*,struct dentry*) ;
 struct inode* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct inode*,struct dentry*) ;

__attribute__((used)) static struct dentry *
FUNC_4(struct inode *VAR_2, struct dentry *VAR_3, unsigned int VAR_4)
{
 struct inode *VAR_5 = ((void*)0);
 ino_t VAR_6;

 if (VAR_3->d_name.len > VAR_1)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_3(VAR_2, VAR_3);
 if (VAR_6)
  VAR_5 = FUNC_2(VAR_2->i_sb, VAR_6);
 return FUNC_1(VAR_5, VAR_3);
}
