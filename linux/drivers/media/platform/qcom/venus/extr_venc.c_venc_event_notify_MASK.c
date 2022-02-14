
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct venus_inst {int session_error; int error; TYPE_1__* core; } ;
struct hfi_event_data {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev_enc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct venus_inst *VAR_1, u32 VAR_2,
         struct hfi_event_data *VAR_3)
{
 struct device *VAR_4 = VAR_1->core->dev_enc;

 if (VAR_2 == VAR_0) {
  VAR_1->session_error = 1;
  FUNC_0(VAR_4, "enc: event session error %x\n", VAR_1->error);
 }
}
