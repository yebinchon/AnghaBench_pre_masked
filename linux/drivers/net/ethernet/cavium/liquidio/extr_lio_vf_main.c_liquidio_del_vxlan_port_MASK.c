
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_tunnel_info {scalar_t__ type; int port; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3,
        struct udp_tunnel_info *VAR_4)
{
 if (VAR_4->type != VAR_2)
  return;

 FUNC_1(VAR_3,
        VAR_0,
        FUNC_0(VAR_4->port),
        VAR_1);
}
