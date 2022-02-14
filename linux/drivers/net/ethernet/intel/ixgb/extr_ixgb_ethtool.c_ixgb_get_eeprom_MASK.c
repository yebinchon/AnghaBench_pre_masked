
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ixgb_hw {int vendor_id; int device_id; } ;
struct ixgb_adapter {struct ixgb_hw hw; } ;
struct ethtool_eeprom {int len; int magic; int offset; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ixgb_hw*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 struct ixgb_adapter* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_3,
    struct ethtool_eeprom *VAR_4, u8 *VAR_5)
{
 struct ixgb_adapter *VAR_6 = FUNC_5(VAR_3);
 struct ixgb_hw *VAR_7 = &VAR_6->hw;
 __le16 *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13 = 0;

 if (VAR_4->len == 0) {
  VAR_13 = -VAR_0;
  goto geeprom_error;
 }

 VAR_4->magic = VAR_7->vendor_id | (VAR_7->device_id << 16);

 VAR_10 = FUNC_0(VAR_3);

 if (VAR_4->offset > VAR_4->offset + VAR_4->len) {
  VAR_13 = -VAR_0;
  goto geeprom_error;
 }

 if ((VAR_4->offset + VAR_4->len) > VAR_10)
  VAR_4->len = (VAR_10 - VAR_4->offset);

 VAR_11 = VAR_4->offset >> 1;
 VAR_12 = (VAR_4->offset + VAR_4->len - 1) >> 1;

 VAR_8 = FUNC_3(VAR_12 - VAR_11 + 1,
        sizeof(__le16),
        VAR_2);
 if (!VAR_8)
  return -VAR_1;


 for (VAR_9 = 0; VAR_9 <= (VAR_12 - VAR_11); VAR_9++)
  VAR_8[VAR_9] = FUNC_1(VAR_7, (VAR_11 + VAR_9));

 FUNC_4(VAR_5, (u8 *)VAR_8 + (VAR_4->offset & 1), VAR_4->len);
 FUNC_2(VAR_8);

geeprom_error:
 return VAR_13;
}
