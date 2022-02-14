
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int s_addr; } ;
struct sockaddr_in {int sin_family; int sin_port; TYPE_2__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct dst_entry {int dummy; } ;
struct rtable {int rt_flags; struct dst_entry dst; } ;
struct net_device {int flags; unsigned int mtu; int name; } ;
struct neighbour {struct net_device* dev; } ;
struct flowi4 {int saddr; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_10__ {TYPE_4__ sin_addr; int sin_family; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_8__ {int sin_family; int sin_port; TYPE_1__ sin_addr; } ;
struct cxgbi_sock {int port_id; unsigned int mtu; TYPE_5__ saddr; TYPE_3__ daddr; int csk_family; struct dst_entry* dst; struct cxgbi_device* cdev; } ;
struct cxgbi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cxgbi_sock* FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 struct cxgbi_device* FUNC_3 (struct net_device*,int*) ;
 struct cxgbi_device* FUNC_4 (struct net_device*,int*) ;
 struct cxgbi_sock* FUNC_5 (struct cxgbi_device*) ;
 struct neighbour* FUNC_6 (struct dst_entry*,int *) ;
 struct rtable* FUNC_7 (struct flowi4*,int ,int ,int ,int ,int ,int) ;
 int VAR_10 ;
 struct net_device* FUNC_8 (int *,int ) ;
 int FUNC_9 (struct rtable*) ;
 int FUNC_10 (int,char*,int *,int ,int,int ,struct cxgbi_device*) ;
 int FUNC_11 (struct neighbour*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,int *,...) ;

__attribute__((used)) static struct cxgbi_sock *
FUNC_15(struct sockaddr *VAR_11, int VAR_12)
{
 struct sockaddr_in *VAR_13 = (struct sockaddr_in *)VAR_11;
 struct dst_entry *VAR_14;
 struct net_device *VAR_15;
 struct cxgbi_device *VAR_16;
 struct rtable *VAR_17 = ((void*)0);
 struct neighbour *VAR_18;
 struct flowi4 VAR_19;
 struct cxgbi_sock *VAR_20 = ((void*)0);
 unsigned int VAR_21 = 0;
 int VAR_22 = 0xFFFF;
 int VAR_23 = 0;

 VAR_17 = FUNC_7(&VAR_19, 0, VAR_13->sin_addr.s_addr, 0,
        VAR_13->sin_port, 0, VAR_12);
 if (!VAR_17) {
  FUNC_14("no route to ipv4 0x%x, port %u.\n",
   FUNC_2(VAR_13->sin_addr.s_addr),
   FUNC_1(VAR_13->sin_port));
  VAR_23 = -VAR_3;
  goto err_out;
 }
 VAR_14 = &VAR_17->dst;
 VAR_18 = FUNC_6(VAR_14, &VAR_13->sin_addr.s_addr);
 if (!VAR_18) {
  VAR_23 = -VAR_4;
  goto rel_rt;
 }
 VAR_15 = VAR_18->dev;

 if (VAR_17->rt_flags & (VAR_9 | VAR_8)) {
  FUNC_14("multi-cast route %pI4, port %u, dev %s.\n",
   &VAR_13->sin_addr.s_addr, FUNC_13(VAR_13->sin_port),
   VAR_15->name);
  VAR_23 = -VAR_3;
  goto rel_neigh;
 }

 if (VAR_15->flags & VAR_6) {
  VAR_15 = FUNC_8(&VAR_10, VAR_13->sin_addr.s_addr);
  if (!VAR_15) {
   VAR_23 = -VAR_3;
   goto rel_neigh;
  }
  VAR_21 = VAR_15->mtu;
  FUNC_14("rt dev %s, loopback -> %s, mtu %u.\n",
   &VAR_18->dev->name, VAR_15->name, VAR_21);
 }

 if (!(VAR_15->flags & VAR_7) || !FUNC_12(VAR_15)) {
  FUNC_14("%s interface not up.\n", &VAR_15->name);
  VAR_23 = -VAR_2;
  goto rel_neigh;
 }

 VAR_16 = FUNC_4(VAR_15, &VAR_22);
 if (!VAR_16)
  VAR_16 = FUNC_3(VAR_15, &VAR_22);
 if (!VAR_16) {
  FUNC_14("dst %pI4, %s, NOT cxgbi device.\n",
   &VAR_13->sin_addr.s_addr, VAR_15->name);
  VAR_23 = -VAR_3;
  goto rel_neigh;
 }
 FUNC_10(1 << VAR_1,
  "route to %pI4 :%u, ndev p#%d,%s, cdev 0x%p.\n",
  &VAR_13->sin_addr.s_addr, FUNC_13(VAR_13->sin_port),
      VAR_22, VAR_15->name, VAR_16);

 VAR_20 = FUNC_5(VAR_16);
 if (!VAR_20) {
  VAR_23 = -VAR_5;
  goto rel_neigh;
 }
 VAR_20->cdev = VAR_16;
 VAR_20->port_id = VAR_22;
 VAR_20->mtu = VAR_21;
 VAR_20->dst = VAR_14;

 VAR_20->csk_family = VAR_0;
 VAR_20->daddr.sin_addr.s_addr = VAR_13->sin_addr.s_addr;
 VAR_20->daddr.sin_port = VAR_13->sin_port;
 VAR_20->daddr.sin_family = VAR_13->sin_family;
 VAR_20->saddr.sin_family = VAR_13->sin_family;
 VAR_20->saddr.sin_addr.s_addr = VAR_19;
 FUNC_11(VAR_18);

 return VAR_20;

rel_neigh:
 FUNC_11(VAR_18);

rel_rt:
 FUNC_9(VAR_17);
err_out:
 return FUNC_0(VAR_23);
}
