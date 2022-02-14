
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zynqmp_nvmem_data {int nvmem; struct device* dev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {struct zynqmp_nvmem_data* priv; int reg_read; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct zynqmp_nvmem_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,TYPE_1__*) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct zynqmp_nvmem_data *VAR_7;

 VAR_7 = FUNC_3(VAR_6, sizeof(struct zynqmp_nvmem_data), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_3 = FUNC_5();
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_7->dev = VAR_6;
 VAR_2.dev = VAR_6;
 VAR_2.reg_read = VAR_4;
 VAR_2.priv = VAR_7;

 VAR_7->nvmem = FUNC_4(VAR_6, &VAR_2);

 return FUNC_2(VAR_7->nvmem);
}
