
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {int dummy; } ;
struct mlx5e_ipsec_sa_entry {TYPE_1__* ipsec; } ;
struct mlx5e_ipsec_modify_state_work {int work; struct mlx5e_ipsec_sa_entry* sa_entry; int attrs; } ;
struct TYPE_2__ {int wq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 struct mlx5e_ipsec_modify_state_work* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mlx5e_ipsec_sa_entry*,int *) ;
 int FUNC_4 (struct mlx5e_ipsec_sa_entry*) ;
 int FUNC_5 (int ,int *) ;
 struct mlx5e_ipsec_sa_entry* FUNC_6 (struct xfrm_state*) ;

__attribute__((used)) static void FUNC_7(struct xfrm_state *VAR_2)
{
 struct mlx5e_ipsec_sa_entry *VAR_3 = FUNC_6(VAR_2);
 struct mlx5e_ipsec_modify_state_work *VAR_4;
 bool VAR_5;

 if (!VAR_3)
  return;

 VAR_5 = FUNC_4(VAR_3);
 if (!VAR_5)
  return;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 FUNC_3(VAR_3, &VAR_4->attrs);
 VAR_4->sa_entry = VAR_3;

 FUNC_0(&VAR_4->work, VAR_1);
 FUNC_1(!FUNC_5(VAR_3->ipsec->wq, &VAR_4->work));
}
