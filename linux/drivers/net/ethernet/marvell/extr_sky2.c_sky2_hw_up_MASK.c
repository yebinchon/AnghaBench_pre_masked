
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sky2_port {unsigned int port; TYPE_1__* netdev; scalar_t__ tx_ring_size; int tx_le_map; struct sky2_hw* hw; } ;
struct sky2_hw {scalar_t__ chip_id; scalar_t__ chip_rev; int pdev; struct net_device** dev; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int features; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ) ;
 int * VAR_16 ;
 int FUNC_6 (struct sky2_hw*,unsigned int) ;
 int FUNC_7 (struct sky2_hw*,scalar_t__) ;
 int FUNC_8 (struct sky2_hw*,scalar_t__,int ) ;
 int FUNC_9 (struct sky2_hw*,int ,int ,scalar_t__) ;
 int FUNC_10 (struct sky2_hw*,int ) ;
 int FUNC_11 (struct sky2_hw*,int ,int,int) ;
 int FUNC_12 (struct sky2_hw*,int ) ;
 int FUNC_13 (struct sky2_port*) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (struct sky2_hw*,int ,int ) ;
 int FUNC_16 (struct sky2_hw*,int ,int ) ;
 int FUNC_17 (struct sky2_hw*,int ,int ) ;
 int FUNC_18 (struct sky2_port*) ;
 int * VAR_17 ;

__attribute__((used)) static void FUNC_19(struct sky2_port *VAR_18)
{
 struct sky2_hw *VAR_19 = VAR_18->hw;
 unsigned VAR_20 = VAR_18->port;
 u32 VAR_21;
 int VAR_22;
 struct net_device *VAR_23 = VAR_19->dev[VAR_18->port^1];

 FUNC_18(VAR_18);





 if (VAR_23 && FUNC_4(VAR_23) &&
      (VAR_22 = FUNC_5(VAR_19->pdev, VAR_7))) {
   u16 VAR_24;

  VAR_24 = FUNC_7(VAR_19, VAR_22 + VAR_8);
   VAR_24 &= ~VAR_9;
   FUNC_8(VAR_19, VAR_22 + VAR_8, VAR_24);
 }

 FUNC_6(VAR_19, VAR_20);


 VAR_21 = FUNC_12(VAR_19, VAR_0) * 4;
 if (VAR_21 > 0) {
  u32 VAR_25;

  FUNC_2(VAR_18->netdev, "ram buffer %dK\n", VAR_21);
  if (VAR_21 < 16)
   VAR_25 = VAR_21 / 2;
  else
   VAR_25 = 8 + (2*(VAR_21 - 16))/3;

  FUNC_11(VAR_19, VAR_16[VAR_20], 0, VAR_25);
  FUNC_11(VAR_19, VAR_17[VAR_20], VAR_25, VAR_21 - VAR_25);


  FUNC_17(VAR_19, FUNC_1(VAR_20 == 0 ? VAR_12 : VAR_13, VAR_14),
       VAR_15);
 }

 FUNC_10(VAR_19, VAR_17[VAR_20]);


 if (VAR_19->chip_id == VAR_2 && VAR_19->chip_rev == VAR_4)
  FUNC_16(VAR_19, FUNC_0(VAR_17[VAR_20], VAR_11), VAR_6);


 if (VAR_19->chip_id == VAR_1 &&
     VAR_19->chip_rev == VAR_3)
  FUNC_15(VAR_19, FUNC_0(VAR_17[VAR_20], VAR_10), VAR_5);

 FUNC_9(VAR_19, VAR_17[VAR_20], VAR_18->tx_le_map,
      VAR_18->tx_ring_size - 1);

 FUNC_14(VAR_18->netdev, VAR_18->netdev->features);
 FUNC_3(VAR_18->netdev);

 FUNC_13(VAR_18);
}
