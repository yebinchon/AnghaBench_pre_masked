
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tp_dst; } ;
struct ip_tunnel_info {TYPE_1__ key; } ;
typedef int __u16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ip_tunnel_info*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ip_tunnel_info *VAR_0, __u16 VAR_1)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->key.tp_dst = FUNC_0(VAR_1);
}
