
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int route_lo; scalar_t__ route_hi; } ;
struct tb_switch {TYPE_1__ config; } ;



__attribute__((used)) static inline u64 FUNC_0(const struct tb_switch *VAR_0)
{
 return ((u64) VAR_0->config.route_hi) << 32 | VAR_0->config.route_lo;
}
