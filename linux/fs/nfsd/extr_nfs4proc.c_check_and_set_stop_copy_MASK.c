
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_copy {int stopped; TYPE_1__* cp_clp; } ;
struct TYPE_2__ {int async_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool
FUNC_2(struct nfsd4_copy *VAR_0)
{
 bool VAR_1;

 FUNC_0(&VAR_0->cp_clp->async_lock);
 VAR_1 = VAR_0->stopped;
 if (!VAR_0->stopped)
  VAR_0->stopped = 1;
 FUNC_1(&VAR_0->cp_clp->async_lock);
 return VAR_1;
}
