
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int (* commit ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; int type; int media_type; } ;
struct TYPE_4__ {int type; int autoneg; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
struct e1000_adapter {int tx_fifo_head; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;



 int VAR_11 ;
 int VAR_12 ;


 int VAR_13 ;
 int FUNC_1 () ;
 int FUNC_2 (struct e1000_hw*,int ,int*) ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(struct e1000_adapter *VAR_14)
{
 struct e1000_hw *VAR_15 = &VAR_14->hw;
 u32 VAR_16, VAR_17, VAR_18;
 u16 VAR_19;

 VAR_16 = FUNC_4(VAR_9);
 VAR_16 &= ~(VAR_4 | VAR_3);
 FUNC_5(VAR_9, VAR_16);

 switch (VAR_15->mac.type) {
 case 128:
 case 129:
  VAR_17 = FUNC_4(VAR_6);
  VAR_17 &= ~VAR_2;
  FUNC_5(VAR_6, VAR_17);
  VAR_18 = FUNC_4(FUNC_0(0));


  VAR_18 &= 0xcfffffff;
  FUNC_5(FUNC_0(0), VAR_18);

 case 132:
  if (VAR_15->phy.media_type == VAR_11 ||
      VAR_15->phy.media_type == VAR_12) {

   FUNC_5(VAR_1, VAR_14->tx_fifo_head);
   VAR_14->tx_fifo_head = 0;
  }

 case 131:
 case 130:
  if (VAR_15->phy.media_type == VAR_11 ||
      VAR_15->phy.media_type == VAR_12) {
   FUNC_5(VAR_10, VAR_5);
   FUNC_1();
   FUNC_7(10000, 11000);
   break;
  }

 default:
  VAR_15->mac.autoneg = 1;
  if (VAR_15->phy.type == VAR_13)
   FUNC_3(VAR_15, VAR_7, 0x180);
  FUNC_2(VAR_15, VAR_8, &VAR_19);
  if (VAR_19 & VAR_0) {
   VAR_19 &= ~VAR_0;
   FUNC_3(VAR_15, VAR_8, VAR_19);
   if (VAR_15->phy.ops.commit)
    VAR_15->phy.ops.commit(VAR_15);
  }
  break;
 }
}
