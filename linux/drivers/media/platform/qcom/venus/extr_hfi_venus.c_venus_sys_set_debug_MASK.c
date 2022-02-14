
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct venus_hfi_device {int dummy; } ;
struct hfi_sys_set_property_pkt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi_sys_set_property_pkt*,int ,int ) ;
 int FUNC_1 (struct venus_hfi_device*,struct hfi_sys_set_property_pkt*) ;

__attribute__((used)) static int FUNC_2(struct venus_hfi_device *VAR_2, u32 VAR_3)
{
 struct hfi_sys_set_property_pkt *VAR_4;
 u8 VAR_5[VAR_1];
 int VAR_6;

 VAR_4 = (struct hfi_sys_set_property_pkt *)VAR_5;

 FUNC_0(VAR_4, VAR_0, VAR_3);

 VAR_6 = FUNC_1(VAR_2, VAR_4);
 if (VAR_6)
  return VAR_6;

 return 0;
}
