
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bna_rxf {TYPE_2__* rx; } ;
struct bna_mcam_handle {scalar_t__ refcnt; int qe; int handle; } ;
struct bna_mac {struct bna_mcam_handle* handle; } ;
typedef enum bna_cleanup_type { ____Placeholder_bna_cleanup_type } bna_cleanup_type ;
struct TYPE_4__ {TYPE_1__* bna; } ;
struct TYPE_3__ {int mcam_mod; } ;


 int VAR_0 ;
 int FUNC_0 (struct bna_rxf*,int ) ;
 int FUNC_1 (int *,struct bna_mcam_handle*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct bna_rxf *VAR_1, struct bna_mac *VAR_2,
  enum bna_cleanup_type VAR_3)
{
 struct bna_mcam_handle *VAR_4;
 int VAR_5 = 0;

 VAR_4 = VAR_2->handle;
 if (VAR_4 == ((void*)0))
  return VAR_5;

 VAR_4->refcnt--;
 if (VAR_4->refcnt == 0) {
  if (VAR_3 == VAR_0) {
   FUNC_0(VAR_1, VAR_4->handle);
   VAR_5 = 1;
  }
  FUNC_2(&VAR_4->qe);
  FUNC_1(&VAR_1->rx->bna->mcam_mod, VAR_4);
 }
 VAR_2->handle = ((void*)0);

 return VAR_5;
}
