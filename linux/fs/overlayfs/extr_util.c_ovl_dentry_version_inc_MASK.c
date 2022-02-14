
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int version; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*) ;

__attribute__((used)) static void FUNC_6(struct dentry *VAR_0, bool VAR_1)
{
 struct inode *VAR_2 = FUNC_3(VAR_0);

 FUNC_2(!FUNC_4(VAR_2));






 if (FUNC_1(FUNC_5(VAR_0)) || VAR_1)
  FUNC_0(VAR_2)->version++;
}
