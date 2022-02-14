
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ixgbe_mac_info {scalar_t__ type; } ;
struct TYPE_2__ {int lan_id; } ;
struct ixgbe_hw {struct ixgbe_mac_info mac; TYPE_1__ bus; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ,int ,int ) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_7, ixgbe_link_speed *VAR_8)
{
 struct ixgbe_mac_info *VAR_9 = &VAR_7->mac;
 s32 VAR_10;
 u32 VAR_11;


 if (VAR_9->type != VAR_6)
  return VAR_0;


 VAR_10 = FUNC_1(VAR_7,
     FUNC_0(VAR_7->bus.lan_id),
     VAR_5, &VAR_11);
 if (VAR_10)
  return VAR_10;

 VAR_11 &= ~VAR_1;
 VAR_11 &= ~VAR_4;


 switch (*VAR_8) {
 case 129:
  VAR_11 |= VAR_2;
  break;
 case 128:
  VAR_11 |= VAR_3;
  break;
 default:

  return VAR_0;
 }

 VAR_10 = FUNC_4(VAR_7,
    FUNC_0(VAR_7->bus.lan_id),
    VAR_5, VAR_11);
 if (VAR_10)
  return VAR_10;


 if (VAR_7->mac.type == VAR_6) {
  VAR_10 = FUNC_3(VAR_7);
  if (VAR_10)
   return VAR_10;
 }


 VAR_10 = FUNC_2(VAR_7);

 return VAR_10;
}
