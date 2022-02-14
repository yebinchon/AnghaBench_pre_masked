
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {scalar_t__* data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cdc_ncm_ctx {unsigned long min_tx_pkt; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,unsigned long*) ;
 struct usbnet* FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct usbnet *VAR_5 = FUNC_1(FUNC_2(VAR_1));
 struct cdc_ncm_ctx *VAR_6 = (struct cdc_ncm_ctx *)VAR_5->data[0];
 unsigned long VAR_7;


 if (FUNC_0(VAR_3, 0, &VAR_7))
  return -VAR_0;

 VAR_6->min_tx_pkt = VAR_7;
 return VAR_4;
}
