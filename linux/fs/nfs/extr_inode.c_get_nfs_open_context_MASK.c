
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; } ;
struct nfs_open_context {TYPE_1__ lock_context; } ;


 scalar_t__ FUNC_0 (int *) ;

struct nfs_open_context *FUNC_1(struct nfs_open_context *VAR_0)
{
 if (VAR_0 != ((void*)0) && FUNC_0(&VAR_0->lock_context.count))
  return VAR_0;
 return ((void*)0);
}
