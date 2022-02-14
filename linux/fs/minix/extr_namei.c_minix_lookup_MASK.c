
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
struct TYPE_4__ {scalar_t__ s_namelen; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct dentry* FUNC_1 (struct inode*,struct dentry*) ;
 struct inode* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 TYPE_2__* FUNC_4 (int ) ;

__attribute__((used)) static struct dentry *FUNC_5(struct inode * VAR_1, struct dentry *VAR_2, unsigned int VAR_3)
{
 struct inode * VAR_4 = ((void*)0);
 ino_t VAR_5;

 if (VAR_2->d_name.len > FUNC_4(VAR_1->i_sb)->s_namelen)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5)
  VAR_4 = FUNC_2(VAR_1->i_sb, VAR_5);
 return FUNC_1(VAR_4, VAR_2);
}
