
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {scalar_t__* data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cdc_ncm_ctx {int tx_max; } ;
typedef int ssize_t ;


 struct usbnet* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct usbnet *VAR_3 = FUNC_0(FUNC_2(VAR_0));
 struct cdc_ncm_ctx *VAR_4 = (struct cdc_ncm_ctx *)VAR_3->data[0];

 return FUNC_1(VAR_2, "%u\n", VAR_4->tx_max);
}
