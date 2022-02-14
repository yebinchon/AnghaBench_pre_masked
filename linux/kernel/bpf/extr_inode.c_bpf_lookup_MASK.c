
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct dentry* FUNC_1 (struct inode*,struct dentry*,unsigned int) ;
 scalar_t__ FUNC_2 (int ,char) ;

__attribute__((used)) static struct dentry *
FUNC_3(struct inode *VAR_1, struct dentry *VAR_2, unsigned VAR_3)
{



 if (FUNC_2(VAR_2->d_name.name, '.'))
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
