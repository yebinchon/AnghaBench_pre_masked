
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_lock_context {int io_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

int
FUNC_2(struct nfs_lock_context *VAR_0)
{
 return FUNC_1(&VAR_0->io_count,
           !FUNC_0(&VAR_0->io_count));
}
