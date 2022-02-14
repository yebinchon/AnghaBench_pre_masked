
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sky2_port {size_t port; unsigned int rx_pending; struct rx_ring_info* rx_ring; TYPE_1__* netdev; int rx_le_map; scalar_t__ rx_next; scalar_t__ rx_put; struct sky2_hw* hw; } ;
struct sky2_hw {scalar_t__ chip_id; scalar_t__ chip_rev; int flags; int pdev; } ;
struct rx_ring_info {int dummy; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (size_t,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sky2_port*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 unsigned int* VAR_21 ;
 unsigned int FUNC_5 (struct sky2_port*) ;
 int FUNC_6 (struct sky2_hw*,unsigned int,int ,scalar_t__) ;
 int FUNC_7 (struct sky2_hw*,unsigned int) ;
 int FUNC_8 (struct sky2_port*,struct rx_ring_info*) ;
 int FUNC_9 (struct sky2_port*,unsigned int) ;
 int FUNC_10 (struct sky2_hw*,int ,unsigned int) ;
 int FUNC_11 (struct sky2_hw*,int ,int) ;
 unsigned int* VAR_22 ;

__attribute__((used)) static void FUNC_12(struct sky2_port *VAR_23)
{
 struct sky2_hw *VAR_24 = VAR_23->hw;
 struct rx_ring_info *VAR_25;
 unsigned VAR_26 = VAR_21[VAR_23->port];
 unsigned VAR_27, VAR_28;

 VAR_23->rx_put = VAR_23->rx_next = 0;
 FUNC_7(VAR_24, VAR_26);


 if (FUNC_2(VAR_24->pdev))
  FUNC_11(VAR_24, FUNC_0(VAR_26, VAR_7), VAR_0);



 if (VAR_24->chip_id == VAR_1 &&
     VAR_24->chip_rev > VAR_4)
  FUNC_11(VAR_24, FUNC_0(VAR_26, VAR_6), VAR_5);

 FUNC_6(VAR_24, VAR_26, VAR_23->rx_le_map, VAR_13 - 1);

 if (!(VAR_24->flags & VAR_17))
  FUNC_3(VAR_23);

 if (!(VAR_24->flags & VAR_18))
  FUNC_4(VAR_23->netdev, VAR_23->netdev->features);


 for (VAR_27 = 0; VAR_27 < VAR_23->rx_pending; VAR_27++) {
  VAR_25 = VAR_23->rx_ring + VAR_27;
  FUNC_8(VAR_23, VAR_25);
 }







 VAR_28 = FUNC_5(VAR_23);
 if (VAR_28 > 0x1ff)
  FUNC_11(VAR_24, FUNC_1(VAR_23->port, VAR_8), VAR_15);
 else {
  FUNC_10(VAR_24, FUNC_1(VAR_23->port, VAR_10), VAR_28);
  FUNC_11(VAR_24, FUNC_1(VAR_23->port, VAR_8), VAR_16);
 }


 FUNC_9(VAR_23, VAR_26);

 if (VAR_24->chip_id == VAR_2 ||
     VAR_24->chip_id == VAR_3) {







  FUNC_11(VAR_24, FUNC_1(VAR_23->port, VAR_8), VAR_14);
 }

 if (VAR_24->chip_id >= VAR_3) {

  FUNC_10(VAR_24, FUNC_1(VAR_23->port, VAR_9),
        VAR_12 | VAR_11);


  FUNC_11(VAR_24, FUNC_0(VAR_22[VAR_23->port], VAR_6),
        VAR_19 | VAR_20);
 }
}
