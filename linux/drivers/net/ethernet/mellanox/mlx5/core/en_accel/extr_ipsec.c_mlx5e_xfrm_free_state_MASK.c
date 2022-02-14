
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct xfrm_state {TYPE_2__ xso; } ;
struct mlx5e_ipsec_sa_entry {int xfrm; scalar_t__ hw_context; TYPE_1__* ipsec; } ;
struct TYPE_3__ {int wq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5e_ipsec_sa_entry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct mlx5e_ipsec_sa_entry*) ;
 struct mlx5e_ipsec_sa_entry* FUNC_5 (struct xfrm_state*) ;

__attribute__((used)) static void FUNC_6(struct xfrm_state *VAR_1)
{
 struct mlx5e_ipsec_sa_entry *VAR_2 = FUNC_5(VAR_1);

 if (!VAR_2)
  return;

 if (VAR_2->hw_context) {
  FUNC_0(VAR_2->ipsec->wq);
  FUNC_3(VAR_2->hw_context);
  FUNC_2(VAR_2->xfrm);
 }

 if (VAR_1->xso.flags & VAR_0)
  FUNC_4(VAR_2);

 FUNC_1(VAR_2);
}
