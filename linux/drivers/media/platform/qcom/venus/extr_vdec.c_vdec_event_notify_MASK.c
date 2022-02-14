
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_inst {int session_error; int error; struct venus_core* core; } ;
struct venus_core {struct device* dev_dec; } ;
struct hfi_event_data {int tag; int event_type; } ;
struct device {int dummy; } ;







 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct venus_inst*,struct hfi_event_data*,int) ;
 int FUNC_2 (struct venus_inst*,int ) ;

__attribute__((used)) static void FUNC_3(struct venus_inst *VAR_0, u32 VAR_1,
         struct hfi_event_data *VAR_2)
{
 struct venus_core *VAR_3 = VAR_0->core;
 struct device *VAR_4 = VAR_3->dev_dec;

 switch (VAR_1) {
 case 132:
  VAR_0->session_error = 1;
  FUNC_0(VAR_4, "dec: event session error %x\n", VAR_0->error);
  break;
 case 131:
  switch (VAR_2->event_type) {
  case 129:
   FUNC_1(VAR_0, VAR_2, 1);
   break;
  case 130:
   FUNC_1(VAR_0, VAR_2, 0);
   break;
  case 128:
   FUNC_2(VAR_0, VAR_2->tag);
   break;
  default:
   break;
  }
  break;
 default:
  break;
 }
}
