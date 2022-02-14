
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633_mbc {int usb_online; } ;
struct pcf50633 {int mbc_pdev; } ;


 struct pcf50633_mbc* FUNC_0 (int ) ;

int FUNC_1(struct pcf50633 *VAR_0)
{
 struct pcf50633_mbc *VAR_1 = FUNC_0(VAR_0->mbc_pdev);

 if (!VAR_1)
  return 0;

 return VAR_1->usb_online;
}
