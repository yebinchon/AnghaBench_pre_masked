
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_port {scalar_t__ link_nr; scalar_t__ dual_link_port; int remote; } ;


 scalar_t__ FUNC_0 (struct tb_port const*) ;

__attribute__((used)) static inline bool FUNC_1(const struct tb_port *VAR_0)
{
 if (FUNC_0(VAR_0))
  return 0;
 if (!VAR_0->remote)
  return 0;
 if (VAR_0->dual_link_port && VAR_0->link_nr)
  return 0;

 return 1;
}
