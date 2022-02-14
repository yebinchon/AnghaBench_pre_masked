
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int u; scalar_t__ tp_src; scalar_t__ label; scalar_t__ ttl; scalar_t__ tos; scalar_t__ tun_flags; scalar_t__ tun_id; } ;
struct ip_tunnel_info {TYPE_1__ key; } ;


 scalar_t__ FUNC_0 (int *,int ,int) ;

__attribute__((used)) static bool FUNC_1(const struct ip_tunnel_info *VAR_0)
{
 return !(VAR_0->key.tun_id || VAR_0->key.tun_flags || VAR_0->key.tos ||
   VAR_0->key.ttl || VAR_0->key.label || VAR_0->key.tp_src ||
   FUNC_0(&VAR_0->key.u, 0, sizeof(VAR_0->key.u)));
}
