
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int mode; } ;
struct brcm_usb_phy_data {TYPE_1__ ini; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 struct brcm_usb_phy_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,char*) ;
 char* FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct brcm_usb_phy_data *VAR_4 = FUNC_1(VAR_1);

 return FUNC_2(VAR_3, "%s\n",
  FUNC_3(&VAR_0[0],
         FUNC_0(VAR_0),
         VAR_4->ini.mode));
}
