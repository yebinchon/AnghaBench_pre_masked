
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fuse_iqueue {int reqctr; } ;


 scalar_t__ VAR_0 ;

u64 FUNC_0(struct fuse_iqueue *VAR_1)
{
 VAR_1->reqctr += VAR_0;
 return VAR_1->reqctr;
}
