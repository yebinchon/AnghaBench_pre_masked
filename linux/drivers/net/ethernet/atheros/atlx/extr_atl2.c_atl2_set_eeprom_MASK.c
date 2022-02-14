
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
 int VAR_4 ;
 int FUNC_0 (struct atl2_hw*,int,int *) ;
 int FUNC_1 (struct atl2_hw*,int,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 struct atl2_adapter* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5,
 struct ethtool_eeprom *VAR_6, u8 *VAR_7)
{
 struct atl2_adapter *VAR_8 = FUNC_5(VAR_5);
 struct atl2_hw *VAR_9 = &VAR_8->hw;
 u32 *VAR_10;
 u32 *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15 = 0;
 int VAR_16;

 if (VAR_6->len == 0)
  return -VAR_3;

 if (VAR_6->magic != (VAR_9->vendor_id | (VAR_9->device_id << 16)))
  return -VAR_0;

 VAR_12 = 512;

 VAR_13 = VAR_6->offset >> 2;
 VAR_14 = (VAR_6->offset + VAR_6->len - 1) >> 2;
 VAR_10 = FUNC_3(VAR_12, VAR_4);
 if (!VAR_10)
  return -VAR_2;

 VAR_11 = VAR_10;

 if (VAR_6->offset & 3) {


  if (!FUNC_0(VAR_9, VAR_13*4, &(VAR_10[0]))) {
   VAR_15 = -VAR_1;
   goto out;
  }
  VAR_11++;
 }
 if (((VAR_6->offset + VAR_6->len) & 3)) {




  if (!FUNC_0(VAR_9, VAR_14 * 4,
     &(VAR_10[VAR_14 - VAR_13]))) {
   VAR_15 = -VAR_1;
   goto out;
  }
 }


 FUNC_4(VAR_11, VAR_7, VAR_6->len);

 for (VAR_16 = 0; VAR_16 < VAR_14 - VAR_13 + 1; VAR_16++) {
  if (!FUNC_1(VAR_9, ((VAR_13+VAR_16)*4), VAR_10[VAR_16])) {
   VAR_15 = -VAR_1;
   goto out;
  }
 }
 out:
 FUNC_2(VAR_10);
 return VAR_15;
}
