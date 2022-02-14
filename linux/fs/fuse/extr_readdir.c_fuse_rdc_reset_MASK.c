
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int cached; scalar_t__ pos; scalar_t__ size; int version; } ;
struct fuse_inode {TYPE_1__ rdc; } ;


 struct fuse_inode* FUNC_0 (struct inode*) ;

__attribute__((used)) static void FUNC_1(struct inode *VAR_0)
{
 struct fuse_inode *VAR_1 = FUNC_0(VAR_0);

 VAR_1->rdc.cached = 0;
 VAR_1->rdc.version++;
 VAR_1->rdc.size = 0;
 VAR_1->rdc.pos = 0;
}
