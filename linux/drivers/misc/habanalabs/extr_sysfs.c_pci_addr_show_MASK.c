
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hl_device {TYPE_1__* pdev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int number; } ;
struct TYPE_3__ {int devfn; TYPE_2__* bus; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct hl_device* FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,char*,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct hl_device *VAR_3 = FUNC_2(VAR_0);

 return FUNC_4(VAR_2, "%04x:%02x:%02x.%x\n",
   FUNC_3(VAR_3->pdev->bus),
   VAR_3->pdev->bus->number,
   FUNC_1(VAR_3->pdev->devfn),
   FUNC_0(VAR_3->pdev->devfn));
}
