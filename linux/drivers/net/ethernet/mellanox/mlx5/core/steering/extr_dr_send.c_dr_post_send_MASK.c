
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct postsend_info {int read; int rkey; int remote_addr; int write; } ;
struct mlx5dr_qp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5dr_qp*,int ,int ,int *,int ,int) ;

__attribute__((used)) static void FUNC_1(struct mlx5dr_qp *VAR_2, struct postsend_info *VAR_3)
{
 FUNC_0(VAR_2, VAR_3->remote_addr, VAR_3->rkey,
    &VAR_3->write, VAR_1, 0);
 FUNC_0(VAR_2, VAR_3->remote_addr, VAR_3->rkey,
    &VAR_3->read, VAR_0, 1);
}
