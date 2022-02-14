
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int core; } ;
struct venus_hfi_device {int dummy; } ;
struct hfi_session_fill_buffer_pkt {int dummy; } ;
struct hfi_frame_data {int dummy; } ;


 int FUNC_0 (struct hfi_session_fill_buffer_pkt*,struct venus_inst*,struct hfi_frame_data*) ;
 struct venus_hfi_device* FUNC_1 (int ) ;
 int FUNC_2 (struct venus_hfi_device*,struct hfi_session_fill_buffer_pkt*) ;

__attribute__((used)) static int FUNC_3(struct venus_inst *VAR_0,
        struct hfi_frame_data *VAR_1)
{
 struct venus_hfi_device *VAR_2 = FUNC_1(VAR_0->core);
 struct hfi_session_fill_buffer_pkt VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3, VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 return FUNC_2(VAR_2, &VAR_3);
}
