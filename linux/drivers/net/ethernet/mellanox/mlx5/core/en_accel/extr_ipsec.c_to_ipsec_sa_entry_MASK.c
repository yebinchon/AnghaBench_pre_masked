
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offload_handle; } ;
struct xfrm_state {TYPE_1__ xso; } ;
struct mlx5e_ipsec_sa_entry {struct xfrm_state* x; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static struct mlx5e_ipsec_sa_entry *FUNC_1(struct xfrm_state *VAR_0)
{
 struct mlx5e_ipsec_sa_entry *VAR_1;

 if (!VAR_0)
  return ((void*)0);

 VAR_1 = (struct mlx5e_ipsec_sa_entry *)VAR_0->xso.offload_handle;
 if (!VAR_1)
  return ((void*)0);

 FUNC_0(VAR_1->x != VAR_0);
 return VAR_1;
}
