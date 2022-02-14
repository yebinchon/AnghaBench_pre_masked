
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int magic; int offset; int len; } ;
struct atl2_hw {int vendor_id; int device_id; } ;
struct atl2_adapter {struct atl2_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct atl2_hw*) ;
 int FUNC_1 (struct atl2_hw*,int,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 struct atl2_adapter* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4,
 struct ethtool_eeprom *VAR_5, u8 *VAR_6)
{
 struct atl2_adapter *VAR_7 = FUNC_5(VAR_4);
 struct atl2_hw *VAR_8 = &VAR_7->hw;
 u32 *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12 = 0;
 int VAR_13;

 if (VAR_5->len == 0)
  return -VAR_0;

 if (FUNC_0(VAR_8))
  return -VAR_0;

 VAR_5->magic = VAR_8->vendor_id | (VAR_8->device_id << 16);

 VAR_10 = VAR_5->offset >> 2;
 VAR_11 = (VAR_5->offset + VAR_5->len - 1) >> 2;

 VAR_9 = FUNC_3(VAR_11 - VAR_10 + 1, sizeof(u32),
        VAR_3);
 if (!VAR_9)
  return -VAR_2;

 for (VAR_13 = VAR_10; VAR_13 < VAR_11; VAR_13++) {
  if (!FUNC_1(VAR_8, VAR_13*4, &(VAR_9[VAR_13-VAR_10]))) {
   VAR_12 = -VAR_1;
   goto free;
  }
 }

 FUNC_4(VAR_6, (u8 *)VAR_9 + (VAR_5->offset & 3),
  VAR_5->len);
free:
 FUNC_2(VAR_9);

 return VAR_12;
}
