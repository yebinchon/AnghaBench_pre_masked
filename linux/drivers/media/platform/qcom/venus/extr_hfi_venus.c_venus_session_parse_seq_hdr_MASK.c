
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct venus_inst {int core; } ;
struct venus_hfi_device {int dummy; } ;
struct hfi_session_parse_sequence_header_pkt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi_session_parse_sequence_header_pkt*,struct venus_inst*,int ,int ) ;
 struct venus_hfi_device* FUNC_1 (int ) ;
 int FUNC_2 (struct venus_hfi_device*,struct hfi_session_parse_sequence_header_pkt*) ;

__attribute__((used)) static int FUNC_3(struct venus_inst *VAR_1, u32 VAR_2,
           u32 VAR_3)
{
 struct venus_hfi_device *VAR_4 = FUNC_1(VAR_1->core);
 struct hfi_session_parse_sequence_header_pkt *VAR_5;
 u8 VAR_6[VAR_0];
 int VAR_7;

 VAR_5 = (struct hfi_session_parse_sequence_header_pkt *)VAR_6;

 VAR_7 = FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 return 0;
}
