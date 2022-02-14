
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {scalar_t__* data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cdc_ncm_ctx {int timer_interval; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 struct usbnet* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct usbnet *VAR_4 = FUNC_0(FUNC_2(VAR_1));
 struct cdc_ncm_ctx *VAR_5 = (struct cdc_ncm_ctx *)VAR_4->data[0];

 return FUNC_1(VAR_3, "%u\n", VAR_5->timer_interval / (u32)VAR_0);
}
