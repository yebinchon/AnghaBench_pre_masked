
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct brcmf_pno_info {size_t n_reqs; int req_lock; TYPE_1__** reqs; } ;
struct TYPE_2__ {int reqid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

u64 FUNC_2(struct brcmf_pno_info *VAR_0, u32 VAR_1)
{
 u64 VAR_2 = 0;

 FUNC_0(&VAR_0->req_lock);

 if (VAR_1 < VAR_0->n_reqs)
  VAR_2 = VAR_0->reqs[VAR_1]->reqid;

 FUNC_1(&VAR_0->req_lock);
 return VAR_2;
}
