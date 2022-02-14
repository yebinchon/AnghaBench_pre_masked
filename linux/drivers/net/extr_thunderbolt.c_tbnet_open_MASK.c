
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {struct tb_ring* ring; } ;
struct TYPE_5__ {struct tb_ring* ring; } ;
struct tbnet {int napi; TYPE_3__ rx_ring; TYPE_2__ tx_ring; struct tb_xdomain* xd; } ;
struct tb_xdomain {TYPE_1__* tb; } ;
struct tb_ring {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int nhi; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct tbnet* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct tbnet*) ;
 struct tb_ring* FUNC_6 (int ,int,int ,int,int ,int ,int ,struct tbnet*) ;
 struct tb_ring* FUNC_7 (int ,int,int ,int) ;
 int FUNC_8 (struct tb_ring*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_7)
{
 struct tbnet *VAR_8 = FUNC_3(VAR_7);
 struct tb_xdomain *VAR_9 = VAR_8->xd;
 u16 VAR_10, VAR_11;
 struct tb_ring *VAR_12;

 FUNC_4(VAR_7);

 VAR_12 = FUNC_7(VAR_9->tb->nhi, -1, VAR_5,
    VAR_2);
 if (!VAR_12) {
  FUNC_2(VAR_7, "failed to allocate Tx ring\n");
  return -VAR_0;
 }
 VAR_8->tx_ring.ring = VAR_12;

 VAR_10 = FUNC_0(VAR_4);
 VAR_11 = FUNC_0(VAR_3);

 VAR_12 = FUNC_6(VAR_9->tb->nhi, -1, VAR_5,
    VAR_2 | VAR_1, VAR_10,
    VAR_11, VAR_6, VAR_8);
 if (!VAR_12) {
  FUNC_2(VAR_7, "failed to allocate Rx ring\n");
  FUNC_8(VAR_8->tx_ring.ring);
  VAR_8->tx_ring.ring = ((void*)0);
  return -VAR_0;
 }
 VAR_8->rx_ring.ring = VAR_12;

 FUNC_1(&VAR_8->napi);
 FUNC_5(VAR_8);

 return 0;
}
