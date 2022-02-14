
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_icosq {scalar_t__ cc; scalar_t__ pc; int sqn; } ;


 int FUNC_0 (int,char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mlx5e_icosq *VAR_0)
{
 FUNC_0(VAR_0->cc != VAR_0->pc, "ICOSQ 0x%x: cc (0x%x) != pc (0x%x)\n",
    VAR_0->sqn, VAR_0->cc, VAR_0->pc);
 VAR_0->cc = 0;
 VAR_0->pc = 0;
}
