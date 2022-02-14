
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int len; int addr; } ;
union mgmt_port_ring_entry {scalar_t__ d64; TYPE_1__ s; } ;
struct sk_buff {int data; } ;
struct octeon_mgmt {scalar_t__ rx_current_fill; size_t rx_next_fill; scalar_t__ mix; int rx_ring_handle; int dev; scalar_t__* rx_ring; int rx_list; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,int ,unsigned int,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct sk_buff* FUNC_4 (struct net_device*,unsigned int) ;
 struct octeon_mgmt* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_6)
{
 struct octeon_mgmt *VAR_7 = FUNC_5(VAR_6);

 while (VAR_7->rx_current_fill < FUNC_6(VAR_5)) {
  unsigned int VAR_8;
  union mgmt_port_ring_entry VAR_9;
  struct sk_buff *VAR_10;


  VAR_8 = VAR_6->mtu + VAR_4 + 8 + VAR_3;

  VAR_10 = FUNC_4(VAR_6, VAR_8);
  if (!VAR_10)
   break;
  FUNC_8(VAR_10, VAR_3);
  FUNC_0(&VAR_7->rx_list, VAR_10);

  VAR_9.d64 = 0;
  VAR_9.s.len = VAR_8;
  VAR_9.s.addr = FUNC_2(VAR_7->dev, VAR_10->data,
        VAR_8,
        VAR_1);


  VAR_7->rx_ring[VAR_7->rx_next_fill] = VAR_9.d64;
  FUNC_3(VAR_7->dev, VAR_7->rx_ring_handle,
        FUNC_7(VAR_5),
        VAR_0);
  VAR_7->rx_next_fill =
   (VAR_7->rx_next_fill + 1) % VAR_5;
  VAR_7->rx_current_fill++;

  FUNC_1(VAR_7->mix + VAR_2, 1);
 }
}
