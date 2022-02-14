
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dst; } ;
struct TYPE_5__ {scalar_t__ dst; } ;
struct TYPE_8__ {TYPE_2__ ipv6; TYPE_1__ ipv4; } ;
struct TYPE_7__ {TYPE_4__ u; } ;
struct ip_tunnel_info {TYPE_3__ key; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ip_tunnel_info*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool FUNC_2(struct ip_tunnel_info *VAR_1,
      struct ip_tunnel_info *VAR_2)
{
 if (FUNC_0(VAR_1) == VAR_0)
  return VAR_1->key.u.ipv4.dst == VAR_2->key.u.ipv4.dst;
 else
  return FUNC_1(&VAR_1->key.u.ipv6.dst, &VAR_2->key.u.ipv6.dst);
}
