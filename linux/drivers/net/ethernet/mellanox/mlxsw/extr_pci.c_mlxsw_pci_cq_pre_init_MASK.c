
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ v; } ;
struct TYPE_4__ {TYPE_1__ cq; } ;
struct mlxsw_pci_queue {scalar_t__ num; TYPE_2__ u; } ;
struct mlxsw_pci {scalar_t__ max_cqe_ver; scalar_t__ num_sdq_cqs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct mlxsw_pci *VAR_2,
      struct mlxsw_pci_queue *VAR_3)
{
 VAR_3->u.cq.v = VAR_2->max_cqe_ver;


 if (VAR_3->u.cq.v == VAR_1 &&
     VAR_3->num < VAR_2->num_sdq_cqs)
  VAR_3->u.cq.v = VAR_0;
}
