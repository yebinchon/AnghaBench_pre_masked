
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {struct e1000_hw hw; } ;
struct ethtool_eeprom {int offset; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int,int*) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 struct igb_adapter* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4,
     struct ethtool_eeprom *VAR_5, u8 *VAR_6)
{
 struct igb_adapter *VAR_7 = FUNC_5(VAR_4);
 struct e1000_hw *VAR_8 = &VAR_7->hw;
 u32 VAR_9 = 0;
 u16 *VAR_10;
 u16 VAR_11, VAR_12;
 int VAR_13 = 0;

 if (VAR_5->len == 0)
  return -VAR_0;

 VAR_11 = VAR_5->offset >> 1;
 VAR_12 = (VAR_5->offset + VAR_5->len - 1) >> 1;

 VAR_10 = FUNC_3(VAR_12 - VAR_11 + 1, sizeof(u16),
     VAR_3);
 if (!VAR_10)
  return -VAR_2;


 for (VAR_13 = 0; VAR_13 < VAR_12 - VAR_11 + 1; VAR_13++) {
  VAR_9 = FUNC_1(VAR_8, (VAR_11 + VAR_13) * 2,
           &VAR_10[VAR_13]);
  if (VAR_9) {

   FUNC_2(VAR_10);
   return -VAR_1;
  }

  FUNC_0(&VAR_10[VAR_13]);
 }

 FUNC_4(VAR_6, (u8 *)VAR_10 + (VAR_5->offset & 1), VAR_5->len);
 FUNC_2(VAR_10);

 return 0;
}
