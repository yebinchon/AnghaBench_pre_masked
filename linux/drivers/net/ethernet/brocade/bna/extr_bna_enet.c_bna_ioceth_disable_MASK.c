
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_ioceth {TYPE_1__* bna; int stop_cbarg; int (* stop_cbfn ) (int ) ;} ;
typedef enum bna_cleanup_type { ____Placeholder_bna_cleanup_type } bna_cleanup_type ;
struct TYPE_2__ {int bnad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bna_ioceth*,int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct bna_ioceth *VAR_2, enum bna_cleanup_type VAR_3)
{
 if (VAR_3 == VAR_0) {
  FUNC_1(VAR_2->bna->bnad);
  return;
 }

 VAR_2->stop_cbfn = FUNC_1;
 VAR_2->stop_cbarg = VAR_2->bna->bnad;

 FUNC_0(VAR_2, VAR_1);
}
