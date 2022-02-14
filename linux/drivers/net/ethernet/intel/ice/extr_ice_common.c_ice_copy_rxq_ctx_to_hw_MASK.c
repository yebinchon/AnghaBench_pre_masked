
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ice_hw {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct ice_hw*,int ,char*,int,int ) ;
 int FUNC_2 (struct ice_hw*,int ,int ) ;

__attribute__((used)) static enum ice_status
FUNC_3(struct ice_hw *VAR_5, u8 *VAR_6, u32 VAR_7)
{
 u8 VAR_8;

 if (!VAR_6)
  return VAR_1;

 if (VAR_7 > VAR_4)
  return VAR_2;


 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  FUNC_2(VAR_5, FUNC_0(VAR_8, VAR_7),
       *((u32 *)(VAR_6 + (VAR_8 * sizeof(u32)))));

  FUNC_1(VAR_5, VAR_0, "qrxdata[%d]: %08X\n", VAR_8,
     *((u32 *)(VAR_6 + (VAR_8 * sizeof(u32)))));
 }

 return 0;
}
