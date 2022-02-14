
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_tunnel_info {int sa_family; int port; } ;
struct list_head {int dummy; } ;
struct fm10k_udp_port {int list; int sa_family; int port; } ;


 int VAR_0 ;
 struct fm10k_udp_port* FUNC_0 (struct list_head*,struct udp_tunnel_info*) ;
 struct fm10k_udp_port* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;

__attribute__((used)) static void FUNC_3(struct list_head *VAR_1,
         struct udp_tunnel_info *VAR_2)
{
 struct fm10k_udp_port *VAR_3;




 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3) {
  VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
  if (!VAR_3)
   return;
  VAR_3->port = VAR_2->port;
  VAR_3->sa_family = VAR_2->sa_family;
 }

 FUNC_2(&VAR_3->list, VAR_1);
}
