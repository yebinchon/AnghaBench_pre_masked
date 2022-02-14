
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mtu_comp_status; int mtu_comp; } ;
struct TYPE_4__ {int enet; } ;
struct bnad {TYPE_1__ bnad_completions; int bna_lock; TYPE_2__ bna; } ;


 int FUNC_0 (int *,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct bnad *VAR_1, int VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_1->bnad_completions.mtu_comp);

 FUNC_2(&VAR_1->bna_lock, VAR_3);
 FUNC_0(&VAR_1->bna.enet, VAR_2, VAR_0);
 FUNC_3(&VAR_1->bna_lock, VAR_3);

 FUNC_4(&VAR_1->bnad_completions.mtu_comp);

 return VAR_1->bnad_completions.mtu_comp_status;
}
