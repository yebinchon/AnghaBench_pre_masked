
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_inst {int core; } ;
struct venus_hfi_device {int dummy; } ;
struct hfi_session_init_pkt {int dummy; } ;


 int FUNC_0 (struct hfi_session_init_pkt*,struct venus_inst*,int ,int ) ;
 struct venus_hfi_device* FUNC_1 (int ) ;
 int FUNC_2 (struct venus_hfi_device*) ;
 int FUNC_3 (struct venus_hfi_device*,struct hfi_session_init_pkt*) ;

__attribute__((used)) static int FUNC_4(struct venus_inst *VAR_0, u32 VAR_1,
         u32 VAR_2)
{
 struct venus_hfi_device *VAR_3 = FUNC_1(VAR_0->core);
 struct hfi_session_init_pkt VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4, VAR_0, VAR_1, VAR_2);
 if (VAR_5)
  goto err;

 VAR_5 = FUNC_3(VAR_3, &VAR_4);
 if (VAR_5)
  goto err;

 return 0;

err:
 FUNC_2(VAR_3);
 return VAR_5;
}
