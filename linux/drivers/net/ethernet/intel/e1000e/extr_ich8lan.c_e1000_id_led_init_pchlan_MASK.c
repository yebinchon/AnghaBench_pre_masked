
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct e1000_mac_info {int ledctl_default; int ledctl_mode1; int ledctl_mode2; } ;
struct TYPE_3__ {scalar_t__ (* valid_led_default ) (struct e1000_hw*,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ nvm; struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int*) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_5)
{
 struct e1000_mac_info *VAR_6 = &VAR_5->mac;
 s32 VAR_7;
 const u32 VAR_8 = VAR_1;
 const u32 VAR_9 = VAR_1 | VAR_2;
 u16 VAR_10, VAR_11, VAR_12, VAR_13;


 VAR_7 = VAR_5->nvm.ops.valid_led_default(VAR_5, &VAR_10);
 if (VAR_7)
  return VAR_7;

 VAR_6->ledctl_default = FUNC_0(VAR_4);
 VAR_6->ledctl_mode1 = VAR_6->ledctl_default;
 VAR_6->ledctl_mode2 = VAR_6->ledctl_default;

 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
  VAR_12 = (VAR_10 >> (VAR_11 << 2)) & VAR_0;
  VAR_13 = (VAR_11 * 5);
  switch (VAR_12) {
  case 130:
  case 128:
  case 129:
   VAR_6->ledctl_mode1 &= ~(VAR_3 << VAR_13);
   VAR_6->ledctl_mode1 |= (VAR_8 << VAR_13);
   break;
  case 133:
  case 131:
  case 132:
   VAR_6->ledctl_mode1 &= ~(VAR_3 << VAR_13);
   VAR_6->ledctl_mode1 |= (VAR_9 << VAR_13);
   break;
  default:

   break;
  }
  switch (VAR_12) {
  case 134:
  case 128:
  case 131:
   VAR_6->ledctl_mode2 &= ~(VAR_3 << VAR_13);
   VAR_6->ledctl_mode2 |= (VAR_8 << VAR_13);
   break;
  case 135:
  case 129:
  case 132:
   VAR_6->ledctl_mode2 &= ~(VAR_3 << VAR_13);
   VAR_6->ledctl_mode2 |= (VAR_9 << VAR_13);
   break;
  default:

   break;
  }
 }

 return 0;
}
