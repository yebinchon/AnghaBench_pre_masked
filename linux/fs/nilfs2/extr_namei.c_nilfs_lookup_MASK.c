
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef scalar_t__ ino_t ;
struct TYPE_4__ {int i_root; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_1 ;
 struct dentry* FUNC_2 (struct inode*,struct dentry*) ;
 struct inode* FUNC_3 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct inode*,TYPE_1__*) ;

__attribute__((used)) static struct dentry *
FUNC_5(struct inode *VAR_2, struct dentry *VAR_3, unsigned int VAR_4)
{
 struct inode *VAR_5;
 ino_t VAR_6;

 if (VAR_3->d_name.len > VAR_1)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_4(VAR_2, &VAR_3->d_name);
 VAR_5 = VAR_6 ? FUNC_3(VAR_2->i_sb, FUNC_1(VAR_2)->i_root, VAR_6) : ((void*)0);
 return FUNC_2(VAR_5, VAR_3);
}
