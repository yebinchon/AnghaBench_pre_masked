
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {scalar_t__ lan_id; } ;
struct TYPE_7__ {scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_6__ {int ctrl_word_3; } ;
struct ixgbe_hw {TYPE_1__ bus; TYPE_4__ phy; TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ,int ,int*) ;

__attribute__((used)) static s32 FUNC_1(struct ixgbe_hw *VAR_8,
      ixgbe_link_speed *VAR_9)
{
 u16 VAR_10;
 s32 VAR_11;
 u16 VAR_12 = VAR_8->eeprom.ctrl_word_3;

 *VAR_9 = VAR_4;

 VAR_11 = VAR_8->phy.ops.read_reg(VAR_8, VAR_1,
          VAR_5,
          &VAR_10);
 if (VAR_11)
  return VAR_11;


 if (VAR_10 & VAR_0) {
  *VAR_9 = VAR_3;
  return VAR_11;
 }


 if ((VAR_8->bus.lan_id && (VAR_12 & VAR_7)) ||
     (VAR_12 & VAR_6))
  return VAR_11;


 *VAR_9 = VAR_2;
 return VAR_11;
}
