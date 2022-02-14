
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_qp {int qpn; } ;


 int FUNC_0 (char*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct mlx5_core_qp *VAR_0, int VAR_1)
{
 FUNC_0("DR QP event %u on QP #%u\n", VAR_1, VAR_0->qpn);
}
