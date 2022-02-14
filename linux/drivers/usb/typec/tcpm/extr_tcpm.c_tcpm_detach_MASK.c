
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {scalar_t__ hard_reset_count; int attached; } ;


 scalar_t__ FUNC_0 (struct tcpm_port*) ;
 int FUNC_1 (struct tcpm_port*) ;

__attribute__((used)) static void FUNC_2(struct tcpm_port *VAR_0)
{
 if (!VAR_0->attached)
  return;

 if (FUNC_0(VAR_0))
  VAR_0->hard_reset_count = 0;

 FUNC_1(VAR_0);
}
