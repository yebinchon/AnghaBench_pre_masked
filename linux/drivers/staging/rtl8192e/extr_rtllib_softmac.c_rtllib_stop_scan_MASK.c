
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {int softmac_features; int dev; int (* rtllib_stop_hw_scan ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct rtllib_device*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct rtllib_device *VAR_1)
{
 if (VAR_1->softmac_features & VAR_0) {
  FUNC_0(VAR_1);
 } else {
  if (VAR_1->rtllib_stop_hw_scan)
   VAR_1->rtllib_stop_hw_scan(VAR_1->dev);
 }
}
