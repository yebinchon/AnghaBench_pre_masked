
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union hfi_get_property {TYPE_1__* bufreq; } ;
typedef scalar_t__ u32 ;
struct venus_inst {int dummy; } ;
struct hfi_buffer_requirements {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct venus_inst*,scalar_t__,union hfi_get_property*) ;
 int FUNC_1 (struct hfi_buffer_requirements*,TYPE_1__*,int) ;
 int FUNC_2 (struct hfi_buffer_requirements*,int ,int) ;

int FUNC_3(struct venus_inst *VAR_3, u32 VAR_4,
       struct hfi_buffer_requirements *VAR_5)
{
 u32 VAR_6 = VAR_2;
 union hfi_get_property VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 if (VAR_5)
  FUNC_2(VAR_5, 0, sizeof(*VAR_5));

 VAR_9 = FUNC_0(VAR_3, VAR_6, &VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (VAR_7.bufreq[VAR_8].type != VAR_4)
   continue;

  if (VAR_5)
   FUNC_1(VAR_5, &VAR_7.bufreq[VAR_8], sizeof(*VAR_5));
  VAR_9 = 0;
  break;
 }

 return VAR_9;
}
