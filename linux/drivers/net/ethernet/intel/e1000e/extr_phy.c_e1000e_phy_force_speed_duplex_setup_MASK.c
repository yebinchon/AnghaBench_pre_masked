
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int (* config_collision_dist ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {int forced_speed_duplex; TYPE_2__ ops; } ;
struct TYPE_3__ {int current_mode; } ;
struct e1000_hw {struct e1000_mac_info mac; TYPE_1__ fc; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct e1000_hw*) ;

void FUNC_4(struct e1000_hw *VAR_15, u16 *VAR_16)
{
 struct e1000_mac_info *VAR_17 = &VAR_15->mac;
 u32 VAR_18;


 VAR_15->fc.current_mode = VAR_14;


 VAR_18 = FUNC_1(VAR_4);
 VAR_18 |= (VAR_10 | VAR_9);
 VAR_18 &= ~VAR_13;


 VAR_18 &= ~VAR_7;


 *VAR_16 &= ~VAR_0;


 if (VAR_17->forced_speed_duplex & VAR_6) {
  VAR_18 &= ~VAR_8;
  *VAR_16 &= ~VAR_1;
  FUNC_0("Half Duplex\n");
 } else {
  VAR_18 |= VAR_8;
  *VAR_16 |= VAR_1;
  FUNC_0("Full Duplex\n");
 }


 if (VAR_17->forced_speed_duplex & VAR_5) {
  VAR_18 |= VAR_11;
  *VAR_16 |= VAR_2;
  *VAR_16 &= ~VAR_3;
  FUNC_0("Forcing 100mb\n");
 } else {
  VAR_18 &= ~(VAR_12 | VAR_11);
  *VAR_16 &= ~(VAR_3 | VAR_2);
  FUNC_0("Forcing 10mb\n");
 }

 VAR_15->mac.ops.config_collision_dist(VAR_15);

 FUNC_2(VAR_4, VAR_18);
}
