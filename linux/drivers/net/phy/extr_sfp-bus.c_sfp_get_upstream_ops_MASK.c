
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp_upstream_ops {int dummy; } ;
struct sfp_bus {struct sfp_upstream_ops const* upstream_ops; scalar_t__ registered; } ;



__attribute__((used)) static const struct sfp_upstream_ops *FUNC_0(struct sfp_bus *VAR_0)
{
 return VAR_0->registered ? VAR_0->upstream_ops : ((void*)0);
}
