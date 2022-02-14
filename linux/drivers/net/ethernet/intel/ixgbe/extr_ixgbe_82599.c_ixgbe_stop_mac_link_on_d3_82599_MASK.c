
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* read ) (struct ixgbe_hw*,int ,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {int wol_enabled; TYPE_2__ eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int*) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_hw *VAR_4)
{
 u32 VAR_5;
 u16 VAR_6 = 0;

 VAR_4->eeprom.ops.read(VAR_4, VAR_3, &VAR_6);

 if (!FUNC_2(VAR_4) && !VAR_4->wol_enabled &&
     VAR_6 & VAR_2) {
  VAR_5 = FUNC_0(VAR_4, VAR_0);
  VAR_5 |= VAR_1;
  FUNC_1(VAR_4, VAR_0, VAR_5);
 }
}
