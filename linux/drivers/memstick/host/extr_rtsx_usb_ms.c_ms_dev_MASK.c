
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtsx_usb_ms {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;



__attribute__((used)) static inline struct device *FUNC_0(struct rtsx_usb_ms *VAR_0)
{
 return &(VAR_0->pdev->dev);
}
