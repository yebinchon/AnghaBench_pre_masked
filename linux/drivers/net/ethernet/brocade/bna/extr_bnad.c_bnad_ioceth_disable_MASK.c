
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ioc_comp_status; int ioc_comp; } ;
struct TYPE_4__ {int ioceth; } ;
struct bnad {TYPE_1__ bnad_completions; int bna_lock; TYPE_2__ bna; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(struct bnad *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4 = 0;

 FUNC_3(&VAR_2->bna_lock, VAR_3);
 FUNC_1(&VAR_2->bnad_completions.ioc_comp);
 FUNC_0(&VAR_2->bna.ioceth, VAR_1);
 FUNC_4(&VAR_2->bna_lock, VAR_3);

 FUNC_5(&VAR_2->bnad_completions.ioc_comp,
  FUNC_2(VAR_0));

 VAR_4 = VAR_2->bnad_completions.ioc_comp_status;
 return VAR_4;
}
