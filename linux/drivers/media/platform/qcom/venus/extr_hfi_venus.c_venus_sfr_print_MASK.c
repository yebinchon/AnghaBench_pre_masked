
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct hfi_sfr* kva; } ;
struct venus_hfi_device {TYPE_2__ sfr; TYPE_1__* core; } ;
struct hfi_sfr {char* data; int buf_size; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* dev; } ;


 int FUNC_0 (struct device*,char*,char*) ;
 void* FUNC_1 (char*,char,int) ;

__attribute__((used)) static void FUNC_2(struct venus_hfi_device *VAR_0)
{
 struct device *VAR_1 = VAR_0->core->dev;
 struct hfi_sfr *VAR_2 = VAR_0->sfr.kva;
 void *VAR_3;

 if (!VAR_2)
  return;

 VAR_3 = FUNC_1(VAR_2->data, '\0', VAR_2->buf_size);




 if (!VAR_3)
  VAR_2->data[VAR_2->buf_size - 1] = '\0';

 FUNC_0(VAR_1, "SFR message from FW: %s\n", VAR_2->data);
}
