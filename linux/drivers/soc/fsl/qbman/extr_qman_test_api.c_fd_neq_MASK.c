
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_fd {scalar_t__ cfg; scalar_t__ cmd; } ;


 scalar_t__ FUNC_0 (struct qm_fd const*) ;
 scalar_t__ FUNC_1 (struct qm_fd const*) ;

__attribute__((used)) static bool FUNC_2(const struct qm_fd *VAR_0, const struct qm_fd *VAR_1)
{
 bool VAR_2 = FUNC_0(VAR_0) != FUNC_0(VAR_1);

 VAR_2 |= FUNC_1(VAR_0) != FUNC_1(VAR_1);
 VAR_2 |= VAR_0->cfg != VAR_1->cfg;
 VAR_2 |= VAR_0->cmd != VAR_1->cmd;

 return VAR_2;
}
