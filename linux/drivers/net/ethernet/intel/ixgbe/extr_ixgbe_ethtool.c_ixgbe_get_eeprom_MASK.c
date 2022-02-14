
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int (* read_buffer ) (struct ixgbe_hw*,int,int,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {int vendor_id; int device_id; TYPE_2__ eeprom; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;
struct ethtool_eeprom {int magic; int offset; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int *,int *,int ) ;
 struct ixgbe_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ixgbe_hw*,int,int,int*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3,
       struct ethtool_eeprom *VAR_4, u8 *VAR_5)
{
 struct ixgbe_adapter *VAR_6 = FUNC_4(VAR_3);
 struct ixgbe_hw *VAR_7 = &VAR_6->hw;
 u16 *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 int VAR_12 = 0;
 u16 VAR_13;

 if (VAR_4->len == 0)
  return -VAR_0;

 VAR_4->magic = VAR_7->vendor_id | (VAR_7->device_id << 16);

 VAR_9 = VAR_4->offset >> 1;
 VAR_10 = (VAR_4->offset + VAR_4->len - 1) >> 1;
 VAR_11 = VAR_10 - VAR_9 + 1;

 VAR_8 = FUNC_1(VAR_11, sizeof(u16), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_12 = VAR_7->eeprom.ops.read_buffer(VAR_7, VAR_9, VAR_11,
          VAR_8);


 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
  FUNC_2(&VAR_8[VAR_13]);

 FUNC_3(VAR_5, (u8 *)VAR_8 + (VAR_4->offset & 1), VAR_4->len);
 FUNC_0(VAR_8);

 return VAR_12;
}
