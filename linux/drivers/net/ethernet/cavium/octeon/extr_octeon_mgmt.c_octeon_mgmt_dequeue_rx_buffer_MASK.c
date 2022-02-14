
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
union mgmt_port_ring_entry {int d64; TYPE_1__ s; } ;
typedef int u64 ;
struct sk_buff {int dummy; } ;
struct octeon_mgmt {size_t rx_next; int dev; int rx_list; int rx_current_fill; int * rx_ring; int rx_ring_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static u64 FUNC_4(struct octeon_mgmt *VAR_5,
      struct sk_buff **VAR_6)
{
 union mgmt_port_ring_entry VAR_7;

 FUNC_1(VAR_5->dev, VAR_5->rx_ring_handle,
    FUNC_3(VAR_4),
    VAR_0);

 VAR_7.d64 = VAR_5->rx_ring[VAR_5->rx_next];
 VAR_5->rx_next = (VAR_5->rx_next + 1) % VAR_4;
 VAR_5->rx_current_fill--;
 *VAR_6 = FUNC_0(&VAR_5->rx_list);

 FUNC_2(VAR_5->dev, VAR_7.s.addr,
    VAR_2 + VAR_3,
    VAR_1);

 return VAR_7.d64;
}
