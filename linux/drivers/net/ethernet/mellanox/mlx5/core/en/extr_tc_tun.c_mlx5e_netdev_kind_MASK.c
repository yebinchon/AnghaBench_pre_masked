
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* rtnl_link_ops; } ;
struct TYPE_2__ {char const* kind; } ;



__attribute__((used)) static const char *FUNC_0(struct net_device *VAR_0)
{
 if (VAR_0->rtnl_link_ops)
  return VAR_0->rtnl_link_ops->kind;
 else
  return "unknown";
}
