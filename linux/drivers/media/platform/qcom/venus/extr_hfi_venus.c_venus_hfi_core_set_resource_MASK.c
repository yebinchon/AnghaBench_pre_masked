
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct venus_hfi_device {int dummy; } ;
struct venus_core {int dummy; } ;
struct hfi_sys_set_resource_pkt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi_sys_set_resource_pkt*,int ,int ,int ,void*) ;
 struct venus_hfi_device* FUNC_1 (struct venus_core*) ;
 int FUNC_2 (struct venus_hfi_device*,struct hfi_sys_set_resource_pkt*) ;

__attribute__((used)) static int FUNC_3(struct venus_core *VAR_2, u32 VAR_3,
           u32 VAR_4, u32 VAR_5, void *VAR_6)
{
 struct venus_hfi_device *VAR_7 = FUNC_1(VAR_2);
 struct hfi_sys_set_resource_pkt *VAR_8;
 u8 VAR_9[VAR_0];
 int VAR_10;

 if (VAR_3 == VAR_1)
  return 0;

 VAR_8 = (struct hfi_sys_set_resource_pkt *)VAR_9;

 VAR_10 = FUNC_0(VAR_8, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_7, VAR_8);
 if (VAR_10)
  return VAR_10;

 return 0;
}
