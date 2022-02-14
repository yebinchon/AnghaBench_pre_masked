
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_inst {int core; } ;
struct venus_hfi_device {TYPE_1__* core; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct venus_hfi_device* FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct venus_inst*,int ) ;
 scalar_t__ FUNC_3 (struct venus_hfi_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct venus_inst *VAR_2)
{
 struct venus_hfi_device *VAR_3 = FUNC_1(VAR_2->core);
 struct device *VAR_4 = VAR_3->core->dev;

 if (VAR_1) {
  if (FUNC_3(VAR_3, VAR_1))
   FUNC_0(VAR_4, "fw coverage msg ON failed\n");
 }

 return FUNC_2(VAR_2, VAR_0);
}
