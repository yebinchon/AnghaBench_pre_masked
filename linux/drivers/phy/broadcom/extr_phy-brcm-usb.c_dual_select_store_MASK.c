
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
 int FUNC_1 (int *,int) ;
 struct brcm_usb_phy_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char const*,int*) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct brcm_usb_phy_data *VAR_6 = FUNC_2(VAR_2);
 int VAR_7;
 int VAR_8;

 FUNC_3(&VAR_1);
 VAR_8 = FUNC_5(&VAR_0[0],
       FUNC_0(VAR_0), VAR_4, &VAR_7);
 if (!VAR_8) {
  FUNC_1(&VAR_6->ini, VAR_7);
  VAR_8 = VAR_5;
 }
 FUNC_4(&VAR_1);
 return VAR_8;
}
