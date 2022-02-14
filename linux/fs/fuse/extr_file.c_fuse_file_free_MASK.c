
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct fuse_file {TYPE_1__ readdir; struct fuse_file* release_args; } ;


 int FUNC_0 (struct fuse_file*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct fuse_file *VAR_0)
{
 FUNC_0(VAR_0->release_args);
 FUNC_1(&VAR_0->readdir.lock);
 FUNC_0(VAR_0);
}
