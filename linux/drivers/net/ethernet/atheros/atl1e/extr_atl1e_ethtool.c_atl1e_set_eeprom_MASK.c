
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int magic; int offset; int len; } ;
struct atl1e_hw {int vendor_id; int device_id; } ;
struct atl1e_adapter {struct atl1e_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct atl1e_hw*,int,int *) ;
 int FUNC_1 (struct atl1e_hw*,int,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 struct atl1e_adapter* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6,
       struct ethtool_eeprom *VAR_7, u8 *VAR_8)
{
 struct atl1e_adapter *VAR_9 = FUNC_5(VAR_6);
 struct atl1e_hw *VAR_10 = &VAR_9->hw;
 u32 *VAR_11;
 u32 *VAR_12;
 int VAR_13, VAR_14;
 int VAR_15 = 0;
 int VAR_16;

 if (VAR_7->len == 0)
  return -VAR_4;

 if (VAR_7->magic != (VAR_10->vendor_id | (VAR_10->device_id << 16)))
  return -VAR_1;

 VAR_13 = VAR_7->offset >> 2;
 VAR_14 = (VAR_7->offset + VAR_7->len - 1) >> 2;
 VAR_11 = FUNC_3(VAR_0, VAR_5);
 if (VAR_11 == ((void*)0))
  return -VAR_3;

 VAR_12 = VAR_11;

 if (VAR_7->offset & 3) {


  if (!FUNC_0(VAR_10, VAR_13 * 4, &(VAR_11[0]))) {
   VAR_15 = -VAR_2;
   goto out;
  }
  VAR_12++;
 }
 if (((VAR_7->offset + VAR_7->len) & 3)) {



  if (!FUNC_0(VAR_10, VAR_14 * 4,
    &(VAR_11[VAR_14 - VAR_13]))) {
   VAR_15 = -VAR_2;
   goto out;
  }
 }


 FUNC_4(VAR_12, VAR_8, VAR_7->len);

 for (VAR_16 = 0; VAR_16 < VAR_14 - VAR_13 + 1; VAR_16++) {
  if (!FUNC_1(VAR_10, ((VAR_13 + VAR_16) * 4),
      VAR_11[VAR_16])) {
   VAR_15 = -VAR_2;
   goto out;
  }
 }
out:
 FUNC_2(VAR_11);
 return VAR_15;
}
