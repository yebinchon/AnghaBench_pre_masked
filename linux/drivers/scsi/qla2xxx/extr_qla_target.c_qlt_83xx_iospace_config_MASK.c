
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_hw_data {int msix_count; } ;


 int FUNC_0 () ;

void
FUNC_1(struct qla_hw_data *VAR_0)
{
 if (!FUNC_0())
  return;

 VAR_0->msix_count += 1;
}
