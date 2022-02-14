
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_2__ {int n_free_ddp; } ;
struct csio_scsim {TYPE_1__ stats; int ddp_freelist; } ;


 int FUNC_0 (struct list_head*,int *) ;

__attribute__((used)) static inline void
FUNC_1(struct csio_scsim *VAR_0, struct list_head *VAR_1,
    int VAR_2)
{
 FUNC_0(VAR_1, &VAR_0->ddp_freelist);
 VAR_0->stats.n_free_ddp += VAR_2;
}
