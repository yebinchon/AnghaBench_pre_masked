
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ setup_led; } ;
struct TYPE_6__ {int ledctl_default; int ledctl_mode1; TYPE_1__ ops; } ;
struct TYPE_5__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_2__ phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

s32 FUNC_2(struct e1000_hw *VAR_9)
{
 u32 VAR_10;

 if (VAR_9->mac.ops.setup_led != FUNC_2)
  return -VAR_0;

 if (VAR_9->phy.media_type == VAR_8) {
  VAR_10 = FUNC_0(VAR_6);
  VAR_9->mac.ledctl_default = VAR_10;

  VAR_10 &= ~(VAR_2 | VAR_1 |
       VAR_3);
  VAR_10 |= (VAR_5 <<
      VAR_4);
  FUNC_1(VAR_6, VAR_10);
 } else if (VAR_9->phy.media_type == VAR_7) {
  FUNC_1(VAR_6, VAR_9->mac.ledctl_mode1);
 }

 return 0;
}
