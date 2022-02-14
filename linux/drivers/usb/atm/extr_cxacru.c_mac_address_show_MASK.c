
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxacru_data {TYPE_2__* usbatm; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* atm_dev; } ;
struct TYPE_3__ {int esi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int ) ;
 int FUNC_1 (struct device*) ;
 struct cxacru_data* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
 struct device_attribute *VAR_3, char *VAR_4)
{
 struct cxacru_data *VAR_5 = FUNC_2(
   FUNC_1(VAR_2));

 if (VAR_5 == ((void*)0) || VAR_5->usbatm->atm_dev == ((void*)0))
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_1, "%pM\n",
  VAR_5->usbatm->atm_dev->esi);
}
