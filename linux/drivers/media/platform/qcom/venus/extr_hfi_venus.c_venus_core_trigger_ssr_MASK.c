
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_hfi_device {int dummy; } ;
struct venus_core {int dummy; } ;
struct hfi_sys_test_ssr_pkt {int dummy; } ;


 int FUNC_0 (struct hfi_sys_test_ssr_pkt*,int ) ;
 struct venus_hfi_device* FUNC_1 (struct venus_core*) ;
 int FUNC_2 (struct venus_hfi_device*,struct hfi_sys_test_ssr_pkt*) ;

__attribute__((used)) static int FUNC_3(struct venus_core *VAR_0, u32 VAR_1)
{
 struct venus_hfi_device *VAR_2 = FUNC_1(VAR_0);
 struct hfi_sys_test_ssr_pkt VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;

 return FUNC_2(VAR_2, &VAR_3);
}
