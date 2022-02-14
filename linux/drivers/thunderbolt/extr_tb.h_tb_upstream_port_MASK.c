
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t upstream_port_number; } ;
struct tb_switch {TYPE_1__ config; struct tb_port* ports; } ;
struct tb_port {int dummy; } ;



__attribute__((used)) static inline struct tb_port *FUNC_0(struct tb_switch *VAR_0)
{
 return &VAR_0->ports[VAR_0->config.upstream_port_number];
}
