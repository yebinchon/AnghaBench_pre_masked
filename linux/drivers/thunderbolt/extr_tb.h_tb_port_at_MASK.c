
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
struct TYPE_2__ {int depth; size_t max_port_number; } ;
struct tb_switch {struct tb_port* ports; TYPE_1__ config; } ;
struct tb_port {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline struct tb_port *FUNC_1(u64 VAR_0, struct tb_switch *VAR_1)
{
 u8 VAR_2;

 VAR_2 = VAR_0 >> (VAR_1->config.depth * 8);
 if (FUNC_0(VAR_2 > VAR_1->config.max_port_number))
  return ((void*)0);
 return &VAR_1->ports[VAR_2];
}
