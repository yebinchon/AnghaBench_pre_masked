
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tb_cfg_header {int route_lo; scalar_t__ route_hi; } ;



__attribute__((used)) static inline u64 FUNC_0(const struct tb_cfg_header *VAR_0)
{
 return (u64) VAR_0->route_hi << 32 | VAR_0->route_lo;
}
