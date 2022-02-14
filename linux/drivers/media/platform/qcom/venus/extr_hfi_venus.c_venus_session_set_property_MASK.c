
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct venus_inst {int core; } ;
struct venus_hfi_device {int dummy; } ;
struct hfi_session_set_property_pkt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi_session_set_property_pkt*,struct venus_inst*,int ,void*) ;
 struct venus_hfi_device* FUNC_1 (int ) ;
 int FUNC_2 (struct venus_hfi_device*,struct hfi_session_set_property_pkt*) ;

__attribute__((used)) static int FUNC_3(struct venus_inst *VAR_2, u32 VAR_3,
          void *VAR_4)
{
 struct venus_hfi_device *VAR_5 = FUNC_1(VAR_2->core);
 struct hfi_session_set_property_pkt *VAR_6;
 u8 VAR_7[VAR_1];
 int VAR_8;

 VAR_6 = (struct hfi_session_set_property_pkt *)VAR_7;

 VAR_8 = FUNC_0(VAR_6, VAR_2, VAR_3, VAR_4);
 if (VAR_8 == -VAR_0)
  return 0;
 if (VAR_8)
  return VAR_8;

 return FUNC_2(VAR_5, VAR_6);
}
