
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct venus_inst {int core; } ;
struct venus_hfi_device {int dummy; } ;
struct hfi_session_release_buffer_pkt {int dummy; } ;
struct hfi_buffer_desc {scalar_t__ buffer_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi_session_release_buffer_pkt*,struct venus_inst*,struct hfi_buffer_desc*) ;
 struct venus_hfi_device* FUNC_1 (int ) ;
 int FUNC_2 (struct venus_hfi_device*,struct hfi_session_release_buffer_pkt*) ;

__attribute__((used)) static int FUNC_3(struct venus_inst *VAR_2,
           struct hfi_buffer_desc *VAR_3)
{
 struct venus_hfi_device *VAR_4 = FUNC_1(VAR_2->core);
 struct hfi_session_release_buffer_pkt *VAR_5;
 u8 VAR_6[VAR_1];
 int VAR_7;

 if (VAR_3->buffer_type == VAR_0)
  return 0;

 VAR_5 = (struct hfi_session_release_buffer_pkt *)VAR_6;

 VAR_7 = FUNC_0(VAR_5, VAR_2, VAR_3);
 if (VAR_7)
  return VAR_7;

 return FUNC_2(VAR_4, VAR_5);
}
