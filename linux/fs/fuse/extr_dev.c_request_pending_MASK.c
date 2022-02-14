
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_iqueue {int interrupts; int pending; } ;


 scalar_t__ FUNC_0 (struct fuse_iqueue*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct fuse_iqueue *VAR_0)
{
 return !FUNC_1(&VAR_0->pending) || !FUNC_1(&VAR_0->interrupts) ||
  FUNC_0(VAR_0);
}
