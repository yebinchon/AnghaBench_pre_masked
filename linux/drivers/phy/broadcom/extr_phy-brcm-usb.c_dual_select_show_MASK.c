
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct brcm_usb_phy_data {int ini; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;
 struct brcm_usb_phy_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,char*) ;
 int VAR_1 ;
 char* FUNC_6 (int *,int ,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
    struct device_attribute *VAR_3,
    char *VAR_4)
{
 struct brcm_usb_phy_data *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 FUNC_3(&VAR_1);
 VAR_6 = FUNC_1(&VAR_5->ini);
 FUNC_4(&VAR_1);
 return FUNC_5(VAR_4, "%s\n",
  FUNC_6(&VAR_0[0],
         FUNC_0(VAR_0),
         VAR_6));
}
