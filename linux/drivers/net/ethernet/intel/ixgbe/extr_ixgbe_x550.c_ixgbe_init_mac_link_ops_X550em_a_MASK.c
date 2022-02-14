
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* get_media_type ) (struct ixgbe_hw*) ;int * setup_fc; int fc_autoneg; int check_link; int setup_link; } ;
struct ixgbe_mac_info {TYPE_1__ ops; } ;
struct ixgbe_hw {int device_id; struct ixgbe_mac_info mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;



 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ixgbe_hw*) ;

__attribute__((used)) static void FUNC_1(struct ixgbe_hw *VAR_10)
{
 struct ixgbe_mac_info *VAR_11 = &VAR_10->mac;

 switch (VAR_11->ops.get_media_type(VAR_10)) {
 case 128:
  VAR_11->ops.setup_fc = ((void*)0);
  VAR_11->ops.fc_autoneg = VAR_4;
  break;
 case 129:
  if (VAR_10->device_id != VAR_0 &&
      VAR_10->device_id != VAR_1) {
   VAR_11->ops.setup_link = VAR_8;
   break;
  }
  VAR_11->ops.fc_autoneg = VAR_6;
  VAR_11->ops.setup_fc = VAR_5;
  VAR_11->ops.setup_link = VAR_9;
  VAR_11->ops.check_link = VAR_2;
  break;
 case 130:
  VAR_11->ops.fc_autoneg = VAR_3;
  VAR_11->ops.setup_fc = VAR_7;
  break;
 default:
  break;
 }
}
