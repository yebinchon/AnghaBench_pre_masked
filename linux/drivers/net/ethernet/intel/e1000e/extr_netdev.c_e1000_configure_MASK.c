
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct e1000_ring {int dummy; } ;
struct e1000_adapter {int (* alloc_rx_buf ) (struct e1000_ring*,int ,int ) ;TYPE_1__* netdev; struct e1000_ring* rx_ring; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_ring*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_adapter*) ;
 int FUNC_5 (struct e1000_adapter*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct e1000_adapter*) ;
 int FUNC_8 (struct e1000_ring*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct e1000_adapter *VAR_2)
{
 struct e1000_ring *VAR_3 = VAR_2->rx_ring;

 FUNC_6(VAR_2->netdev);

 FUNC_4(VAR_2);
 FUNC_3(VAR_2);

 FUNC_1(VAR_2);

 if (VAR_2->netdev->features & VAR_1)
  FUNC_7(VAR_2);
 FUNC_5(VAR_2);
 FUNC_0(VAR_2);
 VAR_2->alloc_rx_buf(VAR_3, FUNC_2(VAR_3), VAR_0);
}
