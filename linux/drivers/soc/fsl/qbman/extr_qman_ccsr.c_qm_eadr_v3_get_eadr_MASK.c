
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_eadr {int info; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const struct qm_eadr *VAR_0)
{
 return VAR_0->info & (FUNC_0(16) - 1);
}
