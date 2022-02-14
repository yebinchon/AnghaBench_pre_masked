
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_9__ {scalar_t__ (* read ) (struct ixgbe_hw*,int,int*) ;} ;
struct TYPE_10__ {TYPE_4__ ops; } ;
struct TYPE_8__ {scalar_t__ func; } ;
struct TYPE_6__ {int (* set_lan_id ) (struct ixgbe_hw*) ;} ;
struct TYPE_7__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_5__ eeprom; TYPE_3__ bus; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,char*,int) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int,int*) ;

s32 FUNC_4(struct ixgbe_hw *VAR_2, u8 *VAR_3)
{
 u16 VAR_4, VAR_5;
 u8 VAR_6;
 s32 VAR_7;





 VAR_7 = FUNC_1(VAR_2, &VAR_5);
 if (VAR_7 || VAR_5 == 0 || VAR_5 == 0xFFFF)

  goto san_mac_addr_clr;


 VAR_2->mac.ops.set_lan_id(VAR_2);

 (VAR_2->bus.func) ? (VAR_5 += VAR_1) :
    (VAR_5 += VAR_0);
 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  VAR_7 = VAR_2->eeprom.ops.read(VAR_2, VAR_5,
           &VAR_4);
  if (VAR_7) {
   FUNC_0(VAR_2, "eeprom read at offset %d failed\n",
          VAR_5);
   goto san_mac_addr_clr;
  }
  VAR_3[VAR_6 * 2] = (u8)(VAR_4);
  VAR_3[VAR_6 * 2 + 1] = (u8)(VAR_4 >> 8);
  VAR_5++;
 }
 return 0;

san_mac_addr_clr:



 for (VAR_6 = 0; VAR_6 < 6; VAR_6++)
  VAR_3[VAR_6] = 0xFF;
 return VAR_7;
}
