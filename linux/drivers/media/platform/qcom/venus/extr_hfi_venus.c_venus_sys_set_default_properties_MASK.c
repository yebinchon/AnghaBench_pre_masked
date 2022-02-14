
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_hfi_device {TYPE_1__* core; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct venus_hfi_device*,int ) ;
 int FUNC_3 (struct venus_hfi_device*,int) ;
 int FUNC_4 (struct venus_hfi_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct venus_hfi_device *VAR_3)
{
 struct device *VAR_4 = VAR_3->core->dev;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_0);
 if (VAR_5)
  FUNC_1(VAR_4, "setting fw debug msg ON failed (%d)\n", VAR_5);






 if (FUNC_0(VAR_3->core))
  VAR_2 = 1;

 VAR_5 = FUNC_3(VAR_3, VAR_2);
 if (VAR_5)
  FUNC_1(VAR_4, "setting idle response ON failed (%d)\n", VAR_5);

 VAR_5 = FUNC_4(VAR_3, VAR_1);
 if (VAR_5)
  FUNC_1(VAR_4, "setting hw power collapse ON failed (%d)\n",
    VAR_5);

 return VAR_5;
}
