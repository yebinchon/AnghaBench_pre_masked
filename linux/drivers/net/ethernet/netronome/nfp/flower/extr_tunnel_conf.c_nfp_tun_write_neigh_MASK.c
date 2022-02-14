
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_tun_neigh {int dst_ipv4; int port_id; int dst_addr; int src_addr; int src_ipv4; } ;
struct nfp_app {int dummy; } ;
struct net_device {int dev_addr; } ;
struct neighbour {int nud_state; scalar_t__ dead; } ;
struct flowi4 {int saddr; int daddr; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nfp_tun_neigh*,int ,int) ;
 int FUNC_3 (struct neighbour*,int *) ;
 int FUNC_4 (int ,struct neighbour*,struct net_device*) ;
 int FUNC_5 (struct nfp_app*,struct net_device*) ;
 int FUNC_6 (struct nfp_app*,int ,int,unsigned char*,int ) ;
 int FUNC_7 (struct nfp_app*,int ) ;
 int FUNC_8 (struct nfp_app*,int ) ;

__attribute__((used)) static void
FUNC_9(struct net_device *VAR_2, struct nfp_app *VAR_3,
      struct flowi4 *VAR_4, struct neighbour *VAR_5, gfp_t VAR_6)
{
 struct nfp_tun_neigh VAR_7;
 u32 VAR_8;

 VAR_8 = FUNC_5(VAR_3, VAR_2);
 if (!VAR_8)
  return;

 FUNC_2(&VAR_7, 0, sizeof(struct nfp_tun_neigh));
 VAR_7.dst_ipv4 = VAR_4->daddr;


 if (!(VAR_5->nud_state & VAR_1) || VAR_5->dead) {
  FUNC_8(VAR_3, VAR_7.dst_ipv4);

  FUNC_3(VAR_5, ((void*)0));
  goto send_msg;
 }


 VAR_7.src_ipv4 = VAR_4->saddr;
 FUNC_1(VAR_7.src_addr, VAR_2->dev_addr);
 FUNC_4(VAR_7.dst_addr, VAR_5, VAR_2);
 VAR_7.port_id = FUNC_0(VAR_8);

 FUNC_7(VAR_3, VAR_7.dst_ipv4);

send_msg:
 FUNC_6(VAR_3, VAR_0,
     sizeof(struct nfp_tun_neigh),
     (unsigned char *)&VAR_7, VAR_6);
}
