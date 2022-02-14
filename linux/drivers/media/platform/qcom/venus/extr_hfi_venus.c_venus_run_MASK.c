
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int da; } ;
struct TYPE_6__ {int da; } ;
struct venus_hfi_device {TYPE_1__ sfr; TYPE_3__ ifaceq_table; TYPE_2__* core; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct venus_hfi_device*) ;
 int FUNC_2 (struct venus_hfi_device*) ;
 int FUNC_3 (struct venus_hfi_device*) ;
 int FUNC_4 (struct venus_hfi_device*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct venus_hfi_device *VAR_6)
{
 struct device *VAR_7 = VAR_6->core->dev;
 int VAR_8;





 FUNC_3(VAR_6);

 FUNC_4(VAR_6, VAR_4, VAR_6->ifaceq_table.da);
 FUNC_4(VAR_6, VAR_5, VAR_3);
 FUNC_4(VAR_6, VAR_1, VAR_6->ifaceq_table.da);
 FUNC_4(VAR_6, VAR_0, 0x01);
 if (VAR_6->sfr.da)
  FUNC_4(VAR_6, VAR_2, VAR_6->sfr.da);

 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8) {
  FUNC_0(VAR_7, "failed to reset venus core\n");
  return VAR_8;
 }

 FUNC_2(VAR_6);

 return 0;
}
