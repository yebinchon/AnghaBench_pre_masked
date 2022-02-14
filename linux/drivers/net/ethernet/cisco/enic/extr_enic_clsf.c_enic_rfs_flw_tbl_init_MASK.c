
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ toclean; int max; int free; int * ht_head; int lock; } ;
struct TYPE_3__ {int num_arfs; } ;
struct enic {TYPE_2__ rfs_h; TYPE_1__ config; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct enic *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->rfs_h.lock);
 for (VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++)
  FUNC_0(&VAR_1->rfs_h.ht_head[VAR_2]);
 VAR_1->rfs_h.max = VAR_1->config.num_arfs;
 VAR_1->rfs_h.free = VAR_1->rfs_h.max;
 VAR_1->rfs_h.toclean = 0;
}
