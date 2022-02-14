
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct bna_rxf {int mcast_handle_q; TYPE_1__* rx; } ;
struct bna_mcam_handle {int handle; scalar_t__ refcnt; int qe; } ;
struct bna_mac {struct bna_mcam_handle* handle; } ;
struct TYPE_4__ {int mcam_mod; } ;
struct TYPE_3__ {TYPE_2__* bna; } ;


 struct bna_mcam_handle* FUNC_0 (int *) ;
 struct bna_mcam_handle* FUNC_1 (struct bna_rxf*,int) ;
 struct bna_mac* FUNC_2 (struct bna_rxf*,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(struct bna_rxf *VAR_0, u8 *VAR_1, int VAR_2)
{
 struct bna_mac *VAR_3;
 struct bna_mcam_handle *VAR_4;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 VAR_4 = FUNC_1(VAR_0, VAR_2);
 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_0(&VAR_0->rx->bna->mcam_mod);
  VAR_4->handle = VAR_2;
  VAR_4->refcnt = 0;
  FUNC_3(&VAR_4->qe, &VAR_0->mcast_handle_q);
 }
 VAR_4->refcnt++;
 VAR_3->handle = VAR_4;
}
