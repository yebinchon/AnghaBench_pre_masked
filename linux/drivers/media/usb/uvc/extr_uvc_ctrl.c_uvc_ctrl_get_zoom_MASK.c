
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uvc_control_mapping {int dummy; } ;
typedef int s8 ;
typedef int const s32 ;
__attribute__((used)) static s32 FUNC_0(struct uvc_control_mapping *VAR_0,
 u8 VAR_1, const u8 *VAR_2)
{
 s8 VAR_3 = (s8)VAR_2[0];

 switch (VAR_1) {
 case 132:
  return (VAR_3 == 0) ? 0 : (VAR_3 > 0 ? VAR_2[2] : -VAR_2[2]);

 case 129:
 case 130:
 case 128:
 case 131:
 default:
  return VAR_2[2];
 }
}
