
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_inst {int core; } ;
struct venus_hfi_device {int dummy; } ;
struct hfi_session_pkt {int dummy; } ;


 int FUNC_0 (struct hfi_session_pkt*,int ,struct venus_inst*) ;
 struct venus_hfi_device* FUNC_1 (int ) ;
 int FUNC_2 (struct venus_hfi_device*,struct hfi_session_pkt*) ;

__attribute__((used)) static int FUNC_3(struct venus_inst *VAR_0, u32 VAR_1)
{
 struct venus_hfi_device *VAR_2 = FUNC_1(VAR_0->core);
 struct hfi_session_pkt VAR_3;

 FUNC_0(&VAR_3, VAR_1, VAR_0);

 return FUNC_2(VAR_2, &VAR_3);
}
