
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct __vxge_hw_vpath_handle {int dummy; } ;
typedef enum vxge_hw_vpath_mac_addr_add_mode { ____Placeholder_vxge_hw_vpath_mac_addr_add_mode } vxge_hw_vpath_mac_addr_add_mode ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (size_t) ;



 int FUNC_3 (struct __vxge_hw_vpath_handle*,int ,int ,int ,int ,int) ;

enum vxge_hw_status
FUNC_4(
 struct __vxge_hw_vpath_handle *VAR_5,
 u8 (VAR_6)[VAR_0],
 u8 (VAR_7)[VAR_0],
 enum vxge_hw_vpath_mac_addr_add_mode VAR_8)
{
 u32 VAR_9;
 u64 VAR_10 = 0ULL;
 u64 VAR_11 = 0ULL;
 enum vxge_hw_status VAR_12 = VAR_2;

 if (VAR_5 == ((void*)0)) {
  VAR_12 = VAR_1;
  goto exit;
 }

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_10 <<= 8;
  VAR_10 |= (u8)VAR_6[VAR_9];

  VAR_11 <<= 8;
  VAR_11 |= (u8)VAR_7[VAR_9];
 }

 switch (VAR_8) {
 case 130:
  VAR_9 = 0;
  break;
 case 129:
  VAR_9 = 1;
  break;
 case 128:
  VAR_9 = 2;
  break;
 default:
  VAR_9 = 0;
  break;
 }

 VAR_12 = FUNC_3(VAR_5,
   VAR_3,
   VAR_4,
   0,
   FUNC_0(VAR_10),
   FUNC_1(VAR_11)|
   FUNC_2(VAR_9));
exit:
 return VAR_12;
}
